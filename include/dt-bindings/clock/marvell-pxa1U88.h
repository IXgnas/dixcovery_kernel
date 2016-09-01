#ifndef __DTS_MARVELL_PXA1U88_CLOCK_H
#define __DTS_MARVELL_PXA1U88_CLOCK_H

/* fixed clocks and plls */
#define PXA1U88_CLK_CLK32		1
#define PXA1U88_CLK_VCTCXO		2
#define PXA1U88_CLK_PLL1_624		3
#define PXA1U88_CLK_PLL1_416		4
#define PXA1U88_CLK_PLL1_499		5
#define PXA1U88_CLK_PLL1_832		6
#define PXA1U88_CLK_PLL1_1248		7
#define PXA1U88_CLK_PLL1_2		8
#define PXA1U88_CLK_PLL1_4		9
#define PXA1U88_CLK_PLL1_8		10
#define PXA1U88_CLK_PLL1_16		11
#define PXA1U88_CLK_PLL1_6		12
#define PXA1U88_CLK_PLL1_12		13
#define PXA1U88_CLK_PLL1_24		14
#define PXA1U88_CLK_PLL1_48		15
#define PXA1U88_CLK_PLL1_96		16
#define PXA1U88_CLK_PLL1_13		17
#define PXA1U88_CLK_PLL1_13_1_5		18
#define PXA1U88_CLK_PLL1_2_1_5		19
#define PXA1U88_CLK_PLL1_13_16		20
#define PXA1U88_CLK_PLL1_416_GATE	21
#define PXA1U88_CLK_PLL1_624_GATE	22
#define PXA1U88_CLK_PLL1_832_GATE	23
#define PXA1U88_CLK_PLL1_1248_GATE	24
#define PXA1U88_CLK_PLL1_312_GATE	25
#define PXA1U88_CLK_PLL1_499_EN		26
#define PXA1U88_CLK_UART_PLL		27
#define PXA1U88_CLK_PLL2VCO		28
#define PXA1U88_CLK_PLL2		29
#define PXA1U88_CLK_PLL2P		30
#define PXA1U88_CLK_PLL2VCODIV3		31
#define PXA1U88_CLK_PLL3VCO		32
#define PXA1U88_CLK_PLL3		33
#define PXA1U88_CLK_PLL3P		34
#define PXA1U88_CLK_PLL3VCODIV3		35
#define PXA1U88_CLK_PLL4VCO		36
#define PXA1U88_CLK_PLL4		37
#define PXA1U88_CLK_PLL4P		38
#define PXA1U88_CLK_PLL4VCODIV3		39

/* ddr/axi etc */
#define PXA1U88_CLK_DDR			40
#define PXA1U88_CLK_AXI			41
#define PXA1U88_CLK_CPU			42

/* apb periphrals */
#define PXA1U88_CLK_TWSI0		60
#define PXA1U88_CLK_TWSI1		61
#define PXA1U88_CLK_TWSI2		62
#define PXA1U88_CLK_TWSI3		63
#define PXA1U88_CLK_GPIO		64
#define PXA1U88_CLK_KPC			65
#define PXA1U88_CLK_RTC			66
#define PXA1U88_CLK_PWM0		67
#define PXA1U88_CLK_PWM1		68
#define PXA1U88_CLK_PWM2		69
#define PXA1U88_CLK_PWM3		70
#define PXA1U88_CLK_UART0		71
#define PXA1U88_CLK_UART1		72
#define PXA1U88_CLK_UART2		73
#define PXA1U88_CLK_DBGCLK		74
#define PXA1U88_CLK_TRACECLK		75
#define PXA1U88_CLK_THERMAL		76
#define PXA1U88_CLK_SWJTAG		77
#define PXA1U88_CLK_IPC_RST		78
#define PXA1U88_CLK_AICER		79
#define PXA1U88_CLK_SSP0		80
#define PXA1U88_CLK_SSP2		81

/* axi periphrals */
#define PXA1U88_CLK_USB			100
#define PXA1U88_CLK_SDH_AXI		101
#define PXA1U88_CLK_SDH0		102
#define PXA1U88_CLK_SDH1		103
#define PXA1U88_CLK_SDH2		104
#define PXA1U88_CLK_GC3D		105
#define PXA1U88_CLK_GCSH		106
#define PXA1U88_CLK_GC2D		107
#define PXA1U88_CLK_GCBUS		108
#define PXA1U88_CLK_VPU			109
#define PXA1U88_CLK_VPUBUS		110
#define PXA1U88_CLK_DSI_ESC		111
#define PXA1U88_CLK_HCLK		112
#define PXA1U88_CLK_DISP1		113
#define PXA1U88_CLK_DISP2		114
#define PXA1U88_CLK_DISP3		115
#define PXA1U88_CLK_DISP4		116
#define PXA1U88_CLK_DISP1_EN		117
#define PXA1U88_CLK_DISP2_EN		118
#define PXA1U88_CLK_DISP3_EN		119
#define PXA1U88_CLK_DISP4_EN		120
#define PXA1U88_CLK_DISP_AXI_SEL_CLK	121
#define PXA1U88_CLK_DISP_AXI_CLK	122
#define PXA1U88_CLK_DISP_HCLK		123
#define PXA1U88_CLK_ISIM_VCLK		124
#define PXA1U88_CLK_SC2_MCLK		125
#define PXA1U88_CLK_SC2_4X_CLK		126
#define PXA1U88_CLK_SC2_CSI_CLK		127
#define PXA1U88_CLK_SC2_AXI_CLK		128
#define PXA1U88_CLK_SC2_PHY2LN_CLK_EN	129
#define PXA1U88_CLK_SC2_PHY4LN_CLK_EN	130
#define PXA1U88_CLK_ISP_PIPE_CLK	131
#define PXA1U88_CLK_ISP_CORE_CLK_EN	132
#define PXA1U88_CLK_SC2_AHB_CLK		133

/* dummy clks */
#define PXA1U88_CLK_SDH0_DUMMY		160
#define PXA1U88_CLK_SDH1_DUMMY		161
#define PXA1U88_CLK_SDH2_DUMMY		162

#define PXA1U88_NR_CLKS			200
#endif

