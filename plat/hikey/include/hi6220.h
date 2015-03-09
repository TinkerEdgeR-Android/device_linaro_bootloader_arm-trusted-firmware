/*
 * Copyright (c) 2014-2015, Linaro Ltd and Contributors. All rights reserved.
 * Copyright (c) 2014-2015, Hisilicon Ltd and Contributors. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * Neither the name of ARM nor the names of its contributors may be used
 * to endorse or promote products derived from this software without specific
 * prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __HI6220_H__
#define __HI6220_H__

#define MEDIA_CTRL_BASE				0xf4410000
#define MEDIA_SUBSYS_CTRL2			(MEDIA_CTRL_BASE + 0x508)
#define MEDIA_SUBSYS_NOC_DFS			(MEDIA_CTRL_BASE + 0x510)
#define MEDIA_SUBSYS_CTRL5			(MEDIA_CTRL_BASE + 0x51c)

#define ACPU_CTRL_BASE				0xf6504000
#define ACPU_SC_CPU_CTRL			(ACPU_CTRL_BASE + 0x000)
#define ACPU_SC_CPU_STAT			(ACPU_CTRL_BASE + 0x008)
#define ACPU_SC_CLKEN				(ACPU_CTRL_BASE + 0x00c)
#define HPM_L2_1_CLKEN				(1 << 9)
#define G_CPU_1_CLKEN				(1 << 8)
#define HPM_L2_CLKEN				(1 << 1)
#define G_CPU_CLKEN				(1 << 0)

#define ACPU_SC_CLKDIS				(ACPU_CTRL_BASE + 0x010)
#define ACPU_SC_CLK_STAT			(ACPU_CTRL_BASE + 0x014)
#define ACPU_SC_RSTEN				(ACPU_CTRL_BASE + 0x018)
#define SRST_PRESET1_RSTEN			(1 << 11)
#define SRST_PRESET0_RSTEN			(1 << 10)
#define SRST_CLUSTER1_RSTEN			(1 << 9)
#define SRST_CLUSTER0_RSTEN			(1 << 8)
#define SRST_L2_HPM_1_RSTEN			(1 << 5)
#define SRST_AARM_L2_1_RSTEN			(1 << 4)
#define SRST_L2_HPM_0_RSTEN			(1 << 3)
#define SRST_AARM_L2_0_RSTEN			(1 << 1)
#define SRST_CLUSTER1				(SRST_PRESET1_RSTEN | \
						 SRST_CLUSTER1_RSTEN | \
						 SRST_L2_HPM_1_RSTEN | \
						 SRST_AARM_L2_1_RSTEN)
#define SRST_CLUSTER0				(SRST_PRESET0_RSTEN | \
						 SRST_CLUSTER0_RSTEN | \
						 SRST_L2_HPM_0_RSTEN | \
						 SRST_AARM_L2_0_RSTEN)

#define ACPU_SC_RSTDIS				(ACPU_CTRL_BASE + 0x01c)
#define ACPU_SC_RST_STAT			(ACPU_CTRL_BASE + 0x020)
#define ACPU_SC_PDBGUP_MBIST			(ACPU_CTRL_BASE + 0x02c)
#define PDBGUP_CLUSTER1_SHIFT			8

#define ACPU_SC_VD_CTRL				(ACPU_CTRL_BASE + 0x054)
#define ACPU_SC_VD_MASK_PATTERN_CTRL		(ACPU_CTRL_BASE + 0x058)
#define ACPU_SC_VD_DLY_FIXED_CTRL		(ACPU_CTRL_BASE + 0x05c)
#define ACPU_SC_VD_DLY_TABLE0_CTRL		(ACPU_CTRL_BASE + 0x060)
#define ACPU_SC_VD_DLY_TABLE1_CTRL		(ACPU_CTRL_BASE + 0x064)
#define ACPU_SC_VD_DLY_TABLE2_CTRL		(ACPU_CTRL_BASE + 0x068)
#define ACPU_SC_VD_HPM_CTRL			(ACPU_CTRL_BASE + 0x06c)
#define ACPU_SC_A53_CLUSTER_MTCMOS_EN		(ACPU_CTRL_BASE + 0x088)
#define PW_MTCMOS_EN_A53_1_EN			(1 << 1)
#define PW_MTCMOS_EN_A53_0_EN			(1 << 0)

#define ACPU_SC_A53_CLUSTER_MTCMOS_STA		(ACPU_CTRL_BASE + 0x090)
#define ACPU_SC_A53_CLUSTER_ISO_EN		(ACPU_CTRL_BASE + 0x098)
#define PW_ISO_A53_1_EN				(1 << 1)
#define PW_ISO_A53_0_EN				(1 << 0)

#define ACPU_SC_A53_CLUSTER_ISO_DIS		(ACPU_CTRL_BASE + 0x09c)
#define ACPU_SC_A53_CLUSTER_ISO_STA		(ACPU_CTRL_BASE + 0x0a0)
#define ACPU_SC_A53_1_MTCMOS_TIMER		(ACPU_CTRL_BASE + 0x0b4)
#define ACPU_SC_A53_0_MTCMOS_TIMER		(ACPU_CTRL_BASE + 0x0bc)
#define ACPU_SC_A53_x_MTCMOS_TIMER(x)		((x) ? ACPU_SC_A53_1_MTCMOS_TIMER : ACPU_SC_A53_0_MTCMOS_TIMER)

#define ACPU_SC_CPU0_CTRL			(ACPU_CTRL_BASE + 0x100)
#define CPU_CTRL_AARCH64_MODE			(1 << 7)

#define ACPU_SC_CPU0_STAT			(ACPU_CTRL_BASE + 0x104)
#define ACPU_SC_CPU0_CLKEN			(ACPU_CTRL_BASE + 0x108)
#define CPU_CLKEN_HPM				(1 << 1)

#define ACPU_SC_CPU0_CLK_STAT			(ACPU_CTRL_BASE + 0x110)

#define ACPU_SC_CPU0_RSTEN			(ACPU_CTRL_BASE + 0x114)
#define ACPU_SC_CPU0_RSTDIS			(ACPU_CTRL_BASE + 0x118)
#define ACPU_SC_CPU0_MTCMOS_EN			(ACPU_CTRL_BASE + 0x120)
#define CPU_MTCMOS_PW				(1 << 0)

#define ACPU_SC_CPU0_PW_ISOEN			(ACPU_CTRL_BASE + 0x130)
#define CPU_PW_ISO				(1 << 0)

#define ACPU_SC_CPU0_PW_ISODIS			(ACPU_CTRL_BASE + 0x134)
#define ACPU_SC_CPU0_PW_ISO_STAT		(ACPU_CTRL_BASE + 0x138)
#define ACPU_SC_CPU0_MTCMOS_TIMER_STAT		(ACPU_CTRL_BASE + 0x154)
#define CPU_MTCMOS_TIMER_STA			(1 << 0)

#define ACPU_SC_CPU0_RVBARADDR			(ACPU_CTRL_BASE + 0x158)
#define ACPU_SC_CPU1_CTRL			(ACPU_CTRL_BASE + 0x200)
#define ACPU_SC_CPU1_STAT			(ACPU_CTRL_BASE + 0x204)
#define ACPU_SC_CPU1_CLKEN			(ACPU_CTRL_BASE + 0x208)
#define ACPU_SC_CPU1_CLK_STAT			(ACPU_CTRL_BASE + 0x210)
#define ACPU_SC_CPU1_RSTEN			(ACPU_CTRL_BASE + 0x214)
#define ACPU_SC_CPU1_RSTDIS			(ACPU_CTRL_BASE + 0x218)
#define ACPU_SC_CPU1_MTCMOS_EN			(ACPU_CTRL_BASE + 0x220)
#define ACPU_SC_CPU1_PW_ISODIS			(ACPU_CTRL_BASE + 0x234)
#define ACPU_SC_CPU1_PW_ISO_STAT		(ACPU_CTRL_BASE + 0x238)
#define ACPU_SC_CPU1_MTCMOS_TIMER_STAT		(ACPU_CTRL_BASE + 0x254)
#define ACPU_SC_CPU1_RVBARADDR			(ACPU_CTRL_BASE + 0x258)
#define ACPU_SC_CPU2_CTRL			(ACPU_CTRL_BASE + 0x300)
#define ACPU_SC_CPU2_STAT			(ACPU_CTRL_BASE + 0x304)
#define ACPU_SC_CPU2_CLKEN			(ACPU_CTRL_BASE + 0x308)
#define ACPU_SC_CPU2_CLK_STAT			(ACPU_CTRL_BASE + 0x310)
#define ACPU_SC_CPU2_RSTEN			(ACPU_CTRL_BASE + 0x314)
#define ACPU_SC_CPU2_RSTDIS			(ACPU_CTRL_BASE + 0x318)
#define ACPU_SC_CPU2_MTCMOS_EN			(ACPU_CTRL_BASE + 0x320)
#define ACPU_SC_CPU2_PW_ISODIS			(ACPU_CTRL_BASE + 0x334)
#define ACPU_SC_CPU2_PW_ISO_STAT		(ACPU_CTRL_BASE + 0x338)
#define ACPU_SC_CPU2_MTCMOS_TIMER_STAT		(ACPU_CTRL_BASE + 0x354)
#define ACPU_SC_CPU2_RVBARADDR			(ACPU_CTRL_BASE + 0x358)
#define ACPU_SC_CPU3_CTRL			(ACPU_CTRL_BASE + 0x400)
#define ACPU_SC_CPU3_STAT			(ACPU_CTRL_BASE + 0x404)
#define ACPU_SC_CPU3_CLKEN			(ACPU_CTRL_BASE + 0x408)
#define ACPU_SC_CPU3_CLK_STAT			(ACPU_CTRL_BASE + 0x410)
#define ACPU_SC_CPU3_RSTEN			(ACPU_CTRL_BASE + 0x414)
#define ACPU_SC_CPU3_RSTDIS			(ACPU_CTRL_BASE + 0x418)
#define ACPU_SC_CPU3_MTCMOS_EN			(ACPU_CTRL_BASE + 0x420)
#define ACPU_SC_CPU3_PW_ISODIS			(ACPU_CTRL_BASE + 0x434)
#define ACPU_SC_CPU3_PW_ISO_STAT		(ACPU_CTRL_BASE + 0x438)
#define ACPU_SC_CPU3_MTCMOS_TIMER_STAT		(ACPU_CTRL_BASE + 0x454)
#define ACPU_SC_CPU3_RVBARADDR			(ACPU_CTRL_BASE + 0x458)
#define ACPU_SC_CPU4_CTRL			(ACPU_CTRL_BASE + 0x500)
#define ACPU_SC_CPU4_STAT			(ACPU_CTRL_BASE + 0x504)
#define ACPU_SC_CPU4_CLKEN			(ACPU_CTRL_BASE + 0x508)
#define ACPU_SC_CPU4_CLK_STAT			(ACPU_CTRL_BASE + 0x510)
#define ACPU_SC_CPU4_RSTEN			(ACPU_CTRL_BASE + 0x514)
#define ACPU_SC_CPU4_RSTDIS			(ACPU_CTRL_BASE + 0x518)
#define ACPU_SC_CPU4_MTCMOS_EN			(ACPU_CTRL_BASE + 0x520)
#define ACPU_SC_CPU4_PW_ISODIS			(ACPU_CTRL_BASE + 0x534)
#define ACPU_SC_CPU4_PW_ISO_STAT		(ACPU_CTRL_BASE + 0x538)
#define ACPU_SC_CPU4_MTCMOS_TIMER_STAT		(ACPU_CTRL_BASE + 0x554)
#define ACPU_SC_CPU4_RVBARADDR			(ACPU_CTRL_BASE + 0x558)
#define ACPU_SC_CPU5_CTRL			(ACPU_CTRL_BASE + 0x600)
#define ACPU_SC_CPU5_STAT			(ACPU_CTRL_BASE + 0x604)
#define ACPU_SC_CPU5_CLKEN			(ACPU_CTRL_BASE + 0x608)
#define ACPU_SC_CPU5_CLK_STAT			(ACPU_CTRL_BASE + 0x610)
#define ACPU_SC_CPU5_RSTEN			(ACPU_CTRL_BASE + 0x614)
#define ACPU_SC_CPU5_RSTDIS			(ACPU_CTRL_BASE + 0x618)
#define ACPU_SC_CPU5_MTCMOS_EN			(ACPU_CTRL_BASE + 0x620)
#define ACPU_SC_CPU5_PW_ISODIS			(ACPU_CTRL_BASE + 0x634)
#define ACPU_SC_CPU5_PW_ISO_STAT		(ACPU_CTRL_BASE + 0x638)
#define ACPU_SC_CPU5_MTCMOS_TIMER_STAT		(ACPU_CTRL_BASE + 0x654)
#define ACPU_SC_CPU5_RVBARADDR			(ACPU_CTRL_BASE + 0x658)
#define ACPU_SC_CPU6_CTRL			(ACPU_CTRL_BASE + 0x700)
#define ACPU_SC_CPU6_STAT			(ACPU_CTRL_BASE + 0x704)
#define ACPU_SC_CPU6_CLKEN			(ACPU_CTRL_BASE + 0x708)
#define ACPU_SC_CPU6_CLK_STAT			(ACPU_CTRL_BASE + 0x710)
#define ACPU_SC_CPU6_RSTEN			(ACPU_CTRL_BASE + 0x714)
#define ACPU_SC_CPU6_RSTDIS			(ACPU_CTRL_BASE + 0x718)
#define ACPU_SC_CPU6_MTCMOS_EN			(ACPU_CTRL_BASE + 0x720)
#define ACPU_SC_CPU6_PW_ISODIS			(ACPU_CTRL_BASE + 0x734)
#define ACPU_SC_CPU6_PW_ISO_STAT		(ACPU_CTRL_BASE + 0x738)
#define ACPU_SC_CPU6_MTCMOS_TIMER_STAT		(ACPU_CTRL_BASE + 0x754)
#define ACPU_SC_CPU6_RVBARADDR			(ACPU_CTRL_BASE + 0x758)
#define ACPU_SC_CPU7_CTRL			(ACPU_CTRL_BASE + 0x800)
#define ACPU_SC_CPU7_STAT			(ACPU_CTRL_BASE + 0x804)
#define ACPU_SC_CPU7_CLKEN			(ACPU_CTRL_BASE + 0x808)
#define ACPU_SC_CPU7_CLK_STAT			(ACPU_CTRL_BASE + 0x810)
#define ACPU_SC_CPU7_RSTEN			(ACPU_CTRL_BASE + 0x814)
#define ACPU_SC_CPU7_RSTDIS			(ACPU_CTRL_BASE + 0x818)
#define ACPU_SC_CPU7_MTCMOS_EN			(ACPU_CTRL_BASE + 0x820)
#define ACPU_SC_CPU7_PW_ISODIS			(ACPU_CTRL_BASE + 0x834)
#define ACPU_SC_CPU7_PW_ISO_STAT		(ACPU_CTRL_BASE + 0x838)
#define ACPU_SC_CPU7_MTCMOS_TIMER_STAT		(ACPU_CTRL_BASE + 0x854)
#define ACPU_SC_CPU7_RVBARADDR			(ACPU_CTRL_BASE + 0x858)
#define ACPU_SC_CPUx_CTRL(x)			((x < 8) ? (ACPU_SC_CPU0_CTRL + 0x100 * x) : ACPU_SC_CPU0_CTRL)
#define ACPU_SC_CPUx_STAT(x)			((x < 8) ? (ACPU_SC_CPU0_STAT + 0x100 * x) : ACPU_SC_CPU0_STAT)
#define ACPU_SC_CPUx_CLKEN(x)			((x < 8) ? (ACPU_SC_CPU0_CLKEN + 0x100 * x) : ACPU_SC_CPU0_CLKEN)
#define ACPU_SC_CPUx_CLK_STAT(x)		((x < 8) ? (ACPU_SC_CPU0_CLK_STAT + 0x100 *x) : ACPU_SC_CPU0_CLK_STAT)
#define ACPU_SC_CPUx_RSTEN(x)			((x < 8) ? (ACPU_SC_CPU0_RSTEN + 0x100 * x) : ACPU_SC_CPU0_RSTEN)
#define ACPU_SC_CPUx_RSTDIS(x)			((x < 8) ? (ACPU_SC_CPU0_RSTDIS + 0x100 * x) : ACPU_SC_CPU0_RSTDIS)
#define ACPU_SC_CPUx_MTCMOS_EN(x)		((x < 8) ? (ACPU_SC_CPU0_MTCMOS_EN + 0x100 * x) : ACPU_SC_CPU0_MTCMOS_EN)
#define ACPU_SC_CPUx_PW_ISODIS(x)		((x < 8) ? (ACPU_SC_CPU0_PW_ISODIS + 0x100 * x) : ACPU_SC_CPU0_PW_ISODIS)
#define ACPU_SC_CPUx_PW_ISO_STAT(x)		((x < 8) ? (ACPU_SC_CPU0_PW_ISO_STAT + 0x100 * x) : ACPU_SC_CPU0_PW_ISO_STAT)
#define ACPU_SC_CPUx_MTCMOS_TIMER_STAT(x)	((x < 8) ? (ACPU_SC_CPU0_MTCMOS_TIMER_STAT + 0x100 * x) : ACPU_SC_CPU0_MTCMOS_TIMER_STAT)
#define ACPU_SC_CPUx_RVBARADDR(x)		((x < 8) ? (ACPU_SC_CPU0_RVBARADDR + 0x100 * x) : ACPU_SC_CPU0_RVBARADDR)

#define ACPU_SC_CPU_STAT_CLKDIV_VD_MASK		(3 << 20)

#define ACPU_SC_VD_CTRL_TUNE_EN_DIF		(1 << 0)
#define ACPU_SC_VD_CTRL_TUNE_EN_INT		(1 << 11)
#define ACPU_SC_VD_CTRL_SHIFT_TABLE0_MASK	(0xf << 12)
#define ACPU_SC_VD_CTRL_FORCE_CLK_EN		(1 << 28)

#define ACPU_SC_VD_MASK_PATTERN			((1 << 13) - 1)

#define ACPU_SC_VD_HPM_CTRL_OSC_DIV_MASK	0xffff
#define ACPU_SC_VD_HPM_CTRL_DLY_EXP_MASK	(0xffffff << 8)

#define PERI_BASE				0xf7030000
#define PERI_SC_PERIPH_CTRL2			(PERI_BASE + 0x004)
#define PERI_SC_PERIPH_CTRL4			(PERI_BASE + 0x00c)
#define PERI_SC_PERIPH_CTRL5			(PERI_BASE + 0x010)
#define PERI_SC_PERIPH_CTRL8			(PERI_BASE + 0x018)
#define PERI_SC_PERIPH_CTRL13			(PERI_BASE + 0x028)
#define PERI_SC_PERIPH_CTRL14			(PERI_BASE + 0x02c)
#define PERI_SC_DDR_CTRL0			(PERI_BASE + 0x050)
#define PERI_SC_PERIPH_STAT1			(PERI_BASE + 0x094)
#define PERI_SC_PERIPH_CLKEN0			(PERI_BASE + 0x200)
#define PERI_SC_PERIPH_CLKDIS0			(PERI_BASE + 0x204)
#define PERI_SC_PERIPH_CLKSTAT0			(PERI_BASE + 0x208)
#define PERI_SC_PERIPH_CLKEN8			(PERI_BASE + 0x240)
#define PERI_SC_PERIPH_CLKEN12			(PERI_BASE + 0x270)
#define PERI_SC_PERIPH_RSTEN0			(PERI_BASE + 0x300)
#define PERI_SC_PERIPH_RSTDIS0			(PERI_BASE + 0x304)
#define PERI_SC_PERIPH_RSTSTAT0			(PERI_BASE + 0x308)
#define PERI_SC_PERIPH_RSTEN8			(PERI_BASE + 0x340)
#define PERI_SC_PERIPH_RSTDIS8			(PERI_BASE + 0x344)
#define PERI_SC_CLK_SEL0			(PERI_BASE + 0x400)
#define PERI_SC_CLKCFG8BIT1			(PERI_BASE + 0x494)

#define PCLK_TIMER1				(1 << 16)
#define PCLK_TIMER0				(1 << 15)

#define PERIPH_CTRL4_OTG_PHY_SEL		(1 << 21)
#define PERIPH_CTRL4_PICO_VBUSVLDEXTSEL		(1 << 11)
#define PERIPH_CTRL4_PICO_VBUSVLDEXT		(1 << 10)
#define PERIPH_CTRL4_PICO_SIDDQ			(1 << 6)
#define PERIPH_CTRL4_FPGA_EXT_PHY_SEL		(1 << 3)

#define PERIPH_CTRL5_PICOPHY_BC_MODE		(1 << 5)

#define PERIPH_CTRL14_FM_CLK_SEL_SHIFT		8
#define PERIPH_CTRL14_FM_EN			(1 << 0)

#define PERI_CLK_USBOTG				(1 << 4)
#define PERI_CLK_MMC2				(1 << 2)
#define PERI_CLK_MMC1				(1 << 1)
#define PERI_CLK_MMC0				(1 << 0)

#define PERI_RST_USBOTG_32K			(1 << 7)
#define PERI_RST_USBOTG				(1 << 6)
#define PERI_RST_PICOPHY			(1 << 5)
#define PERI_RST_USBOTG_BUS			(1 << 4)
#define PERI_RST_MMC2				(1 << 2)
#define PERI_RST_MMC1				(1 << 1)
#define PERI_RST_MMC0				(1 << 0)

#define PMCTRL_BASE				0xf7032000
#define PMCTRL_ACPUPLLCTRL			(PMCTRL_BASE + 0x000)
#define PMCTRL_ACPUPLLFREQ			(PMCTRL_BASE + 0x004)
#define PMCTRL_DDRPLL1CTRL			(PMCTRL_BASE + 0x010)
#define PMCTRL_DDRPLL0CTRL			(PMCTRL_BASE + 0x030)
#define PMCTRL_MEDPLLCTRL			(PMCTRL_BASE + 0x038)
#define PMCTRL_ACPUPLLSEL			(PMCTRL_BASE + 0x100)
#define PMCTRL_ACPUCLKDIV			(PMCTRL_BASE + 0x104)
#define PMCTRL_ACPUSYSPLLCFG			(PMCTRL_BASE + 0x110)
#define PMCTRL_ACPUCLKOFFCFG			(PMCTRL_BASE + 0x114)
#define PMCTRL_ACPUPLLFRAC			(PMCTRL_BASE + 0x134)
#define PMCTRL_ACPUPMUVOLUPTIME			(PMCTRL_BASE + 0x360)
#define PMCTRL_ACPUPMUVOLDNTIME			(PMCTRL_BASE + 0x364)
#define PMCTRL_ACPUVOLPMUADDR			(PMCTRL_BASE + 0x368)
#define PMCTRL_ACPUVOLUPSTEP			(PMCTRL_BASE + 0x36c)
#define PMCTRL_ACPUVOLDNSTEP			(PMCTRL_BASE + 0x370)
#define PMCTRL_ACPUDFTVOL			(PMCTRL_BASE + 0x374)
#define PMCTRL_ACPUDESTVOL			(PMCTRL_BASE + 0x378)
#define PMCTRL_ACPUVOLTTIMEOUT			(PMCTRL_BASE + 0x37c)

#define PMCTRL_ACPUPLLCTRL_EN_CFG		(1 << 0)

#define PMCTRL_ACPUCLKDIV_CPUEXT_CFG_MASK	(3 << 0)
#define PMCTRL_ACPUCLKDIV_DDR_CFG_MASK		(3 << 8)
#define PMCTRL_ACPUCLKDIV_CPUEXT_STAT_MASK	(3 << 16)
#define PMCTRL_ACPUCLKDIV_DDR_STAT_MASK		(3 << 24)

#define PMCTRL_ACPUPLLSEL_ACPUPLL_CFG		(1 << 0)
#define PMCTRL_ACPUPLLSEL_ACPUPLL_STAT		(1 << 1)
#define PMCTRL_ACPUPLLSEL_SYSPLL_STAT		(1 << 2)

#define PMCTRL_ACPUSYSPLL_CLKDIV_CFG_MASK	0x7
#define PMCTRL_ACPUSYSPLL_CLKEN_CFG		(1 << 4)
#define PMCTRL_ACPUSYSPLL_CLKDIV_SW		(3 << 12)

#define PMCTRL_ACPUSYSPLLCFG_SYSPLL_CLKEN	(1 << 4)
#define PMCTRL_ACPUSYSPLLCFG_CLKDIV_MASK	(3 << 12)

#define PMCTRL_ACPUDESTVOL_DEST_VOL_MASK	0x7f
#define PMCTRL_ACPUDESTVOL_CURR_VOL_MASK	(0x7f << 8)

#define MMC0_BASE				0xf723d000

#define AO_CTRL_BASE				0xf7800000
#define AO_SC_SYS_CTRL0				(AO_CTRL_BASE + 0x000)
#define AO_SC_SYS_STAT1				(AO_CTRL_BASE + 0x014)
#define AO_SC_MCU_SUBSYS_CTRL3			(AO_CTRL_BASE + 0x40c)
#define AO_SC_PERIPH_CLKEN4			(AO_CTRL_BASE + 0x630)
#define AO_SC_PERIPH_CLKDIS4			(AO_CTRL_BASE + 0x634)
#define AO_SC_PERIPH_CLKSTAT4			(AO_CTRL_BASE + 0x638)
#define AO_SC_PERIPH_CLKEN5			(AO_CTRL_BASE + 0x63c)
#define AO_SC_PERIPH_RSTEN4			(AO_CTRL_BASE + 0x6f0)
#define AO_SC_PERIPH_RSTDIS4			(AO_CTRL_BASE + 0x6f4)
#define AO_SC_PERIPH_RSTSTAT4			(AO_CTRL_BASE + 0x6f8)
#define AO_SC_ECONUM				(AO_CTRL_BASE + 0xf00)
#define AO_SC_TIMER_EN0				(AO_CTRL_BASE + 0x1d0)
#define AO_SC_TIMER_EN1				(AO_CTRL_BASE + 0x1d4)

#define AO_SC_SYS_CTRL0_MODE_NORMAL		0x004
#define AO_SC_SYS_CTRL0_MODE_MASK		0x007

#define AO_SC_MCU_SUBSYS_CTRL3_RCLK_3		0x003
#define AO_SC_MCU_SUBSYS_CTRL3_RCLK_MASK	0x007

#define AO_SC_PERIPH_CLKEN4_PMUSSI		(1 << 27)

#define AO_SC_PERIPH_CLKEN5_PMUSSI_CCPU		(1 << 0)
#define AO_SC_PERIPH_CLKEN5_PMUSSI_MCU		(1 << 16)

#define PMUSSI_BASE				0xf8000000

#define TIMER0_BASE				0xf8008000
#define TIMER00_LOAD				(TIMER0_BASE + 0x000)
#define TIMER00_VALUE				(TIMER0_BASE + 0x004)
#define TIMER00_CONTROL				(TIMER0_BASE + 0x008)
#define TIMER00_BGLOAD				(TIMER0_BASE + 0x018)

#define GPIO0_BASE				0xf8011000
#define GPIO1_BASE				0xf8012000
#define GPIO2_BASE				0xf8013000
#define GPIO3_BASE				0xf8014000
#define GPIO4_BASE				0xf7020000
#define GPIO5_BASE				0xf7021000
#define GPIO6_BASE				0xf7022000
#define GPIO7_BASE				0xf7023000
#define GPIO8_BASE				0xf7024000
#define GPIO9_BASE				0xf7025000
#define GPIO10_BASE				0xf7026000
#define GPIO11_BASE				0xf7027000
#define GPIO12_BASE				0xf7028000
#define GPIO13_BASE				0xf7029000
#define GPIO14_BASE				0xf702a000
#define GPIO15_BASE				0xf702b000
#define GPIO16_BASE				0xf702c000
#define GPIO17_BASE				0xf702d000
#define GPIO18_BASE				0xf702e000
#define GPIO19_BASE				0xf702f000

#endif	/* __HI6220_H__ */
