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
#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    PIN_INPUT,
    PIN_OUTPUT
} PinDirection;

#define GPIO_PORT_SHIFT      12
#define GPIO_MUX_PORT        5

typedef enum {
	GPIO1_IO00 = ((1 << GPIO_PORT_SHIFT) | 0),
    GPIO1_IO01 = ((1 << GPIO_PORT_SHIFT) | 1),
    GPIO1_IO02 = ((1 << GPIO_PORT_SHIFT) | 2),
    GPIO1_IO03 = ((1 << GPIO_PORT_SHIFT) | 3),
    GPIO1_IO04 = ((1 << GPIO_PORT_SHIFT) | 4),
    GPIO1_IO05 = ((1 << GPIO_PORT_SHIFT) | 5),
    GPIO1_IO06 = ((1 << GPIO_PORT_SHIFT) | 6),
    GPIO1_IO07 = ((1 << GPIO_PORT_SHIFT) | 7),
    GPIO1_IO08 = ((1 << GPIO_PORT_SHIFT) | 8),
    GPIO1_IO09 = ((1 << GPIO_PORT_SHIFT) | 9),
    GPIO1_IO10 = ((1 << GPIO_PORT_SHIFT) | 10),
    GPIO1_IO11 = ((1 << GPIO_PORT_SHIFT) | 11),
    GPIO1_IO12 = ((1 << GPIO_PORT_SHIFT) | 12),
    GPIO1_IO13 = ((1 << GPIO_PORT_SHIFT) | 13),
    GPIO1_IO14 = ((1 << GPIO_PORT_SHIFT) | 14),
    GPIO1_IO15 = ((1 << GPIO_PORT_SHIFT) | 15),
	GPIO1_IO16 = ((1 << GPIO_PORT_SHIFT) | 16),  // ENET_MDC,     ALT 5
    GPIO1_IO17 = ((1 << GPIO_PORT_SHIFT) | 17),  // ENET_MDIO,    ALT 5
    GPIO1_IO18 = ((1 << GPIO_PORT_SHIFT) | 18),  // ENET_TD3,     ALT 5
    GPIO1_IO19 = ((1 << GPIO_PORT_SHIFT) | 19),  // ENET_TD2,     ALT 5
    GPIO1_IO20 = ((1 << GPIO_PORT_SHIFT) | 20),  // ENET_TD1,     ALT 5
    GPIO1_IO21 = ((1 << GPIO_PORT_SHIFT) | 21),  // ENET_TD0,     ALT 5
    GPIO1_IO22 = ((1 << GPIO_PORT_SHIFT) | 22),  // ENET_TX_CTL,  ALT 5
    GPIO1_IO23 = ((1 << GPIO_PORT_SHIFT) | 23),  // ENET_TXC,     ALT 5
    GPIO1_IO24 = ((1 << GPIO_PORT_SHIFT) | 24),  // ENET_RX_CTL,  ALT 5
    GPIO1_IO25 = ((1 << GPIO_PORT_SHIFT) | 25),  // ENET_RXC,     ALT 5
    GPIO1_IO26 = ((1 << GPIO_PORT_SHIFT) | 26),  // ENET_RD0,     ALT 5
    GPIO1_IO27 = ((1 << GPIO_PORT_SHIFT) | 27),  // ENET_RD1,     ALT 5
    GPIO1_IO28 = ((1 << GPIO_PORT_SHIFT) | 28),  // ENET_RD2,     ALT 5
    GPIO1_IO29 = ((1 << GPIO_PORT_SHIFT) | 29),  // ENET_RD3,     ALT 5

	GPIO2_IO00 = ((2 << GPIO_PORT_SHIFT) | 0),   // SD1_CLK,      ALT 5
    GPIO2_IO01 = ((2 << GPIO_PORT_SHIFT) | 1),   // SD1_CMD,      ALT 5
    GPIO2_IO02 = ((2 << GPIO_PORT_SHIFT) | 2),   // SD1_DATA0,    ALT 5
    GPIO2_IO03 = ((2 << GPIO_PORT_SHIFT) | 3),   // SD1_DATA1,    ALT 5
    GPIO2_IO04 = ((2 << GPIO_PORT_SHIFT) | 4),   // SD1_DATA2,    ALT 5
    GPIO2_IO05 = ((2 << GPIO_PORT_SHIFT) | 5),   // SD1_DATA3,    ALT 5
    GPIO2_IO06 = ((2 << GPIO_PORT_SHIFT) | 6),   // SD1_DATA4,    ALT 5
    GPIO2_IO07 = ((2 << GPIO_PORT_SHIFT) | 7),   // SD1_DATA5,    ALT 5
    GPIO2_IO08 = ((2 << GPIO_PORT_SHIFT) | 8),   // SD1_DATA6,    ALT 5
    GPIO2_IO09 = ((2 << GPIO_PORT_SHIFT) | 9),   // SD1_DATA7,    ALT 5
    GPIO2_IO10 = ((2 << GPIO_PORT_SHIFT) | 10),  // SD1_RESET_B,  ALT 5
    GPIO2_IO11 = ((2 << GPIO_PORT_SHIFT) | 11),  // SD1_STROBE,   ALT 5
    GPIO2_IO12 = ((2 << GPIO_PORT_SHIFT) | 12),  // SD2_CD_B,     ALT 5
    GPIO2_IO13 = ((2 << GPIO_PORT_SHIFT) | 13),  // SD2_CLK,      ALT 5
    GPIO2_IO14 = ((2 << GPIO_PORT_SHIFT) | 14),  // SD2_CMD,      ALT 5
    GPIO2_IO15 = ((2 << GPIO_PORT_SHIFT) | 15),  // SD2_DATA0,    ALT 5
	GPIO2_IO16 = ((2 << GPIO_PORT_SHIFT) | 16),  // SD2_DATA1,    ALT 5
    GPIO2_IO17 = ((2 << GPIO_PORT_SHIFT) | 17),  // SD2_DATA2,    ALT 5
    GPIO2_IO18 = ((2 << GPIO_PORT_SHIFT) | 18),  // SD2_DATA3,    ALT 5
    GPIO2_IO19 = ((2 << GPIO_PORT_SHIFT) | 19),  // SD2_RESET_B,  ALT 5
    GPIO2_IO20 = ((2 << GPIO_PORT_SHIFT) | 20),  // SD2_WP,       ALT 5

	GPIO3_IO00 = ((3 << GPIO_PORT_SHIFT) | 0),   // NAND_ALE,     ALT 5
    GPIO3_IO01 = ((3 << GPIO_PORT_SHIFT) | 1),   // NAND_CE0_B,   ALT 5
    GPIO3_IO02 = ((3 << GPIO_PORT_SHIFT) | 2),   // NAND_CE1_B,   ALT 5
    GPIO3_IO03 = ((3 << GPIO_PORT_SHIFT) | 3),   // NAND_CE2_B,   ALT 5
    GPIO3_IO04 = ((3 << GPIO_PORT_SHIFT) | 4),   // NAND_CE3_B,   ALT 5
    GPIO3_IO05 = ((3 << GPIO_PORT_SHIFT) | 5),   // NAND_CLE,     ALT 5
    GPIO3_IO06 = ((3 << GPIO_PORT_SHIFT) | 6),   // NAND_DATA00,  ALT 5
    GPIO3_IO07 = ((3 << GPIO_PORT_SHIFT) | 7),   // NAND_DATA01,  ALT 5
    GPIO3_IO08 = ((3 << GPIO_PORT_SHIFT) | 8),   // NAND_DATA02,  ALT 5
    GPIO3_IO09 = ((3 << GPIO_PORT_SHIFT) | 9),   // NAND_DATA03,  ALT 5
    GPIO3_IO10 = ((3 << GPIO_PORT_SHIFT) | 10),  // NAND_DATA04,  ALT 5
    GPIO3_IO11 = ((3 << GPIO_PORT_SHIFT) | 11),  // NAND_DATA05,  ALT 5
    GPIO3_IO12 = ((3 << GPIO_PORT_SHIFT) | 12),  // NAND_DATA06,  ALT 5
    GPIO3_IO13 = ((3 << GPIO_PORT_SHIFT) | 13),  // NAND_DATA07,  ALT 5
    GPIO3_IO14 = ((3 << GPIO_PORT_SHIFT) | 14),  // NAND_DQS,     ALT 5
    GPIO3_IO15 = ((3 << GPIO_PORT_SHIFT) | 15),  // NAND_RE_B,    ALT 5
	GPIO3_IO16 = ((3 << GPIO_PORT_SHIFT) | 16),  // NAND_READY_B, ALT 5
    GPIO3_IO17 = ((3 << GPIO_PORT_SHIFT) | 17),  // NAND_WE_B,    ALT 5
    GPIO3_IO18 = ((3 << GPIO_PORT_SHIFT) | 18),  // NAND_WP_B,    ALT 5
    GPIO3_IO19 = ((3 << GPIO_PORT_SHIFT) | 19),  // SAI5_RXFS,    ALT 5
    GPIO3_IO20 = ((3 << GPIO_PORT_SHIFT) | 20),  // SAI5_RXC,     ALT 5
    GPIO3_IO21 = ((3 << GPIO_PORT_SHIFT) | 21),  // SAI5_RXD0,    ALT 5
    GPIO3_IO22 = ((3 << GPIO_PORT_SHIFT) | 22),  // SAI5_RXD1,    ALT 5
    GPIO3_IO23 = ((3 << GPIO_PORT_SHIFT) | 23),  // SAI5_RXD2,    ALT 5
    GPIO3_IO24 = ((3 << GPIO_PORT_SHIFT) | 24),  // SAI5_RXD3,    ALT 5
    GPIO3_IO25 = ((3 << GPIO_PORT_SHIFT) | 25),  // SAI5_MCLK,    ALT 5

	GPIO4_IO00 = ((4 << GPIO_PORT_SHIFT) | 0),   // SAI1_RXFS,    ALT 5
    GPIO4_IO01 = ((4 << GPIO_PORT_SHIFT) | 1),   // SAI1_RXC,     ALT 5
    GPIO4_IO02 = ((4 << GPIO_PORT_SHIFT) | 2),   // SAI1_RXD0,    ALT 5
    GPIO4_IO03 = ((4 << GPIO_PORT_SHIFT) | 3),   // SAI1_RXD1,    ALT 5
    GPIO4_IO04 = ((4 << GPIO_PORT_SHIFT) | 4),   // SAI1_RXD2,    ALT 5
    GPIO4_IO05 = ((4 << GPIO_PORT_SHIFT) | 5),   // SAI1_RXD3,    ALT 5
    GPIO4_IO06 = ((4 << GPIO_PORT_SHIFT) | 6),   // SAI1_RXD4,    ALT 5
    GPIO4_IO07 = ((4 << GPIO_PORT_SHIFT) | 7),   // SAI1_RXD5,    ALT 5
    GPIO4_IO08 = ((4 << GPIO_PORT_SHIFT) | 8),   // SAI1_RXD6,    ALT 5
    GPIO4_IO09 = ((4 << GPIO_PORT_SHIFT) | 9),   // SAI1_RXD7,    ALT 5
    GPIO4_IO10 = ((4 << GPIO_PORT_SHIFT) | 10),  // SAI1_TXFS,    ALT 5
    GPIO4_IO11 = ((4 << GPIO_PORT_SHIFT) | 11),  // SAI1_TXC,     ALT 5
    GPIO4_IO12 = ((4 << GPIO_PORT_SHIFT) | 12),  // SAI1_TXD0,    ALT 5
    GPIO4_IO13 = ((4 << GPIO_PORT_SHIFT) | 13),  // SAI1_TXD1,    ALT 5
    GPIO4_IO14 = ((4 << GPIO_PORT_SHIFT) | 14),  // SAI1_TXD2,    ALT 5
    GPIO4_IO15 = ((4 << GPIO_PORT_SHIFT) | 15),  // SAI1_TXD3,    ALT 5
	GPIO4_IO16 = ((4 << GPIO_PORT_SHIFT) | 16),  // SAI1_TXD4,    ALT 5
    GPIO4_IO17 = ((4 << GPIO_PORT_SHIFT) | 17),  // SAI1_TXD5,    ALT 5
    GPIO4_IO18 = ((4 << GPIO_PORT_SHIFT) | 18),  // SAI1_TXD6,    ALT 5
    GPIO4_IO19 = ((4 << GPIO_PORT_SHIFT) | 19),  // SAI1_TXD7,    ALT 5
    GPIO4_IO20 = ((4 << GPIO_PORT_SHIFT) | 20),  // SAI1_MCLK,    ALT 5
    GPIO4_IO21 = ((4 << GPIO_PORT_SHIFT) | 21),  // SAI2_RXFS,    ALT 5
    GPIO4_IO22 = ((4 << GPIO_PORT_SHIFT) | 22),  // SAI2_RXC,     ALT 5
    GPIO4_IO23 = ((4 << GPIO_PORT_SHIFT) | 23),  // SAI2_RXD0,    ALT 5
    GPIO4_IO24 = ((4 << GPIO_PORT_SHIFT) | 24),  // SAI2_TXFS,    ALT 5
    GPIO4_IO25 = ((4 << GPIO_PORT_SHIFT) | 25),  // SAI2_TXC,     ALT 5
	GPIO4_IO26 = ((4 << GPIO_PORT_SHIFT) | 26),  // SAI2_TXD0,    ALT 5
	GPIO4_IO27 = ((4 << GPIO_PORT_SHIFT) | 27),  // SAI2_MCLK,    ALT 5
	GPIO4_IO28 = ((4 << GPIO_PORT_SHIFT) | 28),  // SAI3_RXFS,    ALT 5
	GPIO4_IO29 = ((4 << GPIO_PORT_SHIFT) | 29),  // SAI3_RXC,     ALT 5
	GPIO4_IO30 = ((4 << GPIO_PORT_SHIFT) | 30),  // SAI3_RXD,     ALT 5
	GPIO4_IO31 = ((4 << GPIO_PORT_SHIFT) | 31),  // SAI3_TXFS,    ALT 5

	GPIO5_IO00 = ((5 << GPIO_PORT_SHIFT) | 0),   // SAI3_TXC,      ALT 5
    GPIO5_IO01 = ((5 << GPIO_PORT_SHIFT) | 1),   // SAI3_TXD,      ALT 5
    GPIO5_IO02 = ((5 << GPIO_PORT_SHIFT) | 2),   // SAI3_MCLK,     ALT 5
    GPIO5_IO03 = ((5 << GPIO_PORT_SHIFT) | 3),   // SPDIF_TX,      ALT 5
    GPIO5_IO04 = ((5 << GPIO_PORT_SHIFT) | 4),   // SPDIF_RX,      ALT 5
    GPIO5_IO05 = ((5 << GPIO_PORT_SHIFT) | 5),   // SPDIF_EXT_CLK, ALT 5
    GPIO5_IO06 = ((5 << GPIO_PORT_SHIFT) | 6),   // ECSPI1_SCLK,   ALT 5
    GPIO5_IO07 = ((5 << GPIO_PORT_SHIFT) | 7),   // ECSPI1_MOSI,   ALT 5
    GPIO5_IO08 = ((5 << GPIO_PORT_SHIFT) | 8),   // ECSPI1_MISO,   ALT 5
    GPIO5_IO09 = ((5 << GPIO_PORT_SHIFT) | 9),   // ECSPI1_SS0,    ALT 5
    GPIO5_IO10 = ((5 << GPIO_PORT_SHIFT) | 10),  // ECSPI2_SCLK,   ALT 5
    GPIO5_IO11 = ((5 << GPIO_PORT_SHIFT) | 11),  // ECSPI2_MOSI,   ALT 5
    GPIO5_IO12 = ((5 << GPIO_PORT_SHIFT) | 12),  // ECSPI2_MISO,   ALT 5
    GPIO5_IO13 = ((5 << GPIO_PORT_SHIFT) | 13),  // ECSPI2_SS0,    ALT 5
    GPIO5_IO14 = ((5 << GPIO_PORT_SHIFT) | 14),  // I2C1_SCL,      ALT 5
    GPIO5_IO15 = ((5 << GPIO_PORT_SHIFT) | 15),  // I2C1_SDA,      ALT 5
	GPIO5_IO16 = ((5 << GPIO_PORT_SHIFT) | 16),  // I2C2_SCL,      ALT 5
    GPIO5_IO17 = ((5 << GPIO_PORT_SHIFT) | 17),  // I2C2_SDA,      ALT 5
    GPIO5_IO18 = ((5 << GPIO_PORT_SHIFT) | 18),  // I2C3_SCL,      ALT 5
    GPIO5_IO19 = ((5 << GPIO_PORT_SHIFT) | 19),  // I2C3_SDA,      ALT 5
    GPIO5_IO20 = ((5 << GPIO_PORT_SHIFT) | 20),  // I2C4_SCL,      ALT 5
    GPIO5_IO21 = ((5 << GPIO_PORT_SHIFT) | 21),  // I2C4_SDA,      ALT 5
    GPIO5_IO22 = ((5 << GPIO_PORT_SHIFT) | 22),  // UART1_RXD,     ALT 5
    GPIO5_IO23 = ((5 << GPIO_PORT_SHIFT) | 23),  // UART1_TXD,     ALT 5
    GPIO5_IO24 = ((5 << GPIO_PORT_SHIFT) | 24),  // UART2_RXD,     ALT 5
    GPIO5_IO25 = ((5 << GPIO_PORT_SHIFT) | 25),  // UART2_TXD,     ALT 5
    GPIO5_IO26 = ((5 << GPIO_PORT_SHIFT) | 26),  // UART3_RXD,     ALT 5
    GPIO5_IO27 = ((5 << GPIO_PORT_SHIFT) | 27),  // UART3_TXD,     ALT 5
    GPIO5_IO28 = ((5 << GPIO_PORT_SHIFT) | 28),  // UART4_RXD,     ALT 5
    GPIO5_IO29 = ((5 << GPIO_PORT_SHIFT) | 29),  // UART4_TXD,     ALT 5

    // UART2_RXD = GPIO5_IO24, //0x23C,
    // UART2_TXD = GPIO5_IO25, //0x240,

    LED_GREEN = GPIO4_IO03,

    // mbed original LED naming
    LED1 = LED_GREEN,
    LED2 = LED_GREEN,
    LED3 = LED_GREEN,
    LED4 = LED_GREEN,

	// USB Pins
    USBTX = GPIO5_IO25,
    USBRX = GPIO5_IO24,

    // // Arduino Headers
    // D0 = GPIO_AD_B1_07,
    // D1 = GPIO_AD_B1_06,
    // D2 = GPIO_AD_B0_11,
    // D3 = GPIO_AD_B1_08,
    // D4 = GPIO_AD_B0_09,
    // D5 = GPIO_AD_B0_10,
    // D6 = GPIO_AD_B1_02,
    // D7 = GPIO_AD_B1_03,
    // D8 = GPIO_AD_B0_03,
    // D9 = GPIO_AD_B0_02,
    // D10 = GPIO_SD_B0_01,
    // D11 = GPIO_SD_B0_02,
    // D12 = GPIO_SD_B0_03,
    // D13 = GPIO_SD_B0_00,
    // D14 = GPIO_AD_B0_01,
    // D15 = GPIO_AD_B0_00,

    // A0 = GPIO_AD_B1_10,
    // A1 = GPIO_AD_B1_11,
    // A2 = GPIO_AD_B1_04,
    // A3 = GPIO_AD_B1_05,
    // A4 = GPIO_AD_B1_01,
    // A5 = GPIO_AD_B1_00,

    // I2C_SCL = A5,
    // I2C_SDA = A4,
	
    // Not connected
    NC = (int)0xFFFFFFFF
} PinName;


typedef enum {
    PullNone = 0,
    PullUp = 1,
    PullDefault = PullUp,
} PinMode;

#ifdef __cplusplus
}
#endif

#endif
