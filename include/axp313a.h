/*
 * Copyright (C) 2016 Allwinner.
 * weidonghui <weidonghui@allwinnertech.com>
 *
 * SUNXI AXP313A  Driver
 *
 * SPDX-License-Identifier: GPL-2.0+
 */

#ifndef __AXP313A_H__
#define __AXP313A_H__

//PMIC chip id reg03:bit7-6  bit3-
#define   AXP1530_CHIP_ID              (0x48)
#define   AXP313A_CHIP_ID              (0x4B)
#define   AXP313B_CHIP_ID              (0x4C)

#define AXP313A_DEVICE_ADDR			(0x3A3)
#ifndef CONFIG_SYS_SUNXI_R_I2C0_SLAVE
#define AXP313A_RUNTIME_ADDR			(0x2d)
#else
#ifndef CONFIG_AXP313A_SUNXI_I2C_SLAVE
#define AXP313A_RUNTIME_ADDR			CONFIG_SYS_SUNXI_R_I2C0_SLAVE
#else
#define AXP313A_RUNTIME_ADDR                    CONFIG_AXP313A_SUNXI_I2C_SLAVE
#endif
#endif

/* define AXP313A REGISTER */
#define	AXP313A_POWER_ON_SOURCE_INDIVATION			(0x00)
#define	AXP313A_POWER_OFF_SOURCE_INDIVATION			(0x01)
#define	AXP313A_VERSION								(0x03)
#define	AXP313A_OUTPUT_POWER_ON_OFF_CTL				(0x10)
#define AXP313A_DCDC_DVM_PWM_CTL					(0x12)
#define	AXP313A_DC1OUT_VOL							(0x13)
#define	AXP313A_DC2OUT_VOL          				(0x14)
#define	AXP313A_DC3OUT_VOL          				(0x15)
#define	AXP313A_ALDO1OUT_VOL						(0x16)
#define	AXP313A_DLDO1OUT_VOL						(0x17)
#define	AXP313A_POWER_DOMN_SEQUENCE					(0x1A)
#define	AXP313A_PWROK_VOFF_SERT						(0x1B)
#define AXP313A_POWER_WAKEUP_CTL					(0x1C)
#define AXP313A_OUTPUT_MONITOR_CONTROL				(0x1D)
#define	AXP313A_POK_SET								(0x1E)
#define	AXP313A_IRQ_ENABLE							(0x20)
#define	AXP313A_IRQ_STATUS							(0x21)
#define AXP313A_WRITE_LOCK							(0x70)
#define AXP313A_ERROR_MANAGEMENT					(0x71)
#define	AXP313A_DCDC1_2_POWER_ON_DEFAULT_SET		(0x80)
#define	AXP313A_DCDC3_ALDO1_POWER_ON_DEFAULT_SET	(0x81)


#endif /* __AXP313A_REGS_H__ */
