//lala: WF_PHY header
#ifndef __WF_PHY_H__
#define __WF_PHY_H__

#define WF_PHY_BASE		    0x10000

/* WF_PHY_FRONT */
#define CR_PHYCK_CTRL       WF_PHY_BASE + 0x0000
#define CR_FR_CKG_CTRL      WF_PHY_BASE + 0x0004
#define CR_FR_RST_CTRL      WF_PHY_BASE + 0x0008

#define CR_TXPTN_00         WF_PHY_BASE + 0x01A0
#define CR_TXPTN_01         WF_PHY_BASE + 0x01A4

#define CR_RFINTF_00		WF_PHY_BASE + 0x0200
#define CR_RFINTF_CAL_NSS_MASK (0x3 << 28)
#define CR_RFINTF_CAL_NSS(p) (((p) & 0x3) << 28)

#define CR_RFINTF_02		WF_PHY_BASE + 0x0208
#define CR_RFINTF_03        WF_PHY_BASE + 0x020C

#define RO_AGC_DEBUG_2	    WF_PHY_BASE + 0x05A4

#define CR_RXTD_39			WF_PHY_BASE + 0x06F8
#define CR_FFT_MANU_CTRL    WF_PHY_BASE + 0x0704

#define CR_DPD_CAL_03       WF_PHY_BASE + 0x090C

#define CR_TXFE_3           WF_PHY_BASE + 0x0A08
#define CR_TXFE_4           WF_PHY_BASE + 0x0A0C

#define CR_TSSI_0           WF_PHY_BASE + 0x0D00
#define CR_TSSI_1           WF_PHY_BASE + 0x0D04
#define CR_TSSI_6			WF_PHY_BASE + 0x0D18
#define CR_TSSI_9           WF_PHY_BASE + 0x0D24

#define CR_WF1_RFINTF_02	WF_PHY_BASE + 0x1208

#define CR_TXFE1_3          WF_PHY_BASE + 0x1A08
#define CR_TXFE1_4          WF_PHY_BASE + 0x1A0C

#define CR_WF1_TSSI_0       WF_PHY_BASE + 0x1D00
#define CR_WF1_TSSI_1       WF_PHY_BASE + 0x1D04
#define CR_WF1_TSSI_6		WF_PHY_BASE + 0x1D18
#define CR_WF1_TSSI_9       WF_PHY_BASE + 0x1D24


/* WF_PHY_BACK */
#define CR_BK_RST_CTRL      WF_PHY_BASE + 0x4004

#define CR_PHYCTRL_0        WF_PHY_BASE + 0x4100
#define CR_PHYCTRL_2        WF_PHY_BASE + 0x4108
#define RO_PHYCTRL_STS0     WF_PHY_BASE + 0x410C
#define RO_PHYCTRL_STS1     WF_PHY_BASE + 0x4110
#define RO_PHYCTRL_STS2     WF_PHY_BASE + 0x4114
#define RO_PHYCTRL_STS4     WF_PHY_BASE + 0x411C
#define RO_PHYCTRL_STS5     WF_PHY_BASE + 0x4120

#define CR_PHYCTRL_DBGCTRL  WF_PHY_BASE + 0x4140

#define CR_PHYMUX_3         WF_PHY_BASE + 0x420C
#define CR_PHYMUX_5         WF_PHY_BASE + 0x4214
#define CR_PHYMUX_10        WF_PHY_BASE + 0x4228
#define CR_PHYMUX_11        WF_PHY_BASE + 0x422C

#define CR_TXFD_0           WF_PHY_BASE + 0x4700
#define CR_TXFD_1           WF_PHY_BASE + 0x4704
#define CR_TXFD_3           WF_PHY_BASE + 0x470C

#define CR_PHYMUX_WF1_3     WF_PHY_BASE + 0x520C
#define CR_PHYMUX_WF1_5     WF_PHY_BASE + 0x5214



#define PHYBACK_CR_PHYMUX_27   (WF_PHY_BASE + 0x426C)
#define PHYBACK_CR_PHYMUX_27_MSK (0xf << 4)
#define SET_CR_PHYMUX_RXV_SEL_G2(mode) (((mode) & 0xf) << 4)

#endif /* __WF_PHY_H__ */
