/* mbed Microcontroller Library
 * Copyright (c) 2006-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "mbed_assert.h"
#include "PeripheralPins.h"
#include "mbed_error.h"
#include "fsl_clock.h"

#define IOMUXC_BASE_ADDR 0x30330000U
#define IOMUXC_GPIO1_BASE_ADDR 0x30330028U
#define IOMUXC_GPIO2_BASE_ADDR 0x303300A0U
#define IOMUXC_GPIO3_BASE_ADDR 0x303300F4U
#define IOMUXC_GPIO4_BASE_ADDR 0x3033015CU
#define IOMUXC_GPIO5_BASE_ADDR 0x303301DCU
#define IOMUXC_CONFIG_REGISTER_OFFSET 0x268

static uint32_t iomux_base_addrs[FSL_FEATURE_SOC_IGPIO_COUNT] = { IOMUXC_GPIO1_BASE_ADDR, IOMUXC_GPIO2_BASE_ADDR, IOMUXC_GPIO3_BASE_ADDR, IOMUXC_GPIO4_BASE_ADDR, IOMUXC_GPIO5_BASE_ADDR };

void pin_function(PinName pin, int function)
{
    MBED_ASSERT(pin != (PinName)NC);
    uint32_t muxregister = iomux_base_addrs[(pin >> GPIO_PORT_SHIFT) - 1] + ((pin & 0xFF) * 4);
    uint32_t daisyregister;

    /* Write to the mux register */
    *((volatile uint32_t *)muxregister) = IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(function) |
                                          IOMUXC_SW_MUX_CTL_PAD_SION((function >> SION_BIT_SHIFT) & 0x1);

    /* If required write to the input daisy register */
    daisyregister = (function >> DAISY_REG_SHIFT) & 0xFFF;
    if (daisyregister != 0) {
        daisyregister = daisyregister + IOMUXC_BASE_ADDR;
        *((volatile uint32_t *)daisyregister) = IOMUXC_SELECT_INPUT_DAISY(((function >> DAISY_REG_VALUE_SHIFT) & 0xF));
    }
}

void pin_mode(PinName pin, PinMode mode)
{
    MBED_ASSERT(pin != (PinName)NC);
    uint32_t reg;
    uint32_t muxregister = iomux_base_addrs[(pin >> GPIO_PORT_SHIFT) - 1] + ((pin & 0xFF) * 4);
    uint32_t configregister = muxregister + IOMUXC_CONFIG_REGISTER_OFFSET;

    reg = *((volatile uint32_t *)configregister);
    switch (mode) {
        case PullNone:
            /* Write 0 to the PUE bit */
            reg &= ~(IOMUXC_SW_PAD_CTL_PAD_PUE_MASK);
            break;
        case PullUp:
            /* Write 1 to PUE bit to enable the pull configuration */
            reg |= IOMUXC_SW_PAD_CTL_PAD_PUE_MASK;
            break;
        default:
            break;
    }

    /* Below settings for DSE and SPEED fields per test results */
    reg = (reg & ~(IOMUXC_SW_PAD_CTL_PAD_DSE_MASK | IOMUXC_SW_PAD_CTL_PAD_SRE_MASK)) |
           IOMUXC_SW_PAD_CTL_PAD_DSE(6U) | IOMUXC_SW_PAD_CTL_PAD_SRE(1U);

    /* Write value to the pad register */
    *((volatile uint32_t *)configregister) = reg;
}

void pin_mode_opendrain(PinName pin, bool enable)
{
    MBED_ASSERT(pin != (PinName)NC);

    uint32_t muxregister = iomux_base_addrs[(pin >> GPIO_PORT_SHIFT) - 1] + ((pin & 0xFF) * 4);
    uint32_t configregister = muxregister + IOMUXC_CONFIG_REGISTER_OFFSET;

    if (enable) {
        *((volatile uint32_t *)configregister) |= IOMUXC_SW_PAD_CTL_PAD_ODE_MASK;
    } else {
        *((volatile uint32_t *)configregister) &= ~IOMUXC_SW_PAD_CTL_PAD_ODE_MASK;
    }
}

