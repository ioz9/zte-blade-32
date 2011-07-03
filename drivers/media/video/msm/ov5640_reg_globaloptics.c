/*
 * drivers/media/video/msm/ov5640_reg_globaloptics.c
 *
 * Refer to drivers/media/video/msm/mt9d112_reg.c
 * For IC OV5640 of Module GLOBALOPTICS: 5.0Mp 1/4-Inch System-On-A-Chip (SOC) CMOS Digital Image Sensor
 *
 * Copyright (C) 2009-2010 ZTE Corporation.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * Created by zhang.shengjie@zte.com.cn
 */
/*-----------------------------------------------------------------------------------------
  when         who      what, where, why                        comment tag
  --------     ----     -------------------------------------   ---------------------------

------------------------------------------------------------------------------------------*/

#include "ov5640.h"

static struct ov5640_i2c_reg_conf const preview_snapshot_mode_reg_settings_array[] = {
{0x3103, 0x0011, WORD_LEN, 0},
{0x3008, 0x0082, WORD_LEN, 0},
{0x3008, 0x0042, WORD_LEN, 0},
{0x3103, 0x0003, WORD_LEN, 0},
{0x3017, 0x00ff, WORD_LEN, 0},
{0x3018, 0x00ff, WORD_LEN, 0},
{0x3034, 0x001a, WORD_LEN, 0},
{0x3035, 0x0011, WORD_LEN, 0},
{0x3036, 0x0046, WORD_LEN, 0},
{0x3037, 0x0013, WORD_LEN, 0},
{0x3108, 0x0001, WORD_LEN, 0},
{0x3630, 0x002e, WORD_LEN, 0},
{0x3632, 0x00e2, WORD_LEN, 0},
{0x3633, 0x0023, WORD_LEN, 0},
{0x3621, 0x00e0, WORD_LEN, 0},
{0x3704, 0x00a0, WORD_LEN, 0},
{0x3703, 0x005a, WORD_LEN, 0},
{0x3715, 0x0078, WORD_LEN, 0},
{0x3717, 0x0001, WORD_LEN, 0},
{0x370b, 0x0060, WORD_LEN, 0},
{0x3705, 0x001a, WORD_LEN, 0},
{0x3905, 0x0002, WORD_LEN, 0},
{0x3906, 0x0010, WORD_LEN, 0},
{0x3901, 0x000a, WORD_LEN, 0},
{0x3731, 0x0012, WORD_LEN, 0},
{0x3600, 0x0008, WORD_LEN, 0},
{0x3601, 0x0033, WORD_LEN, 0},
{0x302d, 0x0060, WORD_LEN, 0},
{0x3620, 0x0052, WORD_LEN, 0},
{0x371b, 0x0020, WORD_LEN, 0},
{0x471c, 0x0050, WORD_LEN, 0},
{0x3a18, 0x0000, WORD_LEN, 0},
{0x3a19, 0x00f8, WORD_LEN, 0},
{0x3635, 0x001c, WORD_LEN, 0},
{0x3634, 0x0040, WORD_LEN, 0},
{0x3622, 0x0001, WORD_LEN, 0},
{0x3c01, 0x0034, WORD_LEN, 0},
{0x3c04, 0x0028, WORD_LEN, 0},
{0x3c05, 0x0098, WORD_LEN, 0},
{0x3c06, 0x0000, WORD_LEN, 0},
{0x3c07, 0x0008, WORD_LEN, 0},
{0x3c08, 0x0000, WORD_LEN, 0},
{0x3c09, 0x001c, WORD_LEN, 0},
{0x3c0a, 0x009c, WORD_LEN, 0},
{0x3c0b, 0x0040, WORD_LEN, 0},
{0x3820, 0x0047, WORD_LEN, 0},
{0x3821, 0x0001, WORD_LEN, 0},
{0x3814, 0x0031, WORD_LEN, 0},
{0x3815, 0x0031, WORD_LEN, 0},
{0x3800, 0x0000, WORD_LEN, 0},
{0x3801, 0x0000, WORD_LEN, 0},
{0x3802, 0x0000, WORD_LEN, 0},
{0x3803, 0x0004, WORD_LEN, 0},
{0x3804, 0x000a, WORD_LEN, 0},
{0x3805, 0x003f, WORD_LEN, 0},
{0x3806, 0x0007, WORD_LEN, 0},
{0x3807, 0x009b, WORD_LEN, 0},
{0x3808, 0x0002, WORD_LEN, 0},
{0x3809, 0x0080, WORD_LEN, 0},
{0x380a, 0x0001, WORD_LEN, 0},
{0x380b, 0x00e0, WORD_LEN, 0},
{0x380c, 0x0007, WORD_LEN, 0},
{0x380d, 0x0068, WORD_LEN, 0},
{0x380e, 0x0003, WORD_LEN, 0},
{0x380f, 0x00d8, WORD_LEN, 0},
{0x3810, 0x0000, WORD_LEN, 0},
{0x3811, 0x0010, WORD_LEN, 0},
{0x3812, 0x0000, WORD_LEN, 0},
{0x3813, 0x0006, WORD_LEN, 0},
{0x3618, 0x0000, WORD_LEN, 0},
{0x3612, 0x0029, WORD_LEN, 0},
{0x3708, 0x0062, WORD_LEN, 0},
{0x3709, 0x0052, WORD_LEN, 0},
{0x370c, 0x0003, WORD_LEN, 0},
{0x3a02, 0x0003, WORD_LEN, 0},
{0x3a03, 0x00d8, WORD_LEN, 0},
{0x3a08, 0x0001, WORD_LEN, 0},
{0x3a09, 0x0027, WORD_LEN, 0},
{0x3a0a, 0x0000, WORD_LEN, 0},
{0x3a0b, 0x00f6, WORD_LEN, 0},
{0x3a0e, 0x0003, WORD_LEN, 0},
{0x3a0d, 0x0004, WORD_LEN, 0},
{0x3a14, 0x0003, WORD_LEN, 0},
{0x3a15, 0x00d8, WORD_LEN, 0},
{0x4001, 0x0002, WORD_LEN, 0},
{0x4004, 0x0002, WORD_LEN, 0},
{0x3000, 0x0000, WORD_LEN, 0},
{0x3002, 0x001c, WORD_LEN, 0},
{0x3004, 0x00ff, WORD_LEN, 0},
{0x3006, 0x00c3, WORD_LEN, 0},
{0x300e, 0x0058, WORD_LEN, 0},
{0x302e, 0x0000, WORD_LEN, 0},
{0x4300, 0x0030, WORD_LEN, 0},
{0x501f, 0x0000, WORD_LEN, 0},
{0x4713, 0x0003, WORD_LEN, 0},
{0x4407, 0x0004, WORD_LEN, 0},
{0x460b, 0x0035, WORD_LEN, 0},
{0x460c, 0x0022, WORD_LEN, 0},
{0x3824, 0x0002, WORD_LEN, 0},
{0x5000, 0x00a7, WORD_LEN, 0},
{0x5001, 0x00a3, WORD_LEN, 0},
{0x5180, 0x00ff, WORD_LEN, 0},
{0x5181, 0x00f2, WORD_LEN, 0},
{0x5182, 0x0000, WORD_LEN, 0},
{0x5183, 0x0014, WORD_LEN, 0},
{0x5184, 0x0025, WORD_LEN, 0},
{0x5185, 0x0024, WORD_LEN, 0},
{0x5186, 0x0009, WORD_LEN, 0},
{0x5187, 0x0009, WORD_LEN, 0},
{0x5188, 0x0009, WORD_LEN, 0},
{0x5189, 0x0075, WORD_LEN, 0},
{0x518a, 0x0054, WORD_LEN, 0},
{0x518b, 0x00e0, WORD_LEN, 0},
{0x518c, 0x00b2, WORD_LEN, 0},
{0x518d, 0x0042, WORD_LEN, 0},
{0x518e, 0x003d, WORD_LEN, 0},
{0x518f, 0x0056, WORD_LEN, 0},
{0x5190, 0x0046, WORD_LEN, 0},
{0x5191, 0x00f8, WORD_LEN, 0},
{0x5192, 0x0004, WORD_LEN, 0},
{0x5193, 0x0070, WORD_LEN, 0},
{0x5194, 0x00f0, WORD_LEN, 0},
{0x5195, 0x00f0, WORD_LEN, 0},
{0x5196, 0x0003, WORD_LEN, 0},
{0x5197, 0x0001, WORD_LEN, 0},
{0x5198, 0x0004, WORD_LEN, 0},
{0x5199, 0x0012, WORD_LEN, 0},
{0x519a, 0x0004, WORD_LEN, 0},
{0x519b, 0x0000, WORD_LEN, 0},
{0x519c, 0x0006, WORD_LEN, 0},
{0x519d, 0x0082, WORD_LEN, 0},
{0x519e, 0x0038, WORD_LEN, 0},
{0x5381, 0x001c, WORD_LEN, 0},
{0x5382, 0x005a, WORD_LEN, 0},
{0x5383, 0x0006, WORD_LEN, 0},
{0x5384, 0x000a, WORD_LEN, 0},
{0x5385, 0x007e, WORD_LEN, 0},
{0x5386, 0x0088, WORD_LEN, 0},
{0x5387, 0x007c, WORD_LEN, 0},
{0x5388, 0x006c, WORD_LEN, 0},
{0x5389, 0x0010, WORD_LEN, 0},
{0x538a, 0x0001, WORD_LEN, 0},
{0x538b, 0x0098, WORD_LEN, 0},
{0x5300, 0x0008, WORD_LEN, 0},
{0x5301, 0x0030, WORD_LEN, 0},
{0x5302, 0x0010, WORD_LEN, 0},
{0x5303, 0x0008, WORD_LEN, 0},
{0x5304, 0x0008, WORD_LEN, 0},
{0x5305, 0x0030, WORD_LEN, 0},
{0x5306, 0x0008, WORD_LEN, 0},
{0x5307, 0x0016, WORD_LEN, 0},
{0x5309, 0x0008, WORD_LEN, 0},
{0x530a, 0x0030, WORD_LEN, 0},
{0x530b, 0x0004, WORD_LEN, 0},
{0x530c, 0x0006, WORD_LEN, 0},
{0x5480, 0x0001, WORD_LEN, 0},
{0x5481, 0x0008, WORD_LEN, 0},
{0x5482, 0x0014, WORD_LEN, 0},
{0x5483, 0x0028, WORD_LEN, 0},
{0x5484, 0x0051, WORD_LEN, 0},
{0x5485, 0x0065, WORD_LEN, 0},
{0x5486, 0x0071, WORD_LEN, 0},
{0x5487, 0x007d, WORD_LEN, 0},
{0x5488, 0x0087, WORD_LEN, 0},
{0x5489, 0x0091, WORD_LEN, 0},
{0x548a, 0x009a, WORD_LEN, 0},
{0x548b, 0x00aa, WORD_LEN, 0},
{0x548c, 0x00b8, WORD_LEN, 0},
{0x548d, 0x00cd, WORD_LEN, 0},
{0x548e, 0x00dd, WORD_LEN, 0},
{0x548f, 0x00ea, WORD_LEN, 0},
{0x5490, 0x001d, WORD_LEN, 0},
{0x5580, 0x0002, WORD_LEN, 0},
{0x5583, 0x0040, WORD_LEN, 0},
{0x5584, 0x0010, WORD_LEN, 0},
{0x5589, 0x0010, WORD_LEN, 0},
{0x558a, 0x0000, WORD_LEN, 0},
{0x558b, 0x00f8, WORD_LEN, 0},
{0x5800, 0x0023, WORD_LEN, 0},
{0x5801, 0x0015, WORD_LEN, 0},
{0x5802, 0x0010, WORD_LEN, 0},
{0x5803, 0x0010, WORD_LEN, 0},
{0x5804, 0x0015, WORD_LEN, 0},
{0x5805, 0x0023, WORD_LEN, 0},
{0x5806, 0x000c, WORD_LEN, 0},
{0x5807, 0x0008, WORD_LEN, 0},
{0x5808, 0x0005, WORD_LEN, 0},
{0x5809, 0x0005, WORD_LEN, 0},
{0x580a, 0x0008, WORD_LEN, 0},
{0x580b, 0x000c, WORD_LEN, 0},
{0x580c, 0x0007, WORD_LEN, 0},
{0x580d, 0x0003, WORD_LEN, 0},
{0x580e, 0x0000, WORD_LEN, 0},
{0x580f, 0x0000, WORD_LEN, 0},
{0x5810, 0x0003, WORD_LEN, 0},
{0x5811, 0x0007, WORD_LEN, 0},
{0x5812, 0x0007, WORD_LEN, 0},
{0x5813, 0x0003, WORD_LEN, 0},
{0x5814, 0x0000, WORD_LEN, 0},
{0x5815, 0x0000, WORD_LEN, 0},
{0x5816, 0x0003, WORD_LEN, 0},
{0x5817, 0x0007, WORD_LEN, 0},
{0x5818, 0x000b, WORD_LEN, 0},
{0x5819, 0x0008, WORD_LEN, 0},
{0x581a, 0x0005, WORD_LEN, 0},
{0x581b, 0x0005, WORD_LEN, 0},
{0x581c, 0x0007, WORD_LEN, 0},
{0x581d, 0x000b, WORD_LEN, 0},
{0x581e, 0x002a, WORD_LEN, 0},
{0x581f, 0x0016, WORD_LEN, 0},
{0x5820, 0x0011, WORD_LEN, 0},
{0x5821, 0x0011, WORD_LEN, 0},
{0x5822, 0x0015, WORD_LEN, 0},
{0x5823, 0x0029, WORD_LEN, 0},
{0x5824, 0x00bf, WORD_LEN, 0},
{0x5825, 0x00af, WORD_LEN, 0},
{0x5826, 0x009f, WORD_LEN, 0},
{0x5827, 0x00af, WORD_LEN, 0},
{0x5828, 0x00df, WORD_LEN, 0},
{0x5829, 0x006f, WORD_LEN, 0},
{0x582a, 0x008e, WORD_LEN, 0},
{0x582b, 0x00ab, WORD_LEN, 0},
{0x582c, 0x009e, WORD_LEN, 0},
{0x582d, 0x007f, WORD_LEN, 0},
{0x582e, 0x004f, WORD_LEN, 0},
{0x582f, 0x0089, WORD_LEN, 0},
{0x5830, 0x0086, WORD_LEN, 0},
{0x5831, 0x0098, WORD_LEN, 0},
{0x5832, 0x006f, WORD_LEN, 0},
{0x5833, 0x004f, WORD_LEN, 0},
{0x5834, 0x006e, WORD_LEN, 0},
{0x5835, 0x007b, WORD_LEN, 0},
{0x5836, 0x007e, WORD_LEN, 0},
{0x5837, 0x006f, WORD_LEN, 0},
{0x5838, 0x00de, WORD_LEN, 0},
{0x5839, 0x00bf, WORD_LEN, 0},
{0x583a, 0x009f, WORD_LEN, 0},
{0x583b, 0x00bf, WORD_LEN, 0},
{0x583c, 0x00ec, WORD_LEN, 0},
{0x5025, 0x0000, WORD_LEN, 0},
{0x3a0f, 0x0030, WORD_LEN, 0},
{0x3a10, 0x0028, WORD_LEN, 0},
{0x3a1b, 0x0030, WORD_LEN, 0},
{0x3a1e, 0x0028, WORD_LEN, 0},
{0x3a11, 0x0060, WORD_LEN, 0},
{0x3a1f, 0x0014, WORD_LEN, 0},
{0x3008, 0x0002, WORD_LEN, 0},
{0x3035, 0x0021, WORD_LEN, 0},
{0x3808, 0x0004, WORD_LEN, 0},
{0x3809, 0x0000, WORD_LEN, 0},
{0x380a, 0x0003, WORD_LEN, 0},
{0x380b, 0x0000, WORD_LEN, 0},
{0x460c, 0x0020, WORD_LEN, 0},
{0x3035, 0x0021, WORD_LEN, 0},

{0x4740, 0x0021, WORD_LEN, 0},
{0x4300, 0x0032, WORD_LEN, 0},
};

static struct ov5640_i2c_reg_conf const autofocus_value[] = {

};            

static struct ov5640_i2c_reg_conf const noise_reduction_reg_settings_array[] = {
    /* 
     * add code here
     * e.g. {0xXXXX, 0xXXXX, WORD_LEN, 0},
     */
    //{0x0000, 0x0000, WORD_LEN, 0},
};

static struct ov5640_i2c_reg_conf const lens_roll_off_tbl[] = {
    /* 
     * add code here
     * e.g. {0xXXXX, 0xXXXX, WORD_LEN, 0},
     */
    //{0x0000, 0x0000, WORD_LEN, 0},
};

/*
 * Attention: 100ms delay for reg of "0x0018" UNCONFIRMED
 */
static struct ov5640_i2c_reg_conf const pll_setup_tbl[] = {
    /* 
     * add code here
     * e.g. {0xXXXX, 0xXXXX, WORD_LEN, 0},
     */
    //{0x0000, 0x0000, WORD_LEN, 0},
};

/*
 * Attention: 300ms delay for reg of "0x0990" UNCONFIRMED
 */
static struct ov5640_i2c_reg_conf const sequencer_tbl[] = {
    /* 
     * add code here
     * e.g. {0xXXXX, 0xXXXX, WORD_LEN, 0},
     */
    //{0x0000, 0x0000, WORD_LEN, 0},
};

static struct ov5640_i2c_reg_conf const preview2snapshot_mode_array[] = {
{0x3035, 0x0021, WORD_LEN, 0},
{0x3036, 0x0069, WORD_LEN, 0},
{0x3c07, 0x0007, WORD_LEN, 0},
//{0x3820, 0x0040, WORD_LEN, 0},
//{0x3821, 0x0006, WORD_LEN, 0},
{0x3814, 0x0011, WORD_LEN, 0},
{0x3815, 0x0011, WORD_LEN, 0},
{0x3803, 0x0000, WORD_LEN, 0},
{0x3807, 0x009f, WORD_LEN, 0},
{0x3808, 0x000a, WORD_LEN, 0},
{0x3809, 0x0020, WORD_LEN, 0},
{0x380a, 0x0007, WORD_LEN, 0},
{0x380b, 0x0098, WORD_LEN, 0},
{0x380c, 0x000b, WORD_LEN, 0},
{0x380d, 0x001c, WORD_LEN, 0},
{0x380e, 0x0007, WORD_LEN, 0},
{0x380f, 0x00b0, WORD_LEN, 0},
{0x3813, 0x0004, WORD_LEN, 0},
{0x3618, 0x0004, WORD_LEN, 0},
{0x3612, 0x002b, WORD_LEN, 0},
{0x3708, 0x0021, WORD_LEN, 0},
{0x3709, 0x0012, WORD_LEN, 0},
{0x370c, 0x0000, WORD_LEN, 0},
{0x3a02, 0x0007, WORD_LEN, 0},
{0x3a03, 0x00b0, WORD_LEN, 0},
{0x3a0e, 0x0006, WORD_LEN, 0},
{0x3a0d, 0x0008, WORD_LEN, 0},
{0x3a14, 0x0007, WORD_LEN, 0},
{0x3a15, 0x00b0, WORD_LEN, 0},
{0x4004, 0x0006, WORD_LEN, 0},
{0x4713, 0x0002, WORD_LEN, 0},
{0x4407, 0x000c, WORD_LEN, 0},
{0x460b, 0x0037, WORD_LEN, 0},
{0x460c, 0x0020, WORD_LEN, 0},
{0x3824, 0x0001, WORD_LEN, 0},
{0x5001, 0x0083, WORD_LEN, 0},
{0x3035, 0x0081, WORD_LEN, 0},
};

static struct ov5640_i2c_reg_conf const snapshot2preview_mode_array[] = {
//{0x3821, 0x0007, WORD_LEN, 0},
{0x3002, 0x001c, WORD_LEN, 0},
{0x3006, 0x00c3, WORD_LEN, 0},
{0x4713, 0x0002, WORD_LEN, 0},
{0x3824, 0x0002, WORD_LEN, 0},
{0x3035, 0x0011, WORD_LEN, 0},
{0x3036, 0x0046, WORD_LEN, 0},
{0x3c07, 0x0008, WORD_LEN, 0},
{0x3814, 0x0031, WORD_LEN, 0},
{0x3815, 0x0031, WORD_LEN, 0},
{0x3803, 0x0004, WORD_LEN, 0},
{0x3807, 0x009b, WORD_LEN, 0},
{0x3808, 0x0004, WORD_LEN, 0},
{0x3809, 0x0000, WORD_LEN, 0},
{0x380a, 0x0003, WORD_LEN, 0},
{0x380b, 0x0000, WORD_LEN, 0},
{0x380c, 0x0007, WORD_LEN, 0},
{0x380d, 0x0068, WORD_LEN, 0},
{0x380e, 0x0003, WORD_LEN, 0},
{0x380f, 0x00d8, WORD_LEN, 0},
{0x3813, 0x0006, WORD_LEN, 0},
{0x3618, 0x0000, WORD_LEN, 0},
{0x3612, 0x0029, WORD_LEN, 0},
{0x3708, 0x0062, WORD_LEN, 0},
{0x3709, 0x0052, WORD_LEN, 0},
{0x370c, 0x0003, WORD_LEN, 0},
{0x3a02, 0x0003, WORD_LEN, 0},
{0x3a03, 0x00d8, WORD_LEN, 0},
{0x3a0e, 0x0003, WORD_LEN, 0},
{0x3a0d, 0x0004, WORD_LEN, 0},
{0x3a14, 0x0003, WORD_LEN, 0},
{0x3a15, 0x00d8, WORD_LEN, 0},
{0x4004, 0x0002, WORD_LEN, 0},
{0x4713, 0x0003, WORD_LEN, 0},
{0x4407, 0x0004, WORD_LEN, 0},
{0x460b, 0x0035, WORD_LEN, 0},
{0x460c, 0x0020, WORD_LEN, 0},
{0x3824, 0x0002, WORD_LEN, 0},
{0x5001, 0x00a3, WORD_LEN, 0},
{0x3035, 0x0021, WORD_LEN, 0},
};
    
struct ov5640_reg_t ov5640_regs = {
    .prev_snap_reg_settings =               preview_snapshot_mode_reg_settings_array,
    .prev_snap_reg_settings_size =          ARRAY_SIZE(preview_snapshot_mode_reg_settings_array),

    .noise_reduction_reg_settings =         noise_reduction_reg_settings_array,
    .noise_reduction_reg_settings_size =    0,  /* ARRAY_SIZE(noise_reduction_reg_settings_array), */

    .plltbl =                               pll_setup_tbl,
    .plltbl_size =                          0,  /* ARRAY_SIZE(pll_setup_tbl), */

    .stbl =                                 sequencer_tbl,
    .stbl_size =                            0,  /* ARRAY_SIZE(sequencer_tbl), */

    .rftbl =                                lens_roll_off_tbl,
    .rftbl_size =                           0,  /* ARRAY_SIZE(lens_roll_off_tbl), */

    .snapshot2preview_tbl =                 snapshot2preview_mode_array,
    .snapshot2preview_size =                ARRAY_SIZE(snapshot2preview_mode_array),

    .preview2snapshot_tbl =                 preview2snapshot_mode_array,
    .preview2snapshot_size =                ARRAY_SIZE(preview2snapshot_mode_array),

    .autofocus_reg_settings =               autofocus_value,
    .autofocus_reg_settings_size =          ARRAY_SIZE(autofocus_value),
};

