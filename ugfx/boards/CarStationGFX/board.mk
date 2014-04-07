GFXINC  += $(GFXLIB)/boards/CarStationGFX
GFXSRC  +=
GFXDEFS += -DGFX_USE_OS_CHIBIOS=TRUE
include $(GFXLIB)/drivers/gdisp/SSD1306/gdisp_lld.mk

