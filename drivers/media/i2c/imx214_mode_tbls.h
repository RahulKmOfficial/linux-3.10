/*
 * imx214_mode_tbls.h - imx214 sensor mode tables
 *
 * Copyright (c) 2015-2016, NVIDIA CORPORATION, All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __IMX214_I2C_TABLES__
#define __IMX214_I2C_TABLES__

#include <media/camera_common.h>
#include <media/imx2xx.h>

#define IMX214_WAIT_MS		3

static imx2xx_reg imx214_start[] = {
	{ 0x0100, 0x01 }, /* mode select streaming on */
	{ IMX2XX_TABLE_END, 0x00 }
};

static imx2xx_reg imx214_stop[] = {
	{ 0x0100, 0x00 }, /* mode select streaming off */
	{ IMX2XX_TABLE_END, 0x00 }
};

static imx2xx_reg imx214_tp_colorbars[] = {
	{0x0600, 0x00},
	{0x0601, 0x02},

	{IMX2XX_TABLE_WAIT_MS, IMX214_WAIT_MS},
	{IMX2XX_TABLE_END, 0x00}
};

static imx2xx_reg imx214_mode_4096x2304[] = {
	{0x0114, 0x03},
	{0x0220, 0x00},
	{0x0221, 0x11},
	{0x0222, 0x01},
	{0x0340, 0x0C},
	{0x0341, 0x7A},
	{0x0342, 0x13},
	{0x0343, 0x90},
	{0x0344, 0x00},
	{0x0345, 0x38},
	{0x0346, 0x01},
	{0x0347, 0x98},
	{0x0348, 0x10},
	{0x0349, 0x37},
	{0x034A, 0x0A},
	{0x034B, 0x97},
	{0x0381, 0x01},
	{0x0383, 0x01},
	{0x0385, 0x01},
	{0x0387, 0x01},
	{0x0900, 0x00},
	{0x0901, 0x00},
	{0x0902, 0x00},
	{0x3000, 0x35},
	{0x3054, 0x01},
	{0x305C, 0x11},

	{0x0112, 0x0A},
	{0x0113, 0x0A},
	{0x034C, 0x10},
	{0x034D, 0x00},
	{0x034E, 0x09},
	{0x034F, 0x00},
	{0x0401, 0x00},
	{0x0404, 0x00},
	{0x0405, 0x10},
	{0x0408, 0x00},
	{0x0409, 0x00},
	{0x040A, 0x00},
	{0x040B, 0x00},
	{0x040C, 0x10},
	{0x040D, 0x00},
	{0x040E, 0x09},
	{0x040F, 0x00},

	{0x0301, 0x05},
	{0x0303, 0x02},
	{0x0305, 0x03},
	{0x0306, 0x00},
	{0x0307, 0x96},
	{0x0309, 0x0A},
	{0x030B, 0x01},
	{0x0310, 0x00},

	{0x0820, 0x12},
	{0x0821, 0xC0},
	{0x0822, 0x00},
	{0x0823, 0x00},

	{0x3A03, 0x09},
	{0x3A04, 0x50},
	{0x3A05, 0x01},

	{0x0B06, 0x01},
	{0x30A2, 0x00},

	{0x30B4, 0x00},

	{0x3A02, 0xFF},

	{0x3011, 0x00},
	{0x3013, 0x01},

	{0x0202, 0x0C},
	{0x0203, 0x70},
	{0x0224, 0x01},
	{0x0225, 0xF4},

	{0x0204, 0x00},
	{0x0205, 0x00},
	{0x020E, 0x01},
	{0x020F, 0x00},
	{0x0210, 0x01},
	{0x0211, 0x00},
	{0x0212, 0x01},
	{0x0213, 0x00},
	{0x0214, 0x01},
	{0x0215, 0x00},
	{0x0216, 0x00},
	{0x0217, 0x00},

	{0x4170, 0x00},
	{0x4171, 0x10},
	{0x4176, 0x00},
	{0x4177, 0x3C},
	{0xAE20, 0x04},
	{0xAE21, 0x5C},

	{IMX2XX_TABLE_WAIT_MS, 10},
	{0x0138, 0x01},
	{IMX2XX_TABLE_END, 0x00}
};

/* 1.2GHz */
static imx2xx_reg imx214_mode_4096x3072[] = {
	{0x0114, 0x03},
	{0x0220, 0x00},
	{0x0221, 0x11},
	{0x0222, 0x01},
	{0x0340, 0x0C},
	{0x0341, 0x7A},
	{0x0342, 0x13},
	{0x0343, 0x90},
	{0x0344, 0x00},
	{0x0345, 0x38},
	{0x0346, 0x00},
	{0x0347, 0x18},
	{0x0348, 0x10},
	{0x0349, 0x37},
	{0x034A, 0x0C},
	{0x034B, 0x17},
	{0x0381, 0x01},
	{0x0383, 0x01},
	{0x0385, 0x01},
	{0x0387, 0x01},
	{0x0900, 0x00},
	{0x0901, 0x00},
	{0x0902, 0x00},
	{0x3000, 0x35},
	{0x3054, 0x01},
	{0x305C, 0x11},

	{0x0112, 0x0A},
	{0x0113, 0x0A},
	{0x034C, 0x10},
	{0x034D, 0x00},
	{0x034E, 0x0C},
	{0x034F, 0x00},
	{0x0401, 0x00},
	{0x0404, 0x00},
	{0x0405, 0x10},
	{0x0408, 0x00},
	{0x0409, 0x00},
	{0x040A, 0x00},
	{0x040B, 0x00},
	{0x040C, 0x10},
	{0x040D, 0x00},
	{0x040E, 0x0C},
	{0x040F, 0x00},

	{0x0301, 0x05},
	{0x0303, 0x02},
	{0x0305, 0x03},
	{0x0306, 0x00},
	{0x0307, 0x96},
	{0x0309, 0x0A},
	{0x030B, 0x01},
	{0x0310, 0x00},

	{0x0820, 0x12},
	{0x0821, 0xC0},
	{0x0822, 0x00},
	{0x0823, 0x00},

	{0x3A03, 0x09},
	{0x3A04, 0x60},
	{0x3A05, 0x01},

	{0x0B06, 0x01},
	{0x30A2, 0x00},

	{0x30B4, 0x00},

	{0x3A02, 0xFF},

	{0x3011, 0x00},
	{0x3013, 0x01},

	{0x0202, 0x0C},
	{0x0203, 0x70},
	{0x0224, 0x01},
	{0x0225, 0xF4},

	{0x0204, 0x00},
	{0x0205, 0x00},
	{0x020E, 0x01},
	{0x020F, 0x00},
	{0x0210, 0x01},
	{0x0211, 0x00},
	{0x0212, 0x01},
	{0x0213, 0x00},
	{0x0214, 0x01},
	{0x0215, 0x00},
	{0x0216, 0x00},
	{0x0217, 0x00},

	{0x4170, 0x00},
	{0x4171, 0x10},
	{0x4176, 0x00},
	{0x4177, 0x3C},
	{0xAE20, 0x04},
	{0xAE21, 0x5C},

	{IMX2XX_TABLE_WAIT_MS, 10},
	{0x0138, 0x01},
	{IMX2XX_TABLE_END, 0x00}
};

/* 1.2GHz */
static imx2xx_reg imx214_mode_3840x2160[] = {
	{0x0114, 0x03},
	{0x0220, 0x00},
	{0x0221, 0x11},
	{0x0222, 0x01},
	{0x0340, 0x0C},
	{0x0341, 0x7A},
	{0x0342, 0x13},
	{0x0343, 0x90},
	{0x0344, 0x00},
	{0x0345, 0xB8},
	{0x0346, 0x01},
	{0x0347, 0xE0},
	{0x0348, 0x0F},
	{0x0349, 0xB7},
	{0x034A, 0x0A},
	{0x034B, 0x4F},
	{0x0381, 0x01},
	{0x0383, 0x01},
	{0x0385, 0x01},
	{0x0387, 0x01},
	{0x0900, 0x00},
	{0x0901, 0x00},
	{0x0902, 0x00},
	{0x3000, 0x35},
	{0x3054, 0x01},
	{0x305C, 0x11},

	{0x0112, 0x0A},
	{0x0113, 0x0A},
	{0x034C, 0x0F},
	{0x034D, 0x00},
	{0x034E, 0x08},
	{0x034F, 0x70},
	{0x0401, 0x00},
	{0x0404, 0x00},
	{0x0405, 0x10},
	{0x0408, 0x00},
	{0x0409, 0x00},
	{0x040A, 0x00},
	{0x040B, 0x00},
	{0x040C, 0x0F},
	{0x040D, 0x00},
	{0x040E, 0x08},
	{0x040F, 0x70},

	{0x0301, 0x05},
	{0x0303, 0x02},
	{0x0305, 0x03},
	{0x0306, 0x00},
	{0x0307, 0x96},
	{0x0309, 0x0A},
	{0x030B, 0x01},
	{0x0310, 0x00},

	{0x0820, 0x12},
	{0x0821, 0xC0},
	{0x0822, 0x00},
	{0x0823, 0x00},

	{0x3A03, 0x09},
	{0x3A04, 0xA0},
	{0x3A05, 0x04},

	{0x0B06, 0x01},
	{0x30A2, 0x00},

	{0x30B4, 0x00},

	{0x3A02, 0xFF},

	{0x3011, 0x00},
	{0x3013, 0x01},

	{0x0202, 0x0C},
	{0x0203, 0x70},
	{0x0224, 0x01},
	{0x0225, 0xF4},

	{0x0204, 0x00},
	{0x0205, 0x00},
	{0x020E, 0x01},
	{0x020F, 0x00},
	{0x0210, 0x01},
	{0x0211, 0x00},
	{0x0212, 0x01},
	{0x0213, 0x00},
	{0x0214, 0x01},
	{0x0215, 0x00},
	{0x0216, 0x00},
	{0x0217, 0x00},

	{0x4170, 0x00},
	{0x4171, 0x10},
	{0x4176, 0x00},
	{0x4177, 0x3C},
	{0xAE20, 0x04},
	{0xAE21, 0x5C},

	{IMX2XX_TABLE_WAIT_MS, 10},
	{0x0138, 0x01},
	{IMX2XX_TABLE_END, 0x00}
};

static imx2xx_reg imx214_mode_2048X1536[] = {
	{0x0114, 0x03},
	{0x0220, 0x00},
	{0x0221, 0x11},
	{0x0222, 0x01},
	{0x0340, 0x0C},
	{0x0341, 0x7A},
	{0x0342, 0x13},
	{0x0343, 0x90},
	{0x0344, 0x00},
	{0x0345, 0x38},
	{0x0346, 0x00},
	{0x0347, 0x18},
	{0x0348, 0x10},
	{0x0349, 0x37},
	{0x034A, 0x0C},
	{0x034B, 0x17},
	{0x0381, 0x01},
	{0x0383, 0x01},
	{0x0385, 0x01},
	{0x0387, 0x01},
	{0x0900, 0x01},
	{0x0901, 0x22},
	{0x0902, 0x02},
	{0x3000, 0x35},
	{0x3054, 0x01},
	{0x305C, 0x11},



	{0x0112, 0x0A},
	{0x0113, 0x0A},
	{0x034C, 0x08},
	{0x034D, 0x00},
	{0x034E, 0x06},
	{0x034F, 0x00},
	{0x0401, 0x00},
	{0x0404, 0x00},
	{0x0405, 0x10},
	{0x0408, 0x00},
	{0x0409, 0x00},
	{0x040A, 0x00},
	{0x040B, 0x00},
	{0x040C, 0x08},
	{0x040D, 0x00},
	{0x040E, 0x06},
	{0x040F, 0x00},


	{0x0301, 0x05},
	{0x0303, 0x02},
	{0x0305, 0x03},
	{0x0306, 0x00},
	{0x0307, 0x96},
	{0x0309, 0x0A},
	{0x030B, 0x01},
	{0x0310, 0x00},

	{0x0820, 0x12},
	{0x0821, 0xC0},
	{0x0822, 0x00},
	{0x0823, 0x00},

	{0x3A03, 0x06},
	{0x3A04, 0x38},
	{0x3A05, 0x01},


	{0x0B06, 0x01},
	{0x30A2, 0x00},


	{0x30B4, 0x00},

	{0x3A02, 0xFF},

	{0x3011, 0x00},
	{0x3013, 0x01},


	{0x0202, 0x0C},
	{0x0203, 0x70},
	{0x0224, 0x01},
	{0x0225, 0xF4},

	{0x0204, 0x00},
	{0x0205, 0x00},
	{0x020E, 0x01},
	{0x020F, 0x00},
	{0x0210, 0x01},
	{0x0211, 0x00},
	{0x0212, 0x01},
	{0x0213, 0x00},
	{0x0214, 0x01},
	{0x0215, 0x00},
	{0x0216, 0x00},
	{0x0217, 0x00},

	{0x4170, 0x00},
	{0x4171, 0x10},
	{0x4176, 0x00},
	{0x4177, 0x3C},
	{0xAE20, 0x04},
	{0xAE21, 0x5C},

	{IMX2XX_TABLE_WAIT_MS, 10},
	{0x0138, 0x01},
	{IMX2XX_TABLE_END, 0x00}
};

static imx2xx_reg imx214_mode_2048X1152[] = {
	{0x0114, 0x03},
	{0x0220, 0x00},
	{0x0221, 0x11},
	{0x0222, 0x01},
	{0x0340, 0x0C},
	{0x0341, 0x7A},
	{0x0342, 0x13},
	{0x0343, 0x90},
	{0x0344, 0x00},
	{0x0345, 0x38},
	{0x0346, 0x01},
	{0x0347, 0x98},
	{0x0348, 0x10},
	{0x0349, 0x37},
	{0x034A, 0x0A},
	{0x034B, 0x97},
	{0x0381, 0x01},
	{0x0383, 0x01},
	{0x0385, 0x01},
	{0x0387, 0x01},
	{0x0900, 0x01},
	{0x0901, 0x22},
	{0x0902, 0x02},
	{0x3000, 0x35},
	{0x3054, 0x01},
	{0x305C, 0x11},

	{0x0112, 0x0A},
	{0x0113, 0x0A},
	{0x034C, 0x08},
	{0x034D, 0x00},
	{0x034E, 0x04},
	{0x034F, 0x80},
	{0x0401, 0x00},
	{0x0404, 0x00},
	{0x0405, 0x10},
	{0x0408, 0x00},
	{0x0409, 0x00},
	{0x040A, 0x00},
	{0x040B, 0x00},
	{0x040C, 0x08},
	{0x040D, 0x00},
	{0x040E, 0x04},
	{0x040F, 0x80},

	{0x0301, 0x05},
	{0x0303, 0x02},
	{0x0305, 0x03},
	{0x0306, 0x00},
	{0x0307, 0x96},
	{0x0309, 0x0A},
	{0x030B, 0x01},
	{0x0310, 0x00},

	{0x0820, 0x12},
	{0x0821, 0xC0},
	{0x0822, 0x00},
	{0x0823, 0x00},
	{0x3A03, 0x08},
	{0x3A04, 0x08},
	{0x3A05, 0x04},

	{0x0B06, 0x01},
	{0x30A2, 0x00},

	{0x30B4, 0x00},

	{0x3A02, 0xFF},


	{0x3011, 0x00},
	{0x3013, 0x01},

	{0x0202, 0x0C},
	{0x0203, 0x70},
	{0x0224, 0x01},
	{0x0225, 0xF4},

	{0x0204, 0x00},
	{0x0205, 0x00},
	{0x020E, 0x01},
	{0x020F, 0x00},
	{0x0210, 0x01},
	{0x0211, 0x00},
	{0x0212, 0x01},
	{0x0213, 0x00},
	{0x0214, 0x01},
	{0x0215, 0x00},
	{0x0216, 0x00},
	{0x0217, 0x00},


	{0x4170, 0x00},
	{0x4171, 0x10},
	{0x4176, 0x00},
	{0x4177, 0x3C},
	{0xAE20, 0x04},
	{0xAE21, 0x5C},

	{IMX2XX_TABLE_WAIT_MS, 10},
	{0x0138, 0x01},
	{IMX2XX_TABLE_END, 0x00}
};

static imx2xx_reg imx214_mode_1920x1080[] = {
	{0x0114, 0x03},
	{0x0220, 0x00},
	{0x0221, 0x11},
	{0x0222, 0x01},
	{0x0340, 0x0C},
	{0x0341, 0x7A},
	{0x0342, 0x13},
	{0x0343, 0x90},
	{0x0344, 0x04},
	{0x0345, 0x78},
	{0x0346, 0x03},
	{0x0347, 0xFC},
	{0x0348, 0x0B},
	{0x0349, 0xF7},
	{0x034A, 0x08},
	{0x034B, 0x33},
	{0x0381, 0x01},
	{0x0383, 0x01},
	{0x0385, 0x01},
	{0x0387, 0x01},
	{0x0900, 0x00},
	{0x0901, 0x00},
	{0x0902, 0x00},
	{0x3000, 0x35},
	{0x3054, 0x01},
	{0x305C, 0x11},

	{0x0112, 0x0A},
	{0x0113, 0x0A},
	{0x034C, 0x07},
	{0x034D, 0x80},
	{0x034E, 0x04},
	{0x034F, 0x38},
	{0x0401, 0x00},
	{0x0404, 0x00},
	{0x0405, 0x10},
	{0x0408, 0x00},
	{0x0409, 0x00},
	{0x040A, 0x00},
	{0x040B, 0x00},
	{0x040C, 0x07},
	{0x040D, 0x80},
	{0x040E, 0x04},
	{0x040F, 0x38},

	{0x0301, 0x05},
	{0x0303, 0x02},
	{0x0305, 0x03},
	{0x0306, 0x00},
	{0x0307, 0x96},
	{0x0309, 0x0A},
	{0x030B, 0x01},
	{0x0310, 0x00},

	{0x0820, 0x12},
	{0x0821, 0xC0},
	{0x0822, 0x00},
	{0x0823, 0x00},

	{0x3A03, 0x04},
	{0x3A04, 0xF8},
	{0x3A05, 0x02},

	{0x0B06, 0x01},
	{0x30A2, 0x00},

	{0x30B4, 0x00},

	{0x3A02, 0xFF},

	{0x3011, 0x00},
	{0x3013, 0x01},

	{0x0202, 0x0C},
	{0x0203, 0x70},
	{0x0224, 0x01},
	{0x0225, 0xF4},

	{0x0204, 0x00},
	{0x0205, 0x00},
	{0x020E, 0x01},
	{0x020F, 0x00},
	{0x0210, 0x01},
	{0x0211, 0x00},
	{0x0212, 0x01},
	{0x0213, 0x00},
	{0x0214, 0x01},
	{0x0215, 0x00},
	{0x0216, 0x00},
	{0x0217, 0x00},

	{0x4170, 0x00},
	{0x4171, 0x10},
	{0x4176, 0x00},
	{0x4177, 0x3C},
	{0xAE20, 0x04},
	{0xAE21, 0x5C},

	{IMX2XX_TABLE_WAIT_MS, 10},
	{0x0138, 0x01},
	{IMX2XX_TABLE_END, 0x00}
};

/* 1.2GHz */
static imx2xx_reg imx214_mode_1280x720_120fps[] = {
	{0x0114, 0x03},
	{0x0220, 0x00},
	{0x0221, 0x11},
	{0x0222, 0x01},
	{0x0340, 0x02},
	{0x0341, 0xF8},
	{0x0342, 0x13},
	{0x0343, 0x90},
	{0x0344, 0x05},
	{0x0345, 0xB8},
	{0x0346, 0x04},
	{0x0347, 0xB0},
	{0x0348, 0x0A},
	{0x0349, 0xB7},
	{0x034A, 0x07},
	{0x034B, 0x7F},
	{0x0381, 0x01},
	{0x0383, 0x01},
	{0x0385, 0x01},
	{0x0387, 0x01},
	{0x0900, 0x00},
	{0x0901, 0x00},
	{0x0902, 0x00},
	{0x3000, 0x35},
	{0x3054, 0x01},
	{0x305C, 0x11},

	{0x0112, 0x0A},
	{0x0113, 0x0A},
	{0x034C, 0x05},
	{0x034D, 0x00},
	{0x034E, 0x02},
	{0x034F, 0xD0},
	{0x0401, 0x00},
	{0x0404, 0x00},
	{0x0405, 0x10},
	{0x0408, 0x00},
	{0x0409, 0x00},
	{0x040A, 0x00},
	{0x040B, 0x00},
	{0x040C, 0x05},
	{0x040D, 0x00},
	{0x040E, 0x02},
	{0x040F, 0xD0},

	{0x0301, 0x05},
	{0x0303, 0x02},
	{0x0305, 0x03},
	{0x0306, 0x00},
	{0x0307, 0x96},
	{0x0309, 0x0A},
	{0x030B, 0x01},
	{0x0310, 0x00},

	{0x0820, 0x12},
	{0x0821, 0xC0},
	{0x0822, 0x00},
	{0x0823, 0x00},

	{0x3A03, 0x02},
	{0x3A04, 0xB8},
	{0x3A05, 0x03},

	{0x0B06, 0x01},
	{0x30A2, 0x00},

	{0x30B4, 0x00},

	{0x3A02, 0xFF},

	{0x3011, 0x00},
	{0x3013, 0x01},

	{0x0202, 0x02},
	{0x0203, 0xEE},
	{0x0224, 0x01},
	{0x0225, 0xF4},

	{0x0204, 0x00},
	{0x0205, 0x00},
	{0x020E, 0x01},
	{0x020F, 0x00},
	{0x0210, 0x01},
	{0x0211, 0x00},
	{0x0212, 0x01},
	{0x0213, 0x00},
	{0x0214, 0x01},
	{0x0215, 0x00},
	{0x0216, 0x00},
	{0x0217, 0x00},

	{0x4170, 0x00},
	{0x4171, 0x10},
	{0x4176, 0x00},
	{0x4177, 0x3C},
	{0xAE20, 0x04},
	{0xAE21, 0x5C},
	{IMX2XX_TABLE_WAIT_MS, 10},
	{0x0138, 0x01},
	{IMX2XX_TABLE_END, 0x00}

};

static imx2xx_reg imx214_mode_4096x2304_HDR[] = {
	{0x0114, 0x03},
	{0x0220, 0x01},
	{0x0221, 0x11},
	{0x0222, 0x08},
	{0x0340, 0x0C},
	{0x0341, 0x7A},
	{0x0342, 0x13},
	{0x0343, 0x90},
	{0x0344, 0x00},
	{0x0345, 0x38},
	{0x0346, 0x01},
	{0x0347, 0x98},
	{0x0348, 0x10},
	{0x0349, 0x37},
	{0x034A, 0x0A},
	{0x034B, 0x97},
	{0x0381, 0x01},
	{0x0383, 0x01},
	{0x0385, 0x01},
	{0x0387, 0x01},
	{0x0900, 0x00},
	{0x0901, 0x00},
	{0x0902, 0x00},
	{0x3000, 0x35},
	{0x3054, 0x01},
	{0x305C, 0x11},

	{0x0112, 0x0A},
	{0x0113, 0x0A},
	{0x034C, 0x10},
	{0x034D, 0x00},
	{0x034E, 0x09},
	{0x034F, 0x00},
	{0x0401, 0x00},
	{0x0404, 0x00},
	{0x0405, 0x10},
	{0x0408, 0x00},
	{0x0409, 0x00},
	{0x040A, 0x00},
	{0x040B, 0x00},
	{0x040C, 0x10},
	{0x040D, 0x00},
	{0x040E, 0x09},
	{0x040F, 0x00},

	{0x0301, 0x05},
	{0x0303, 0x02},
	{0x0305, 0x03},
	{0x0306, 0x00},
	{0x0307, 0x96},
	{0x0309, 0x0A},
	{0x030B, 0x01},
	{0x0310, 0x00},

	{0x0820, 0x12},
	{0x0821, 0xC0},
	{0x0822, 0x00},
	{0x0823, 0x00},

	{0x3A03, 0x08},
	{0x3A04, 0x38},
	{0x3A05, 0x04},

	{0x0B06, 0x01},
	{0x30A2, 0x00},

	{0x30B4, 0x00},

	{0x3A02, 0x06},

	{0x3011, 0x00},
	{0x3013, 0x01},

	{0x0202, 0x0C},
	{0x0203, 0x70},
	{0x0224, 0x01},
	{0x0225, 0x8E},

	{0x0204, 0x00},
	{0x0205, 0x00},
	{0x020E, 0x01},
	{0x020F, 0x00},
	{0x0210, 0x01},
	{0x0211, 0x00},
	{0x0212, 0x01},
	{0x0213, 0x00},
	{0x0214, 0x01},
	{0x0215, 0x00},
	{0x0216, 0x00},
	{0x0217, 0x00},

	{0x4170, 0x00},
	{0x4171, 0x10},
	{0x4176, 0x00},
	{0x4177, 0x3C},
	{0xAE20, 0x04},
	{0xAE21, 0x5C},

	{IMX2XX_TABLE_WAIT_MS, 10},
	{0x0138, 0x01},
	{IMX2XX_TABLE_END, 0x00}
};

/* 1.2GHz */
static imx2xx_reg imx214_mode_4096x3072_HDR[] = {
	{0x0114, 0x03},
	{0x0220, 0x01},
	{0x0221, 0x11},
	{0x0222, 0x08},
	{0x0340, 0x0C},
	{0x0341, 0x7A},
	{0x0342, 0x13},
	{0x0343, 0x90},
	{0x0344, 0x00},
	{0x0345, 0x38},
	{0x0346, 0x00},
	{0x0347, 0x18},
	{0x0348, 0x10},
	{0x0349, 0x37},
	{0x034A, 0x0C},
	{0x034B, 0x17},
	{0x0381, 0x01},
	{0x0383, 0x01},
	{0x0385, 0x01},
	{0x0387, 0x01},
	{0x0900, 0x00},
	{0x0901, 0x00},
	{0x0902, 0x00},
	{0x3000, 0x35},
	{0x3054, 0x01},
	{0x305C, 0x11},

	{0x0112, 0x0A},
	{0x0113, 0x0A},
	{0x034C, 0x10},
	{0x034D, 0x00},
	{0x034E, 0x0C},
	{0x034F, 0x00},
	{0x0401, 0x00},
	{0x0404, 0x00},
	{0x0405, 0x10},
	{0x0408, 0x00},
	{0x0409, 0x00},
	{0x040A, 0x00},
	{0x040B, 0x00},
	{0x040C, 0x10},
	{0x040D, 0x00},
	{0x040E, 0x0C},
	{0x040F, 0x00},

	{0x0301, 0x05},
	{0x0303, 0x02},
	{0x0305, 0x03},
	{0x0306, 0x00},
	{0x0307, 0x96},
	{0x0309, 0x0A},
	{0x030B, 0x01},
	{0x0310, 0x00},

	{0x0820, 0x12},
	{0x0821, 0xC0},
	{0x0822, 0x00},
	{0x0823, 0x00},

	{0x3A03, 0x0C},
	{0x3A04, 0x20},
	{0x3A05, 0x04},

	{0x0B06, 0x01},
	{0x30A2, 0x00},

	{0x30B4, 0x00},

	{0x3A02, 0x06},

	{0x3011, 0x00},
	{0x3013, 0x01},

	{0x0202, 0x0C},
	{0x0203, 0x70},
	{0x0224, 0x01},
	{0x0225, 0x8E},

	{0x0204, 0x00},
	{0x0205, 0x00},
	{0x020E, 0x01},
	{0x020F, 0x00},
	{0x0210, 0x01},
	{0x0211, 0x00},
	{0x0212, 0x01},
	{0x0213, 0x00},
	{0x0214, 0x01},
	{0x0215, 0x00},
	{0x0216, 0x00},
	{0x0217, 0x00},

	{0x4170, 0x00},
	{0x4171, 0x10},
	{0x4176, 0x00},
	{0x4177, 0x3C},
	{0xAE20, 0x04},
	{0xAE21, 0x5C},

	{IMX2XX_TABLE_WAIT_MS, 10},
	{0x0138, 0x01},
	{IMX2XX_TABLE_END, 0x00}
};

/* 1.2GHz */
static imx2xx_reg imx214_mode_3840x2160_HDR[] = {
	{0x0114, 0x03},
	{0x0220, 0x01},
	{0x0221, 0x11},
	{0x0222, 0x08},
	{0x0340, 0x0C},
	{0x0341, 0x7A},
	{0x0342, 0x13},
	{0x0343, 0x90},
	{0x0344, 0x00},
	{0x0345, 0xB8},
	{0x0346, 0x01},
	{0x0347, 0xE0},
	{0x0348, 0x0F},
	{0x0349, 0xB7},
	{0x034A, 0x0A},
	{0x034B, 0x4F},
	{0x0381, 0x01},
	{0x0383, 0x01},
	{0x0385, 0x01},
	{0x0387, 0x01},
	{0x0900, 0x00},
	{0x0901, 0x00},
	{0x0902, 0x00},
	{0x3000, 0x35},
	{0x3054, 0x01},
	{0x305C, 0x11},

	{0x0112, 0x0A},
	{0x0113, 0x0A},
	{0x034C, 0x0F},
	{0x034D, 0x00},
	{0x034E, 0x08},
	{0x034F, 0x70},
	{0x0401, 0x00},
	{0x0404, 0x00},
	{0x0405, 0x10},
	{0x0408, 0x00},
	{0x0409, 0x00},
	{0x040A, 0x00},
	{0x040B, 0x00},
	{0x040C, 0x0F},
	{0x040D, 0x00},
	{0x040E, 0x08},
	{0x040F, 0x70},

	{0x0301, 0x05},
	{0x0303, 0x02},
	{0x0305, 0x03},
	{0x0306, 0x00},
	{0x0307, 0x96},
	{0x0309, 0x0A},
	{0x030B, 0x01},
	{0x0310, 0x00},

	{0x0820, 0x12},
	{0x0821, 0xC0},
	{0x0822, 0x00},
	{0x0823, 0x00},

	{0x3A03, 0x08},
	{0x3A04, 0xF0},
	{0x3A05, 0x04},

	{0x0B06, 0x01},
	{0x30A2, 0x00},

	{0x30B4, 0x00},

	{0x3A02, 0x06},

	{0x3011, 0x00},
	{0x3013, 0x01},

	{0x0202, 0x0C},
	{0x0203, 0x70},
	{0x0224, 0x01},
	{0x0225, 0x8E},

	{0x0204, 0x00},
	{0x0205, 0x00},
	{0x020E, 0x01},
	{0x020F, 0x00},
	{0x0210, 0x01},
	{0x0211, 0x00},
	{0x0212, 0x01},
	{0x0213, 0x00},
	{0x0214, 0x01},
	{0x0215, 0x00},
	{0x0216, 0x00},
	{0x0217, 0x00},

	{0x4170, 0x00},
	{0x4171, 0x10},
	{0x4176, 0x00},
	{0x4177, 0x3C},
	{0xAE20, 0x04},
	{0xAE21, 0x5C},

	{IMX2XX_TABLE_WAIT_MS, 10},
	{0x0138, 0x01},
	{IMX2XX_TABLE_END, 0x00}
};

static imx2xx_reg imx214_mode_1920x1080_HDR[] = {
	{0x0114, 0x03},
	{0x0220, 0x01},
	{0x0221, 0x11},
	{0x0222, 0x08},
	{0x0340, 0x0C},
	{0x0341, 0x7A},
	{0x0342, 0x13},
	{0x0343, 0x90},
	{0x0344, 0x04},
	{0x0345, 0x78},
	{0x0346, 0x03},
	{0x0347, 0xFC},
	{0x0348, 0x0B},
	{0x0349, 0xF7},
	{0x034A, 0x08},
	{0x034B, 0x33},
	{0x0381, 0x01},
	{0x0383, 0x01},
	{0x0385, 0x01},
	{0x0387, 0x01},
	{0x0900, 0x00},
	{0x0901, 0x00},
	{0x0902, 0x00},
	{0x3000, 0x35},
	{0x3054, 0x01},
	{0x305C, 0x11},


	{0x0112, 0x0A},
	{0x0113, 0x0A},
	{0x034C, 0x07},
	{0x034D, 0x80},
	{0x034E, 0x04},
	{0x034F, 0x38},
	{0x0401, 0x00},
	{0x0404, 0x00},
	{0x0405, 0x10},
	{0x0408, 0x00},
	{0x0409, 0x00},
	{0x040A, 0x00},
	{0x040B, 0x00},
	{0x040C, 0x07},
	{0x040D, 0x80},
	{0x040E, 0x04},
	{0x040F, 0x38},

	{0x0301, 0x05},
	{0x0303, 0x02},
	{0x0305, 0x03},
	{0x0306, 0x00},
	{0x0307, 0x96},
	{0x0309, 0x0A},
	{0x030B, 0x01},
	{0x0310, 0x00},

	{0x0820, 0x12},
	{0x0821, 0xC0},
	{0x0822, 0x00},
	{0x0823, 0x00},

	{0x3A03, 0x03},
	{0x3A04, 0xF8},
	{0x3A05, 0x03},

	{0x0B06, 0x01},
	{0x30A2, 0x00},

	{0x30B4, 0x00},

	{0x3A02, 0x06},

	{0x3011, 0x00},
	{0x3013, 0x01},

	{0x0202, 0x0C},
	{0x0203, 0x70},
	{0x0224, 0x01},
	{0x0225, 0x8E},

	{0x0204, 0x00},
	{0x0205, 0x00},
	{0x020E, 0x01},
	{0x020F, 0x00},
	{0x0210, 0x01},
	{0x0211, 0x00},
	{0x0212, 0x01},
	{0x0213, 0x00},
	{0x0214, 0x01},
	{0x0215, 0x00},
	{0x0216, 0x00},
	{0x0217, 0x00},

	{0x4170, 0x00},
	{0x4171, 0x10},
	{0x4176, 0x00},
	{0x4177, 0x3C},
	{0xAE20, 0x04},
	{0xAE21, 0x5C},

	{IMX2XX_TABLE_WAIT_MS, 10},
	{0x0138, 0x01},
	{IMX2XX_TABLE_END, 0x00}
};


static imx2xx_reg imx214_mode_1280x720_120fps_HDR[] = {
	{0x0114, 0x03},
	{0x0220, 0x01},
	{0x0221, 0x11},
	{0x0222, 0x08},
	{0x0340, 0x02},
	{0x0341, 0xF8},
	{0x0342, 0x13},
	{0x0343, 0x90},
	{0x0344, 0x05},
	{0x0345, 0xB8},
	{0x0346, 0x04},
	{0x0347, 0xB0},
	{0x0348, 0x0A},
	{0x0349, 0xB7},
	{0x034A, 0x07},
	{0x034B, 0x7F},
	{0x0381, 0x01},
	{0x0383, 0x01},
	{0x0385, 0x01},
	{0x0387, 0x01},
	{0x0900, 0x00},
	{0x0901, 0x00},
	{0x0902, 0x00},
	{0x3000, 0x35},
	{0x3054, 0x01},
	{0x305C, 0x11},

	{0x0112, 0x0A},
	{0x0113, 0x0A},
	{0x034C, 0x05},
	{0x034D, 0x00},
	{0x034E, 0x02},
	{0x034F, 0xD0},
	{0x0401, 0x00},
	{0x0404, 0x00},
	{0x0405, 0x10},
	{0x0408, 0x00},
	{0x0409, 0x00},
	{0x040A, 0x00},
	{0x040B, 0x00},
	{0x040C, 0x05},
	{0x040D, 0x00},
	{0x040E, 0x02},
	{0x040F, 0xD0},

	{0x0301, 0x05},
	{0x0303, 0x02},
	{0x0305, 0x03},
	{0x0306, 0x00},
	{0x0307, 0x96},
	{0x0309, 0x0A},
	{0x030B, 0x01},
	{0x0310, 0x00},

	{0x0820, 0x12},
	{0x0821, 0xC0},
	{0x0822, 0x00},
	{0x0823, 0x00},

	{0x3A03, 0x02},
	{0x3A04, 0xB8},
	{0x3A05, 0x01},

	{0x0B06, 0x01},
	{0x30A2, 0x00},

	{0x30B4, 0x00},

	{0x3A02, 0x06},

	{0x3011, 0x00},
	{0x3013, 0x01},

	{0x0202, 0x02},
	{0x0203, 0xEE},
	{0x0224, 0x00},
	{0x0225, 0x5D},

	{0x0204, 0x00},
	{0x0205, 0x00},
	{0x020E, 0x01},
	{0x020F, 0x00},
	{0x0210, 0x01},
	{0x0211, 0x00},
	{0x0212, 0x01},
	{0x0213, 0x00},
	{0x0214, 0x01},
	{0x0215, 0x00},
	{0x0216, 0x00},
	{0x0217, 0x00},

	{0x4170, 0x00},
	{0x4171, 0x10},
	{0x4176, 0x00},
	{0x4177, 0x3C},
	{0xAE20, 0x04},
	{0xAE21, 0x5C},

	{IMX2XX_TABLE_WAIT_MS, 10},
	{0x0138, 0x01},
	{IMX2XX_TABLE_END, 0x00}
};

static imx2xx_reg imx214_mode_table_common[] = {
	/* software reset */

	/* software standby settings */
	{0x0100, 0x00},

	/* ATR setting */
	{0x9300, 0x02},

	/* external clock setting */
	{0x0136, 0x18},
	{0x0137, 0x00},

	/* global setting */
	/* basic config */
	{0x0101, 0x00},
	{0x0105, 0x01},
	{0x0106, 0x01},
	{0x4550, 0x02},
	{0x4601, 0x00},
	{0x4642, 0x05},
	{0x6227, 0x11},
	{0x6276, 0x00},
	{0x900E, 0x06},
	{0xA802, 0x90},
	{0xA803, 0x11},
	{0xA804, 0x62},
	{0xA805, 0x77},
	{0xA806, 0xAE},
	{0xA807, 0x34},
	{0xA808, 0xAE},
	{0xA809, 0x35},
	{0xA80A, 0x62},
	{0xA80B, 0x83},
	{0xAE33, 0x00},

	/* analog setting */
	{0x4174, 0x00},
	{0x4175, 0x11},
	{0x4612, 0x29},
	{0x461B, 0x12},
	{0x461F, 0x06},
	{0x4635, 0x07},
	{0x4637, 0x30},
	{0x463F, 0x18},
	{0x4641, 0x0D},
	{0x465B, 0x12},
	{0x465F, 0x11},
	{0x4663, 0x11},
	{0x4667, 0x0F},
	{0x466F, 0x0F},
	{0x470E, 0x09},
	{0x4909, 0xAB},
	{0x490B, 0x95},
	{0x4915, 0x5D},
	{0x4A5F, 0xFF},
	{0x4A61, 0xFF},
	{0x4A73, 0x62},
	{0x4A85, 0x00},
	{0x4A87, 0xFF},

	/* embedded data */
	{0x5041, 0x04},
	{0x583C, 0x04},
	{0x620E, 0x04},
	{0x6EB2, 0x01},
	{0x6EB3, 0x00},
	{0x9300, 0x02},

	/* imagequality */
	/* HDR setting */
	{0x3001, 0x07},
	{0x6D12, 0x3F},
	{0x6D13, 0xFF},
	{0x9344, 0x03},
	{0x9706, 0x10},
	{0x9707, 0x03},
	{0x9708, 0x03},
	{0x9E04, 0x01},
	{0x9E05, 0x00},
	{0x9E0C, 0x01},
	{0x9E0D, 0x02},
	{0x9E24, 0x00},
	{0x9E25, 0x8C},
	{0x9E26, 0x00},
	{0x9E27, 0x94},
	{0x9E28, 0x00},
	{0x9E29, 0x96},

	/* CNR parameter setting */
	{0x69DB, 0x01},

	/* Moire reduction */
	{0x6957, 0x01},

	/* image enhancment */
	{0x6987, 0x17},
	{0x698A, 0x03},
	{0x698B, 0x03},

	/* white balanace */
	{0x0B8E, 0x01},
	{0x0B8F, 0x00},
	{0x0B90, 0x01},
	{0x0B91, 0x00},
	{0x0B92, 0x01},
	{0x0B93, 0x00},
	{0x0B94, 0x01},
	{0x0B95, 0x00},

	/* ATR setting */
	{0x6E50, 0x00},
	{0x6E51, 0x32},
	{0x9340, 0x00},
	{0x9341, 0x3C},
	{0x9342, 0x03},
	{0x9343, 0xFF},
	{IMX2XX_TABLE_END, 0x00}
};

enum {
	IMX214_MODE_4096X3072 = IMX2XX_SENSOR_MODE_BEGIN,
	IMX214_MODE_4096X2304,
	IMX214_MODE_3840X2160,
	IMX214_MODE_2048X1536,
	IMX214_MODE_2048X1152,
	IMX214_MODE_1920X1080,
	IMX214_MODE_1280X720_120FPS,
	IMX214_MODE_4096X3072_HDR,
	IMX214_MODE_4096X2304_HDR,
	IMX214_MODE_3840X2160_HDR,
	IMX214_MODE_1920X1080_HDR,
	IMX214_MODE_1280X720_120FPS_HDR,
};

static imx2xx_reg *imx214_mode_table[] = {
	[IMX2XX_MODE_COMMON] = imx214_mode_table_common,
	[IMX2XX_MODE_START_STREAM] = imx214_start,
	[IMX2XX_MODE_STOP_STREAM] = imx214_stop,
	[IMX2XX_MODE_TEST_PATTERN] = imx214_tp_colorbars,

	[IMX214_MODE_4096X3072] = imx214_mode_4096x3072,
	[IMX214_MODE_4096X2304] = imx214_mode_4096x2304,
	[IMX214_MODE_3840X2160] = imx214_mode_3840x2160,
	[IMX214_MODE_2048X1536] = imx214_mode_2048X1536,
	[IMX214_MODE_2048X1152] = imx214_mode_2048X1152,
	[IMX214_MODE_1920X1080] = imx214_mode_1920x1080,
	[IMX214_MODE_1280X720_120FPS] = imx214_mode_1280x720_120fps,
	[IMX214_MODE_4096X3072_HDR] = imx214_mode_4096x3072_HDR,
	[IMX214_MODE_4096X2304_HDR] = imx214_mode_4096x2304_HDR,
	[IMX214_MODE_3840X2160_HDR] = imx214_mode_3840x2160_HDR,
	[IMX214_MODE_1920X1080_HDR] = imx214_mode_1920x1080_HDR,
	[IMX214_MODE_1280X720_120FPS_HDR] = imx214_mode_1280x720_120fps_HDR,
};

static const struct camera_common_frmfmt imx214_frmfmt[] = {
	{{4096, 3072},	NULL, 0, 0, IMX214_MODE_4096X3072},
	{{4096, 2304},	NULL, 0, 0, IMX214_MODE_4096X2304},
	{{3840, 2160},	NULL, 0, 0, IMX214_MODE_3840X2160},
	{{2048, 1536},	NULL, 0, 0, IMX214_MODE_2048X1536},
	{{2048, 1152},	NULL, 0, 0, IMX214_MODE_2048X1152},
	{{1920, 1080},	NULL, 0, 0, IMX214_MODE_1920X1080},
	{{1280, 720},	NULL, 0, 0, IMX214_MODE_1280X720_120FPS},
	{{4096, 3072},	NULL, 0, 1, IMX214_MODE_4096X3072_HDR},
	{{4096, 2304},	NULL, 0, 1, IMX214_MODE_4096X2304_HDR},
	{{3840, 2160},	NULL, 0, 1, IMX214_MODE_3840X2160_HDR},
	{{1920, 1080},	NULL, 0, 1, IMX214_MODE_1920X1080_HDR},
	{{1280, 720},	NULL, 0, 1, IMX214_MODE_1280X720_120FPS_HDR},
};

static const struct camera_common_colorfmt imx214_color_fmts[] = {
	{
		V4L2_MBUS_FMT_SRGGB10_1X10,
		V4L2_COLORSPACE_SRGB,
		V4L2_PIX_FMT_SRGGB10,
	},
};

#endif  /* __IMX214_I2C_TABLES__ */
