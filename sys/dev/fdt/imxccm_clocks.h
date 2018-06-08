/* Public Domain */

/*
 * i.MX6Q clocks.
 */

#define IMX6_CLK_IPG		0x3e
#define IMX6_CLK_IPG_PER	0x3f
#define IMX6_CLK_ARM		0x68
#define IMX6_CLK_AHB		0x69
#define IMX6_CLK_ENET		0x75
#define IMX6_CLK_I2C1		0x7d
#define IMX6_CLK_I2C2		0x7e
#define IMX6_CLK_I2C3		0x7f
#define IMX6_CLK_SATA		0x9a
#define IMX6_CLK_UART_IPG	0xa0
#define IMX6_CLK_UART_SERIAL	0xa1
#define IMX6_CLK_USBOH3		0xa2
#define IMX6_CLK_USDHC1		0xa3
#define IMX6_CLK_USDHC2		0xa4
#define IMX6_CLK_USDHC3		0xa5
#define IMX6_CLK_USDHC4		0xa6
#define IMX6_CLK_USBPHY1	0xb6
#define IMX6_CLK_USBPHY2	0xb7
#define IMX6_CLK_SATA_REF	0xba
#define IMX6_CLK_SATA_REF_100	0xbb
#define IMX6_CLK_ENET_REF	0xbe

struct imxccm_gate imx6_gates[] = {
	[IMX6_CLK_ENET] = { CCM_CCGR1, 5, IMX6_CLK_IPG },
	[IMX6_CLK_I2C1] = { CCM_CCGR2, 3, IMX6_CLK_IPG_PER },
	[IMX6_CLK_I2C2] = { CCM_CCGR2, 4, IMX6_CLK_IPG_PER },
	[IMX6_CLK_I2C3] = { CCM_CCGR2, 5, IMX6_CLK_IPG_PER },
	[IMX6_CLK_SATA] = { CCM_CCGR5, 2 },
	[IMX6_CLK_UART_IPG] = { CCM_CCGR5, 12, IMX6_CLK_IPG },
	[IMX6_CLK_UART_SERIAL] = { CCM_CCGR5, 13 },
	[IMX6_CLK_USBOH3] = { CCM_CCGR6, 0 },
	[IMX6_CLK_USDHC1] = { CCM_CCGR6, 1 },
	[IMX6_CLK_USDHC2] = { CCM_CCGR6, 2 },
	[IMX6_CLK_USDHC3] = { CCM_CCGR6, 3 },
	[IMX6_CLK_USDHC4] = { CCM_CCGR6, 4 },
};

/*
 * i.MX6UL clocks.
 */

#define IMX6UL_CLK_ARM		0x5d
#define IMX6UL_CLK_PERCLK	0x63
#define IMX6UL_CLK_IPG		0x64
#define IMX6UL_CLK_GPT1_BUS	0x98
#define IMX6UL_CLK_GPT1_SERIAL	0x99
#define IMX6UL_CLK_I2C1		0x9c
#define IMX6UL_CLK_I2C2		0x9d
#define IMX6UL_CLK_I2C3		0x9e
#define IMX6UL_CLK_I2C4		0x9f
#define IMX6UL_CLK_UART1_IPG	0xbd
#define IMX6UL_CLK_UART1_SERIAL	0xbe
#define IMX6UL_CLK_USBOH3	0xcd
#define IMX6UL_CLK_USDHC1	0xce
#define IMX6UL_CLK_USDHC2	0xcf

struct imxccm_gate imx6ul_gates[] =
{
	[IMX6UL_CLK_GPT1_BUS] = { CCM_CCGR1, 10, IMX6UL_CLK_PERCLK },
	[IMX6UL_CLK_GPT1_SERIAL] = { CCM_CCGR1, 11, IMX6UL_CLK_PERCLK },
	[IMX6UL_CLK_I2C1] = { CCM_CCGR2, 3, IMX6UL_CLK_PERCLK },
	[IMX6UL_CLK_I2C2] = { CCM_CCGR2, 4, IMX6UL_CLK_PERCLK },
	[IMX6UL_CLK_I2C3] = { CCM_CCGR2, 5, IMX6UL_CLK_PERCLK },
	[IMX6UL_CLK_I2C4] = { CCM_CCGR6, 12, IMX6UL_CLK_PERCLK },
	[IMX6UL_CLK_UART1_IPG] = { CCM_CCGR5, 12, IMX6UL_CLK_IPG },
	[IMX6UL_CLK_UART1_SERIAL] = { CCM_CCGR5, 12 },
	[IMX6UL_CLK_USBOH3] = { CCM_CCGR6, 0 },
	[IMX6UL_CLK_USDHC1] = { CCM_CCGR6, 1 },
	[IMX6UL_CLK_USDHC2] = { CCM_CCGR6, 2 },
};

/*
 * i.MX8MQ clocks.
 */

#define IMX8MQ_SYS1_PLL_100M		0x48
#define IMX8MQ_SYS1_PLL_266M		0x4c
#define IMX8MQ_SYS1_PLL_400M		0x4d
#define IMX8MQ_SYS2_PLL_500M		0x56
#define IMX8MQ_CLK_A53_SRC		0x58
#define IMX8MQ_CLK_A53_CG		0x59
#define IMX8MQ_CLK_A53_DIV		0x5a
#define IMX8MQ_CLK_ENET_AXI_SRC		0x6b
#define IMX8MQ_CLK_ENET_AXI_CG		0x6c
#define IMX8MQ_CLK_ENET_AXI_PRE_DIV	0x6d
#define IMX8MQ_CLK_ENET_AXI_DIV		0x6e
#define IMX8MQ_CLK_USB_BUS_SRC		0x83
#define IMX8MQ_CLK_USB_BUS_CG		0x84
#define IMX8MQ_CLK_USB_BUS_PRE_DIV	0x85
#define IMX8MQ_CLK_PCIE1_CTRL_SRC	0xb7
#define IMX8MQ_CLK_PCIE1_CTRL_CG	0xb8
#define IMX8MQ_CLK_PCIE1_CTRL_PRE_DIV	0xb9
#define IMX8MQ_CLK_PCIE1_CTRL_DIV	0xba
#define IMX8MQ_CLK_PCIE1_PHY_SRC	0xbb
#define IMX8MQ_CLK_PCIE1_PHY_CG		0xbc
#define IMX8MQ_CLK_PCIE1_PHY_PRE_DIV	0xbd
#define IMX8MQ_CLK_PCIE1_PHY_DIV	0xbe
#define IMX8MQ_CLK_PCIE1_AUX_SRC	0xbf
#define IMX8MQ_CLK_PCIE1_AUX_CG		0xc0
#define IMX8MQ_CLK_PCIE1_AUX_PRE_DIV	0xc1
#define IMX8MQ_CLK_PCIE1_AUX_DIV	0xc2
#define IMX8MQ_CLK_USB_BUS_DIV		0x86
#define IMX8MQ_CLK_ENET_REF_SRC		0xeb
#define IMX8MQ_CLK_ENET_REF_CG		0xec
#define IMX8MQ_CLK_ENET_REF_PRE_DIV	0xed
#define IMX8MQ_CLK_ENET_REF_DIV		0xee
#define IMX8MQ_CLK_ENET_TIMER_SRC	0xef
#define IMX8MQ_CLK_ENET_TIMER_CG	0xf0
#define IMX8MQ_CLK_ENET_TIMER_PRE_DIV	0xf1
#define IMX8MQ_CLK_ENET_TIMER_DIV	0xf2
#define IMX8MQ_CLK_ENET_PHY_REF_SRC	0xf3
#define IMX8MQ_CLK_ENET_PHY_REF_CG	0xf4
#define IMX8MQ_CLK_ENET_PHY_REF_PRE_DIV	0xf5
#define IMX8MQ_CLK_ENET_PHY_REF_DIV	0xf6
#define IMX8MQ_CLK_USDHC1_SRC		0xff
#define IMX8MQ_CLK_USDHC1_CG		0x100
#define IMX8MQ_CLK_USDHC1_PRE_DIV	0x101
#define IMX8MQ_CLK_USDHC1_DIV		0x102
#define IMX8MQ_CLK_USDHC2_SRC		0x103
#define IMX8MQ_CLK_USDHC2_CG		0x104
#define IMX8MQ_CLK_USDHC2_PRE_DIV	0x105
#define IMX8MQ_CLK_USDHC2_DIV		0x106
#define IMX8MQ_CLK_I2C1_SRC		0x107
#define IMX8MQ_CLK_I2C1_CG		0x108
#define IMX8MQ_CLK_I2C1_PRE_DIV		0x109
#define IMX8MQ_CLK_I2C1_DIV		0x10a
#define IMX8MQ_CLK_I2C2_SRC		0x10b
#define IMX8MQ_CLK_I2C2_CG		0x10c
#define IMX8MQ_CLK_I2C2_PRE_DIV		0x10d
#define IMX8MQ_CLK_I2C2_DIV		0x10e
#define IMX8MQ_CLK_I2C3_SRC		0x10f
#define IMX8MQ_CLK_I2C3_CG		0x110
#define IMX8MQ_CLK_I2C3_PRE_DIV		0x111
#define IMX8MQ_CLK_I2C3_DIV		0x112
#define IMX8MQ_CLK_I2C4_SRC		0x113
#define IMX8MQ_CLK_I2C4_CG		0x114
#define IMX8MQ_CLK_I2C4_PRE_DIV		0x115
#define IMX8MQ_CLK_I2C4_DIV		0x116
#define IMX8MQ_CLK_UART1_SRC		0x117
#define IMX8MQ_CLK_UART1_CG		0x118
#define IMX8MQ_CLK_UART1_PRE_DIV	0x119
#define IMX8MQ_CLK_UART1_DIV		0x11a
#define IMX8MQ_CLK_UART2_SRC		0x11b
#define IMX8MQ_CLK_UART2_CG		0x11c
#define IMX8MQ_CLK_UART2_PRE_DIV	0x11d
#define IMX8MQ_CLK_UART2_DIV		0x11e
#define IMX8MQ_CLK_UART3_SRC		0x11f
#define IMX8MQ_CLK_UART3_CG		0x120
#define IMX8MQ_CLK_UART3_PRE_DIV	0x121
#define IMX8MQ_CLK_UART3_DIV		0x122
#define IMX8MQ_CLK_UART4_SRC		0x123
#define IMX8MQ_CLK_UART4_CG		0x124
#define IMX8MQ_CLK_UART4_PRE_DIV	0x125
#define IMX8MQ_CLK_UART4_DIV		0x126
#define IMX8MQ_CLK_USB_CORE_REF_SRC	0x127
#define IMX8MQ_CLK_USB_CORE_REF_CG	0x128
#define IMX8MQ_CLK_USB_CORE_REF_PRE_DIV	0x129
#define IMX8MQ_CLK_USB_CORE_REF_DIV	0x12a
#define IMX8MQ_CLK_USB_PHY_REF_SRC	0x12b
#define IMX8MQ_CLK_USB_PHY_REF_CG	0x12c
#define IMX8MQ_CLK_USB_PHY_REF_PRE_DIV	0x12d
#define IMX8MQ_CLK_USB_PHY_REF_DIV	0x12e
#define IMX8MQ_CLK_PCIE2_CTRL_SRC	0x17b
#define IMX8MQ_CLK_PCIE2_CTRL_CG	0x17c
#define IMX8MQ_CLK_PCIE2_CTRL_PRE_DIV	0x17d
#define IMX8MQ_CLK_PCIE2_CTRL_DIV	0x17e
#define IMX8MQ_CLK_PCIE2_PHY_SRC	0x17f
#define IMX8MQ_CLK_PCIE2_PHY_CG		0x180
#define IMX8MQ_CLK_PCIE2_PHY_PRE_DIV	0x181
#define IMX8MQ_CLK_PCIE2_PHY_DIV	0x182
#define IMX8MQ_CLK_PCIE2_AUX_SRC	0x183
#define IMX8MQ_CLK_PCIE2_AUX_CG		0x184
#define IMX8MQ_CLK_PCIE2_AUX_PRE_DIV	0x185
#define IMX8MQ_CLK_PCIE2_AUX_DIV	0x186
#define IMX8MQ_CLK_ENET1_ROOT		0x190
#define IMX8MQ_CLK_I2C1_ROOT		0x192
#define IMX8MQ_CLK_I2C2_ROOT		0x193
#define IMX8MQ_CLK_I2C3_ROOT		0x194
#define IMX8MQ_CLK_I2C4_ROOT		0x195
#define IMX8MQ_CLK_PCIE1_ROOT		0x197
#define IMX8MQ_CLK_PCIE2_ROOT		0x198
#define IMX8MQ_CLK_UART1_ROOT		0x1a4
#define IMX8MQ_CLK_UART2_ROOT		0x1a5
#define IMX8MQ_CLK_UART3_ROOT		0x1a6
#define IMX8MQ_CLK_UART4_ROOT		0x1a7
#define IMX8MQ_CLK_USB1_CTRL_ROOT	0x1a8
#define IMX8MQ_CLK_USB2_CTRL_ROOT	0x1a9
#define IMX8MQ_CLK_USB1_PHY_ROOT	0x1aa
#define IMX8MQ_CLK_USB2_PHY_ROOT	0x1ab
#define IMX8MQ_CLK_USDHC1_ROOT		0x1ac
#define IMX8MQ_CLK_USDHC2_ROOT		0x1ad

struct imxccm_gate imx8mq_gates[] =
{
	[IMX8MQ_CLK_A53_CG] = { 0x8000, 14, IMX8MQ_CLK_A53_SRC },
	[IMX8MQ_CLK_ENET_AXI_CG] = { 0x8880, 14, IMX8MQ_CLK_ENET_AXI_SRC },
	[IMX8MQ_CLK_USB_BUS_CG] = { 0x8b80, 14, IMX8MQ_CLK_USB_BUS_SRC },
	[IMX8MQ_CLK_PCIE1_CTRL_CG] = { 0xa300, 14, IMX8MQ_CLK_PCIE1_CTRL_SRC },
	[IMX8MQ_CLK_PCIE1_PHY_CG] = { 0xa380, 14, IMX8MQ_CLK_PCIE1_PHY_SRC },
	[IMX8MQ_CLK_PCIE1_AUX_CG] = { 0xa400, 14, IMX8MQ_CLK_PCIE1_AUX_SRC },
	[IMX8MQ_CLK_ENET_REF_CG] = { 0xa980, 14, IMX8MQ_CLK_ENET_REF_SRC },
	[IMX8MQ_CLK_ENET_TIMER_CG] = { 0xaa00, 14, IMX8MQ_CLK_ENET_TIMER_SRC },
	[IMX8MQ_CLK_ENET_PHY_REF_CG] = { 0xaa80, 14, IMX8MQ_CLK_ENET_PHY_REF_SRC },
	[IMX8MQ_CLK_USDHC1_CG] = { 0xac00, 14, IMX8MQ_CLK_USDHC1_SRC },
	[IMX8MQ_CLK_USDHC2_CG] = { 0xac80, 14, IMX8MQ_CLK_USDHC2_SRC },
	[IMX8MQ_CLK_I2C1_CG] = { 0xad00, 14, IMX8MQ_CLK_I2C1_SRC },
	[IMX8MQ_CLK_I2C2_CG] = { 0xad80, 14, IMX8MQ_CLK_I2C2_SRC },
	[IMX8MQ_CLK_I2C3_CG] = { 0xae00, 14, IMX8MQ_CLK_I2C3_SRC },
	[IMX8MQ_CLK_I2C4_CG] = { 0xae80, 14, IMX8MQ_CLK_I2C4_SRC },
	[IMX8MQ_CLK_UART1_CG] = { 0xaf00, 14, IMX8MQ_CLK_UART1_SRC },
	[IMX8MQ_CLK_UART2_CG] = { 0xaf80, 14, IMX8MQ_CLK_UART2_SRC },
	[IMX8MQ_CLK_UART3_CG] = { 0xb000, 14, IMX8MQ_CLK_UART3_SRC },
	[IMX8MQ_CLK_UART4_CG] = { 0xb080, 14, IMX8MQ_CLK_UART4_SRC },
	[IMX8MQ_CLK_USB_CORE_REF_CG] = { 0xb100, 14, IMX8MQ_CLK_USB_CORE_REF_SRC },
	[IMX8MQ_CLK_USB_PHY_REF_CG] = { 0xb180, 14, IMX8MQ_CLK_USB_PHY_REF_SRC },
	[IMX8MQ_CLK_PCIE2_CTRL_CG] = { 0xc000, 14, IMX8MQ_CLK_PCIE2_CTRL_SRC },
	[IMX8MQ_CLK_PCIE2_PHY_CG] = { 0xc080, 14, IMX8MQ_CLK_PCIE2_PHY_SRC },
	[IMX8MQ_CLK_PCIE2_AUX_CG] = { 0xc100, 14, IMX8MQ_CLK_PCIE2_AUX_SRC },
	[IMX8MQ_CLK_ENET1_ROOT] = { 0x40a0, 0, IMX8MQ_CLK_ENET_AXI_DIV },
	[IMX8MQ_CLK_I2C1_ROOT] = { 0x4170, 0, IMX8MQ_CLK_I2C1_DIV },
	[IMX8MQ_CLK_I2C2_ROOT] = { 0x4180, 0, IMX8MQ_CLK_I2C2_DIV },
	[IMX8MQ_CLK_I2C3_ROOT] = { 0x4190, 0, IMX8MQ_CLK_I2C3_DIV },
	[IMX8MQ_CLK_I2C4_ROOT] = { 0x41a0, 0, IMX8MQ_CLK_I2C4_DIV },
	[IMX8MQ_CLK_PCIE1_ROOT] = { 0x4250, 0, IMX8MQ_CLK_PCIE1_CTRL_DIV },
	[IMX8MQ_CLK_PCIE2_ROOT] = { 0x4640, 0, IMX8MQ_CLK_PCIE2_CTRL_DIV },
	[IMX8MQ_CLK_UART1_ROOT] = { 0x4490, 0, IMX8MQ_CLK_UART1_DIV },
	[IMX8MQ_CLK_UART2_ROOT] = { 0x44a0, 0, IMX8MQ_CLK_UART2_DIV },
	[IMX8MQ_CLK_UART3_ROOT] = { 0x44b0, 0, IMX8MQ_CLK_UART3_DIV },
	[IMX8MQ_CLK_UART4_ROOT] = { 0x44c0, 0, IMX8MQ_CLK_UART4_DIV },
	[IMX8MQ_CLK_USB1_CTRL_ROOT] = { 0x44d0, 0, IMX8MQ_CLK_USB_CORE_REF_DIV },
	[IMX8MQ_CLK_USB2_CTRL_ROOT] = { 0x44e0, 0, IMX8MQ_CLK_USB_CORE_REF_DIV },
	[IMX8MQ_CLK_USB1_PHY_ROOT] = { 0x44f0, 0, IMX8MQ_CLK_USB_PHY_REF_DIV },
	[IMX8MQ_CLK_USB2_PHY_ROOT] = { 0x4500, 0, IMX8MQ_CLK_USB_PHY_REF_DIV },
	[IMX8MQ_CLK_USDHC1_ROOT] = { 0x4510, 0, IMX8MQ_CLK_USDHC1_DIV },
	[IMX8MQ_CLK_USDHC2_ROOT] = { 0x4520, 0, IMX8MQ_CLK_USDHC2_DIV },
};

struct imxccm_divider imx8mq_divs[] =
{
	[IMX8MQ_CLK_A53_DIV] = { 0x8000, 0, 0x7, IMX8MQ_CLK_A53_CG },
	[IMX8MQ_CLK_ENET_AXI_PRE_DIV] = { 0x8880, 16, 0x7, IMX8MQ_CLK_ENET_AXI_CG },
	[IMX8MQ_CLK_ENET_AXI_DIV] = { 0x8880, 0, 0x3f, IMX8MQ_CLK_ENET_AXI_PRE_DIV },
	[IMX8MQ_CLK_USB_BUS_PRE_DIV] = { 0x8b80, 16, 0x7, IMX8MQ_CLK_USB_BUS_CG },
	[IMX8MQ_CLK_USB_BUS_DIV] = { 0x8b80, 0, 0x3f, IMX8MQ_CLK_USB_BUS_PRE_DIV },
	[IMX8MQ_CLK_PCIE1_CTRL_PRE_DIV] = { 0xa300, 16, 0x7, IMX8MQ_CLK_PCIE1_CTRL_CG },
	[IMX8MQ_CLK_PCIE1_CTRL_DIV] = { 0xa300, 0, 0x3f, IMX8MQ_CLK_PCIE1_CTRL_PRE_DIV },
	[IMX8MQ_CLK_PCIE1_PHY_PRE_DIV] = { 0xa380, 16, 0x7, IMX8MQ_CLK_PCIE1_CTRL_CG },
	[IMX8MQ_CLK_PCIE1_PHY_DIV] = { 0xa380, 0, 0x3f, IMX8MQ_CLK_PCIE1_CTRL_PRE_DIV },
	[IMX8MQ_CLK_PCIE1_AUX_PRE_DIV] = { 0xa400, 16, 0x7, IMX8MQ_CLK_PCIE1_AUX_CG },
	[IMX8MQ_CLK_PCIE1_AUX_DIV] = { 0xa400, 0, 0x3f, IMX8MQ_CLK_PCIE1_AUX_PRE_DIV },
	[IMX8MQ_CLK_ENET_REF_PRE_DIV] = { 0xa980, 16, 0x7, IMX8MQ_CLK_ENET_REF_CG },
	[IMX8MQ_CLK_ENET_REF_DIV] = { 0xa980, 0, 0x3f, IMX8MQ_CLK_ENET_REF_PRE_DIV },
	[IMX8MQ_CLK_ENET_TIMER_PRE_DIV] = { 0xaa00, 16, 0x7, IMX8MQ_CLK_ENET_TIMER_CG },
	[IMX8MQ_CLK_ENET_TIMER_DIV] = { 0xaa00, 0, 0x3f, IMX8MQ_CLK_ENET_TIMER_PRE_DIV },
	[IMX8MQ_CLK_ENET_PHY_REF_PRE_DIV] = { 0xaa80, 16, 0x7, IMX8MQ_CLK_ENET_PHY_REF_CG },
	[IMX8MQ_CLK_ENET_PHY_REF_DIV] = { 0xaa80, 0, 0x3f, IMX8MQ_CLK_ENET_PHY_REF_PRE_DIV },
	[IMX8MQ_CLK_USDHC1_PRE_DIV] = { 0xac00, 16, 0x7, IMX8MQ_CLK_USDHC1_CG },
	[IMX8MQ_CLK_USDHC1_DIV] = { 0xac00, 0, 0x3f, IMX8MQ_CLK_USDHC1_PRE_DIV },
	[IMX8MQ_CLK_USDHC2_PRE_DIV] = { 0xac80, 16, 0x7, IMX8MQ_CLK_USDHC2_CG },
	[IMX8MQ_CLK_USDHC2_DIV] = { 0xac80, 0, 0x3f, IMX8MQ_CLK_USDHC2_PRE_DIV },
	[IMX8MQ_CLK_I2C1_PRE_DIV] = { 0xad00, 16, 0x7, IMX8MQ_CLK_I2C1_CG },
	[IMX8MQ_CLK_I2C1_DIV] = { 0xad00, 0, 0x3f, IMX8MQ_CLK_I2C1_PRE_DIV },
	[IMX8MQ_CLK_I2C2_PRE_DIV] = { 0xad80, 16, 0x7, IMX8MQ_CLK_I2C2_CG },
	[IMX8MQ_CLK_I2C2_DIV] = { 0xad80, 0, 0x3f, IMX8MQ_CLK_I2C2_PRE_DIV },
	[IMX8MQ_CLK_I2C3_PRE_DIV] = { 0xae00, 16, 0x7, IMX8MQ_CLK_I2C3_CG },
	[IMX8MQ_CLK_I2C3_DIV] = { 0xae00, 0, 0x3f, IMX8MQ_CLK_I2C3_PRE_DIV },
	[IMX8MQ_CLK_I2C4_PRE_DIV] = { 0xae80, 16, 0x7, IMX8MQ_CLK_I2C4_CG },
	[IMX8MQ_CLK_I2C4_DIV] = { 0xae80, 0, 0x3f, IMX8MQ_CLK_I2C4_PRE_DIV },
	[IMX8MQ_CLK_UART1_PRE_DIV] = { 0xaf00, 16, 0x7, IMX8MQ_CLK_UART1_CG },
	[IMX8MQ_CLK_UART1_DIV] = { 0xaf00, 0, 0x3f, IMX8MQ_CLK_UART1_PRE_DIV },
	[IMX8MQ_CLK_UART2_PRE_DIV] = { 0xaf80, 16, 0x7, IMX8MQ_CLK_UART2_CG },
	[IMX8MQ_CLK_UART2_DIV] = { 0xaf80, 0, 0x3f, IMX8MQ_CLK_UART2_PRE_DIV },
	[IMX8MQ_CLK_UART3_PRE_DIV] = { 0xb000, 16, 0x7, IMX8MQ_CLK_UART3_CG },
	[IMX8MQ_CLK_UART3_DIV] = { 0xb000, 0, 0x3f, IMX8MQ_CLK_UART3_PRE_DIV },
	[IMX8MQ_CLK_UART4_PRE_DIV] = { 0xb080, 16, 0x7, IMX8MQ_CLK_UART4_CG },
	[IMX8MQ_CLK_UART4_DIV] = { 0xb080, 0, 0x3f, IMX8MQ_CLK_UART4_PRE_DIV },
	[IMX8MQ_CLK_USB_CORE_REF_PRE_DIV] = { 0xb100, 16, 0x7, IMX8MQ_CLK_USB_CORE_REF_CG },
	[IMX8MQ_CLK_USB_CORE_REF_DIV] = { 0xb100, 0, 0x3f, IMX8MQ_CLK_USB_CORE_REF_PRE_DIV },
	[IMX8MQ_CLK_USB_PHY_REF_PRE_DIV] = { 0xb180, 16, 0x7, IMX8MQ_CLK_USB_PHY_REF_CG },
	[IMX8MQ_CLK_USB_PHY_REF_DIV] = { 0xb180, 0, 0x3f, IMX8MQ_CLK_USB_PHY_REF_PRE_DIV },
	[IMX8MQ_CLK_PCIE2_CTRL_PRE_DIV] = { 0xc000, 16, 0x7, IMX8MQ_CLK_PCIE2_CTRL_CG },
	[IMX8MQ_CLK_PCIE2_CTRL_DIV] = { 0xc000, 0, 0x3f, IMX8MQ_CLK_PCIE2_CTRL_PRE_DIV },
	[IMX8MQ_CLK_PCIE2_PHY_PRE_DIV] = { 0xc080, 16, 0x7, IMX8MQ_CLK_PCIE2_CTRL_CG },
	[IMX8MQ_CLK_PCIE2_PHY_DIV] = { 0xc080, 0, 0x3f, IMX8MQ_CLK_PCIE2_CTRL_PRE_DIV },
	[IMX8MQ_CLK_PCIE2_AUX_PRE_DIV] = { 0xc100, 16, 0x7, IMX8MQ_CLK_PCIE2_AUX_CG },
	[IMX8MQ_CLK_PCIE2_AUX_DIV] = { 0xc100, 0, 0x3f, IMX8MQ_CLK_PCIE2_AUX_PRE_DIV },
};

struct imxccm_mux imx8mq_muxs[] =
{
	[IMX8MQ_CLK_A53_SRC] = { 0x8000, 24, 0x7 },
	[IMX8MQ_CLK_ENET_AXI_SRC] = { 0x8880, 24, 0x7 },
	[IMX8MQ_CLK_USB_BUS_SRC] = { 0x8b80, 24, 0x7 },
	[IMX8MQ_CLK_PCIE1_CTRL_SRC] = { 0xa300, 24, 0x7 },
	[IMX8MQ_CLK_PCIE1_PHY_SRC] = { 0xa380, 24, 0x7 },
	[IMX8MQ_CLK_PCIE1_AUX_SRC] = { 0xa400, 24, 0x7 },
	[IMX8MQ_CLK_ENET_REF_SRC] = { 0xa980, 24, 0x7 },
	[IMX8MQ_CLK_ENET_TIMER_SRC] = { 0xaa00, 24, 0x7 },
	[IMX8MQ_CLK_ENET_PHY_REF_SRC] = { 0xaa80, 24, 0x7 },
	[IMX8MQ_CLK_USDHC1_SRC] = { 0xac00, 24, 0x7 },
	[IMX8MQ_CLK_USDHC2_SRC] = { 0xac80, 24, 0x7 },
	[IMX8MQ_CLK_I2C1_SRC] = { 0xad00, 24, 0x7 },
	[IMX8MQ_CLK_I2C2_SRC] = { 0xad80, 24, 0x7 },
	[IMX8MQ_CLK_I2C3_SRC] = { 0xae00, 24, 0x7 },
	[IMX8MQ_CLK_I2C4_SRC] = { 0xae80, 24, 0x7 },
	[IMX8MQ_CLK_UART1_SRC] = { 0xaf00, 24, 0x7 },
	[IMX8MQ_CLK_UART2_SRC] = { 0xaf80, 24, 0x7 },
	[IMX8MQ_CLK_UART3_SRC] = { 0xb000, 24, 0x7 },
	[IMX8MQ_CLK_UART4_SRC] = { 0xb080, 24, 0x7 },
	[IMX8MQ_CLK_USB_CORE_REF_SRC] = { 0xb100, 24, 0x7 },
	[IMX8MQ_CLK_USB_PHY_REF_SRC] = { 0xb180, 24, 0x7 },
	[IMX8MQ_CLK_PCIE2_CTRL_SRC] = { 0xc000, 24, 0x7 },
	[IMX8MQ_CLK_PCIE2_PHY_SRC] = { 0xc080, 24, 0x7 },
	[IMX8MQ_CLK_PCIE2_AUX_SRC] = { 0xc100, 24, 0x7 },
};
