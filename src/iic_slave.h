
//#define XPAR_AXI_GPIO_I2C_MC_DEVICE_ID 2
//#define XPAR_AXI_BRAM_CTRL_I2C_S_AXI_BASEADDR 0x84000000

#define GPIO_I2C_RESET_ADDR		XPAR_AXI_GPIO_I2C_MC_BASEADDR
#define BUFFER_SIZE	32

#ifndef u8
#define u8 unsigned char
#endif

typedef unsigned int u32;

extern void GpioReset();
extern void xil_setreg32(unsigned int addrBase,unsigned int addrOffset,unsigned int value);
extern int xil_getreg32(unsigned int addrBase,unsigned int addrOffset);
extern void GpioReset();
extern void iic_write();
