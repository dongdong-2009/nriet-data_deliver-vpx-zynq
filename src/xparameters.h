/* Definition for CPU ID */
#define XPAR_CPU_ID 0

/* Definitions for peripheral PS7_CORTEXA9_0 */
#define XPAR_PS7_CORTEXA9_0_CPU_CLK_FREQ_HZ 675000000


/******************************************************************/

/* Canonical definitions for peripheral PS7_CORTEXA9_0 */
#define XPAR_CPU_CORTEXA9_0_CPU_CLK_FREQ_HZ 675000000


/******************************************************************/


/* Definitions for interface M_AXI */
#define XPAR_M_AXI_BASEADDR 0x40000000
#define XPAR_M_AXI_HIGHADDR 0x7FFFFFFF

#include "xparameters_ps.h"

#define STDIN_BASEADDRESS 0xE0000000
#define STDOUT_BASEADDRESS 0xE0000000

/******************************************************************/

/* Definitions for driver BRAM */
#define XPAR_XBRAM_NUM_INSTANCES 1

/* Definitions for peripheral AXI_BRAM_CTRL_I2C */
#define XPAR_AXI_BRAM_CTRL_I2C_DEVICE_ID 0
#define XPAR_AXI_BRAM_CTRL_I2C_DATA_WIDTH 32
#define XPAR_AXI_BRAM_CTRL_I2C_ECC 0
#define XPAR_AXI_BRAM_CTRL_I2C_FAULT_INJECT 0
#define XPAR_AXI_BRAM_CTRL_I2C_CE_FAILING_REGISTERS 0
#define XPAR_AXI_BRAM_CTRL_I2C_UE_FAILING_REGISTERS 0
#define XPAR_AXI_BRAM_CTRL_I2C_ECC_STATUS_REGISTERS 0
#define XPAR_AXI_BRAM_CTRL_I2C_CE_COUNTER_WIDTH 0
#define XPAR_AXI_BRAM_CTRL_I2C_ECC_ONOFF_REGISTER 0
#define XPAR_AXI_BRAM_CTRL_I2C_ECC_ONOFF_RESET_VALUE 0
#define XPAR_AXI_BRAM_CTRL_I2C_WRITE_ACCESS 0
#define XPAR_AXI_BRAM_CTRL_I2C_S_AXI_BASEADDR 0x84000000
#define XPAR_AXI_BRAM_CTRL_I2C_S_AXI_HIGHADDR 0x84001FFF
#define XPAR_AXI_BRAM_CTRL_I2C_S_AXI_CTRL_BASEADDR 0xFFFFFFFF 
#define XPAR_AXI_BRAM_CTRL_I2C_S_AXI_CTRL_HIGHADDR 0xFFFFFFFF 


/******************************************************************/

/* Canonical definitions for peripheral AXI_BRAM_CTRL_I2C */
#define XPAR_BRAM_0_DEVICE_ID XPAR_AXI_BRAM_CTRL_I2C_DEVICE_ID
#define XPAR_BRAM_0_DATA_WIDTH 32
#define XPAR_BRAM_0_ECC 0
#define XPAR_BRAM_0_FAULT_INJECT 0
#define XPAR_BRAM_0_CE_FAILING_REGISTERS 0
#define XPAR_BRAM_0_UE_FAILING_REGISTERS 0
#define XPAR_BRAM_0_ECC_STATUS_REGISTERS 0
#define XPAR_BRAM_0_CE_COUNTER_WIDTH 0
#define XPAR_BRAM_0_ECC_ONOFF_REGISTER 0
#define XPAR_BRAM_0_ECC_ONOFF_RESET_VALUE 0
#define XPAR_BRAM_0_WRITE_ACCESS 0
#define XPAR_BRAM_0_BASEADDR 0x84000000
#define XPAR_BRAM_0_HIGHADDR 0x84001FFF


/******************************************************************/


/* Definitions for peripheral PS7_DDR_0 */
#define XPAR_PS7_DDR_0_S_AXI_BASEADDR 0x00100000
#define XPAR_PS7_DDR_0_S_AXI_HIGHADDR 0x3FFFFFFF


/******************************************************************/

/* Definitions for driver DEVCFG */
#define XPAR_XDCFG_NUM_INSTANCES 1

/* Definitions for peripheral PS7_DEV_CFG_0 */
#define XPAR_PS7_DEV_CFG_0_DEVICE_ID 0
#define XPAR_PS7_DEV_CFG_0_BASEADDR 0xF8007000
#define XPAR_PS7_DEV_CFG_0_HIGHADDR 0xF80070FF


/******************************************************************/

/* Canonical definitions for peripheral PS7_DEV_CFG_0 */
#define XPAR_XDCFG_0_DEVICE_ID XPAR_PS7_DEV_CFG_0_DEVICE_ID
#define XPAR_XDCFG_0_BASEADDR 0xF8007000
#define XPAR_XDCFG_0_HIGHADDR 0xF80070FF


/******************************************************************/

/* Definitions for driver DMAPS */
#define XPAR_XDMAPS_NUM_INSTANCES 2

/* Definitions for peripheral PS7_DMA_NS */
#define XPAR_PS7_DMA_NS_DEVICE_ID 0
#define XPAR_PS7_DMA_NS_BASEADDR 0xF8004000
#define XPAR_PS7_DMA_NS_HIGHADDR 0xF8004FFF


/* Definitions for peripheral PS7_DMA_S */
#define XPAR_PS7_DMA_S_DEVICE_ID 1
#define XPAR_PS7_DMA_S_BASEADDR 0xF8003000
#define XPAR_PS7_DMA_S_HIGHADDR 0xF8003FFF


/******************************************************************/

/* Canonical definitions for peripheral PS7_DMA_NS */
#define XPAR_XDMAPS_0_DEVICE_ID XPAR_PS7_DMA_NS_DEVICE_ID
#define XPAR_XDMAPS_0_BASEADDR 0xF8004000
#define XPAR_XDMAPS_0_HIGHADDR 0xF8004FFF

/* Canonical definitions for peripheral PS7_DMA_S */
#define XPAR_XDMAPS_1_DEVICE_ID XPAR_PS7_DMA_S_DEVICE_ID
#define XPAR_XDMAPS_1_BASEADDR 0xF8003000
#define XPAR_XDMAPS_1_HIGHADDR 0xF8003FFF


/******************************************************************/

/* Definitions for driver EMACPS */
#define XPAR_XEMACPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_ETHERNET_0 */
#define XPAR_PS7_ETHERNET_0_DEVICE_ID 0
#define XPAR_PS7_ETHERNET_0_BASEADDR 0xE000B000
#define XPAR_PS7_ETHERNET_0_HIGHADDR 0xE000BFFF
#define XPAR_PS7_ETHERNET_0_ENET_CLK_FREQ_HZ 125000000
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_1000MBPS_DIV0 8
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_1000MBPS_DIV1 1
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_100MBPS_DIV0 8
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_100MBPS_DIV1 5
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_10MBPS_DIV0 8
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_10MBPS_DIV1 50


/******************************************************************/

/* Canonical definitions for peripheral PS7_ETHERNET_0 */
#define XPAR_XEMACPS_0_DEVICE_ID XPAR_PS7_ETHERNET_0_DEVICE_ID
#define XPAR_XEMACPS_0_BASEADDR 0xE000B000
#define XPAR_XEMACPS_0_HIGHADDR 0xE000BFFF
#define XPAR_XEMACPS_0_ENET_CLK_FREQ_HZ 125000000
#define XPAR_XEMACPS_0_ENET_SLCR_1000Mbps_DIV0 8
#define XPAR_XEMACPS_0_ENET_SLCR_1000Mbps_DIV1 1
#define XPAR_XEMACPS_0_ENET_SLCR_100Mbps_DIV0 8
#define XPAR_XEMACPS_0_ENET_SLCR_100Mbps_DIV1 5
#define XPAR_XEMACPS_0_ENET_SLCR_10Mbps_DIV0 8
#define XPAR_XEMACPS_0_ENET_SLCR_10Mbps_DIV1 50


/******************************************************************/


/* Definitions for peripheral AXI_EMC_0 */
#define XPAR_AXI_EMC_0_NUM_BANKS_MEM 1


/******************************************************************/

/* Definitions for peripheral AXI_EMC_0 */
#define XPAR_AXI_EMC_0_S_AXI_MEM0_BASEADDR 0x88000000

/******************************************************************/

/* Canonical definitions for peripheral AXI_EMC_0 */
#define XPAR_EMC_0_NUM_BANKS_MEM 1
#define XPAR_EMC_0_S_AXI_MEM0_BASEADDR 0x88000000
#define XPAR_EMC_0_S_AXI_MEM0_HIGHADDR 0x8FFFFFFF

#define XPAR_AXI_EMC

/******************************************************************/


/* Definitions for peripheral PS7_AFI_0 */
#define XPAR_PS7_AFI_0_S_AXI_BASEADDR 0xF8008000
#define XPAR_PS7_AFI_0_S_AXI_HIGHADDR 0xF8008FFF


/* Definitions for peripheral PS7_AFI_1 */
#define XPAR_PS7_AFI_1_S_AXI_BASEADDR 0xF8009000
#define XPAR_PS7_AFI_1_S_AXI_HIGHADDR 0xF8009FFF


/* Definitions for peripheral PS7_AFI_2 */
#define XPAR_PS7_AFI_2_S_AXI_BASEADDR 0xF800A000
#define XPAR_PS7_AFI_2_S_AXI_HIGHADDR 0xF800AFFF


/* Definitions for peripheral PS7_AFI_3 */
#define XPAR_PS7_AFI_3_S_AXI_BASEADDR 0xF800B000
#define XPAR_PS7_AFI_3_S_AXI_HIGHADDR 0xF800BFFF


/* Definitions for peripheral PS7_DDRC_0 */
#define XPAR_PS7_DDRC_0_S_AXI_BASEADDR 0xF8006000
#define XPAR_PS7_DDRC_0_S_AXI_HIGHADDR 0xF8006FFF


/* Definitions for peripheral PS7_GLOBALTIMER_0 */
#define XPAR_PS7_GLOBALTIMER_0_S_AXI_BASEADDR 0xF8F00200
#define XPAR_PS7_GLOBALTIMER_0_S_AXI_HIGHADDR 0xF8F002FF


/* Definitions for peripheral PS7_GPV_0 */
#define XPAR_PS7_GPV_0_S_AXI_BASEADDR 0xF8900000
#define XPAR_PS7_GPV_0_S_AXI_HIGHADDR 0xF89FFFFF


/* Definitions for peripheral PS7_INTC_DIST_0 */
#define XPAR_PS7_INTC_DIST_0_S_AXI_BASEADDR 0xF8F01000
#define XPAR_PS7_INTC_DIST_0_S_AXI_HIGHADDR 0xF8F01FFF


/* Definitions for peripheral PS7_IOP_BUS_CONFIG_0 */
#define XPAR_PS7_IOP_BUS_CONFIG_0_S_AXI_BASEADDR 0xE0200000
#define XPAR_PS7_IOP_BUS_CONFIG_0_S_AXI_HIGHADDR 0xE0200FFF


/* Definitions for peripheral PS7_L2CACHEC_0 */
#define XPAR_PS7_L2CACHEC_0_S_AXI_BASEADDR 0xF8F02000
#define XPAR_PS7_L2CACHEC_0_S_AXI_HIGHADDR 0xF8F02FFF


/* Definitions for peripheral PS7_OCMC_0 */
#define XPAR_PS7_OCMC_0_S_AXI_BASEADDR 0xF800C000
#define XPAR_PS7_OCMC_0_S_AXI_HIGHADDR 0xF800CFFF


/* Definitions for peripheral PS7_PL310_0 */
#define XPAR_PS7_PL310_0_S_AXI_BASEADDR 0xF8F02000
#define XPAR_PS7_PL310_0_S_AXI_HIGHADDR 0xF8F02FFF


/* Definitions for peripheral PS7_PMU_0 */
#define XPAR_PS7_PMU_0_S_AXI_BASEADDR 0xF8891000
#define XPAR_PS7_PMU_0_S_AXI_HIGHADDR 0xF8891FFF
#define XPAR_PS7_PMU_0_PMU1_S_AXI_BASEADDR 0xF8893000
#define XPAR_PS7_PMU_0_PMU1_S_AXI_HIGHADDR 0xF8893FFF


/* Definitions for peripheral PS7_QSPI_LINEAR_0 */
#define XPAR_PS7_QSPI_LINEAR_0_S_AXI_BASEADDR 0xFC000000
#define XPAR_PS7_QSPI_LINEAR_0_S_AXI_HIGHADDR 0xFCFFFFFF


/* Definitions for peripheral PS7_RAM_0 */
#define XPAR_PS7_RAM_0_S_AXI_BASEADDR 0x00000000
#define XPAR_PS7_RAM_0_S_AXI_HIGHADDR 0x0003FFFF


/* Definitions for peripheral PS7_RAM_1 */
#define XPAR_PS7_RAM_1_S_AXI_BASEADDR 0xFFFC0000
#define XPAR_PS7_RAM_1_S_AXI_HIGHADDR 0xFFFFFFFF


/* Definitions for peripheral PS7_SCUC_0 */
#define XPAR_PS7_SCUC_0_S_AXI_BASEADDR 0xF8F00000
#define XPAR_PS7_SCUC_0_S_AXI_HIGHADDR 0xF8F000FC


/* Definitions for peripheral PS7_SLCR_0 */
#define XPAR_PS7_SLCR_0_S_AXI_BASEADDR 0xF8000000
#define XPAR_PS7_SLCR_0_S_AXI_HIGHADDR 0xF8000FFF


/******************************************************************/

/* Definitions for driver GPIO */
#define XPAR_XGPIO_NUM_INSTANCES 7

/* Definitions for peripheral V7_CFG_DONE */
#define XPAR_V7_CFG_DONE_BASEADDR 0x83C50000
#define XPAR_V7_CFG_DONE_HIGHADDR 0x83C5FFFF
#define XPAR_V7_CFG_DONE_DEVICE_ID 0
#define XPAR_V7_CFG_DONE_INTERRUPT_PRESENT 0
#define XPAR_V7_CFG_DONE_IS_DUAL 0


/* Definitions for peripheral V7_CFG_EN */
#define XPAR_V7_CFG_EN_BASEADDR 0x83C40000
#define XPAR_V7_CFG_EN_HIGHADDR 0x83C4FFFF
#define XPAR_V7_CFG_EN_DEVICE_ID 1
#define XPAR_V7_CFG_EN_INTERRUPT_PRESENT 0
#define XPAR_V7_CFG_EN_IS_DUAL 0


/* Definitions for peripheral V7_SYS_RST */
#define XPAR_V7_SYS_RST_BASEADDR 0x83C70000
#define XPAR_V7_SYS_RST_HIGHADDR 0x83C7FFFF
#define XPAR_V7_SYS_RST_DEVICE_ID 2
#define XPAR_V7_SYS_RST_INTERRUPT_PRESENT 0
#define XPAR_V7_SYS_RST_IS_DUAL 0


/* Definitions for peripheral Z7_V7_GPIO */
#define XPAR_Z7_V7_GPIO_BASEADDR 0x83C60000
#define XPAR_Z7_V7_GPIO_HIGHADDR 0x83C6FFFF
#define XPAR_Z7_V7_GPIO_DEVICE_ID 3
#define XPAR_Z7_V7_GPIO_INTERRUPT_PRESENT 0
#define XPAR_Z7_V7_GPIO_IS_DUAL 0


/* Definitions for peripheral AXI_GPIO_0 */
#define XPAR_AXI_GPIO_0_BASEADDR 0x82000000
#define XPAR_AXI_GPIO_0_HIGHADDR 0x8200FFFF
#define XPAR_AXI_GPIO_0_DEVICE_ID 4
#define XPAR_AXI_GPIO_0_INTERRUPT_PRESENT 0
#define XPAR_AXI_GPIO_0_IS_DUAL 0


/* Definitions for peripheral AXI_GPIO_1 */
#define XPAR_AXI_GPIO_1_BASEADDR 0x82010000
#define XPAR_AXI_GPIO_1_HIGHADDR 0x8201FFFF
#define XPAR_AXI_GPIO_1_DEVICE_ID 5
#define XPAR_AXI_GPIO_1_INTERRUPT_PRESENT 0
#define XPAR_AXI_GPIO_1_IS_DUAL 0


/* Definitions for peripheral AXI_GPIO_I2C_MC */
#define XPAR_AXI_GPIO_I2C_MC_BASEADDR 0x82200000
#define XPAR_AXI_GPIO_I2C_MC_HIGHADDR 0x8220FFFF
#define XPAR_AXI_GPIO_I2C_MC_DEVICE_ID 6
#define XPAR_AXI_GPIO_I2C_MC_INTERRUPT_PRESENT 0
#define XPAR_AXI_GPIO_I2C_MC_IS_DUAL 0


/******************************************************************/

/* Canonical definitions for peripheral V7_CFG_DONE */
#define XPAR_GPIO_0_BASEADDR 0x83C50000
#define XPAR_GPIO_0_HIGHADDR 0x83C5FFFF
#define XPAR_GPIO_0_DEVICE_ID XPAR_V7_CFG_DONE_DEVICE_ID
#define XPAR_GPIO_0_INTERRUPT_PRESENT 0
#define XPAR_GPIO_0_IS_DUAL 0

/* Canonical definitions for peripheral V7_CFG_EN */
#define XPAR_GPIO_1_BASEADDR 0x83C40000
#define XPAR_GPIO_1_HIGHADDR 0x83C4FFFF
#define XPAR_GPIO_1_DEVICE_ID XPAR_V7_CFG_EN_DEVICE_ID
#define XPAR_GPIO_1_INTERRUPT_PRESENT 0
#define XPAR_GPIO_1_IS_DUAL 0

/* Canonical definitions for peripheral V7_SYS_RST */
#define XPAR_GPIO_2_BASEADDR 0x83C70000
#define XPAR_GPIO_2_HIGHADDR 0x83C7FFFF
#define XPAR_GPIO_2_DEVICE_ID XPAR_V7_SYS_RST_DEVICE_ID
#define XPAR_GPIO_2_INTERRUPT_PRESENT 0
#define XPAR_GPIO_2_IS_DUAL 0

/* Canonical definitions for peripheral Z7_V7_GPIO */
#define XPAR_GPIO_3_BASEADDR 0x83C60000
#define XPAR_GPIO_3_HIGHADDR 0x83C6FFFF
#define XPAR_GPIO_3_DEVICE_ID XPAR_Z7_V7_GPIO_DEVICE_ID
#define XPAR_GPIO_3_INTERRUPT_PRESENT 0
#define XPAR_GPIO_3_IS_DUAL 0

/* Canonical definitions for peripheral AXI_GPIO_0 */
#define XPAR_GPIO_4_BASEADDR 0x82000000
#define XPAR_GPIO_4_HIGHADDR 0x8200FFFF
#define XPAR_GPIO_4_DEVICE_ID XPAR_AXI_GPIO_0_DEVICE_ID
#define XPAR_GPIO_4_INTERRUPT_PRESENT 0
#define XPAR_GPIO_4_IS_DUAL 0

/* Canonical definitions for peripheral AXI_GPIO_1 */
#define XPAR_GPIO_5_BASEADDR 0x82010000
#define XPAR_GPIO_5_HIGHADDR 0x8201FFFF
#define XPAR_GPIO_5_DEVICE_ID XPAR_AXI_GPIO_1_DEVICE_ID
#define XPAR_GPIO_5_INTERRUPT_PRESENT 0
#define XPAR_GPIO_5_IS_DUAL 0

/* Canonical definitions for peripheral AXI_GPIO_I2C_MC */
#define XPAR_GPIO_6_BASEADDR 0x82200000
#define XPAR_GPIO_6_HIGHADDR 0x8220FFFF
#define XPAR_GPIO_6_DEVICE_ID XPAR_AXI_GPIO_I2C_MC_DEVICE_ID
#define XPAR_GPIO_6_INTERRUPT_PRESENT 0
#define XPAR_GPIO_6_IS_DUAL 0


/******************************************************************/

/* Definitions for driver IICPS */
#define XPAR_XIICPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_I2C_0 */
#define XPAR_PS7_I2C_0_DEVICE_ID 0
#define XPAR_PS7_I2C_0_BASEADDR 0xE0004000
#define XPAR_PS7_I2C_0_HIGHADDR 0xE0004FFF
#define XPAR_PS7_I2C_0_I2C_CLK_FREQ_HZ 112500000


/******************************************************************/

/* Canonical definitions for peripheral PS7_I2C_0 */
#define XPAR_XIICPS_0_DEVICE_ID XPAR_PS7_I2C_0_DEVICE_ID
#define XPAR_XIICPS_0_BASEADDR 0xE0004000
#define XPAR_XIICPS_0_HIGHADDR 0xE0004FFF
#define XPAR_XIICPS_0_I2C_CLK_FREQ_HZ 112500000


/******************************************************************/

/* Definitions for driver LLFIFO */
#define XPAR_XLLFIFO_NUM_INSTANCES 1

/* Definitions for peripheral V7_CFG_FIFO */
#define XPAR_V7_CFG_FIFO_DEVICE_ID 0
#define XPAR_V7_CFG_FIFO_BASEADDR 0x83C30000
#define XPAR_V7_CFG_FIFO_HIGHADDR 0x83C3FFFF
#define XPAR_V7_CFG_FIFO_AXI4_BASEADDR 0x80001000
#define XPAR_V7_CFG_FIFO_AXI4_HIGHADDR 0x80002FFF
#define XPAR_V7_CFG_FIFO_DATA_INTERFACE_TYPE 0


/******************************************************************/

/* Canonical definitions for peripheral V7_CFG_FIFO */
#define XPAR_AXI_FIFO_0_DEVICE_ID XPAR_V7_CFG_FIFO_DEVICE_ID
#define XPAR_AXI_FIFO_0_BASEADDR 0x83C30000
#define XPAR_AXI_FIFO_0_HIGHADDR 0x83C3FFFF
#define XPAR_AXI_FIFO_0_AXI4_BASEADDR 0x80001000
#define XPAR_AXI_FIFO_0_AXI4_HIGHADDR 0x80002FFF
#define XPAR_AXI_FIFO_0_DATA_INTERFACE_TYPE 0


/******************************************************************/

/* Definitions for driver QSPIPS */
#define XPAR_XQSPIPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_QSPI_0 */
#define XPAR_PS7_QSPI_0_DEVICE_ID 0
#define XPAR_PS7_QSPI_0_BASEADDR 0xE000D000
#define XPAR_PS7_QSPI_0_HIGHADDR 0xE000DFFF
#define XPAR_PS7_QSPI_0_QSPI_CLK_FREQ_HZ 200000000
#define XPAR_PS7_QSPI_0_QSPI_MODE 0


/******************************************************************/

/* Canonical definitions for peripheral PS7_QSPI_0 */
#define XPAR_XQSPIPS_0_DEVICE_ID XPAR_PS7_QSPI_0_DEVICE_ID
#define XPAR_XQSPIPS_0_BASEADDR 0xE000D000
#define XPAR_XQSPIPS_0_HIGHADDR 0xE000DFFF
#define XPAR_XQSPIPS_0_QSPI_CLK_FREQ_HZ 200000000
#define XPAR_XQSPIPS_0_QSPI_MODE 0


/******************************************************************/

/* Definitions for driver RIOUARTCTL */
#define XPAR_RIOUARTCTL_NUM_INSTANCES 1

/* Definitions for peripheral RIOUARTCTL_0 */
#define XPAR_RIOUARTCTL_0_DEVICE_ID 0
#define XPAR_RIOUARTCTL_0_S00_AXI_BASEADDR 0x83C10000
#define XPAR_RIOUARTCTL_0_S00_AXI_HIGHADDR 0x83C1FFFF


/******************************************************************/

/* Definitions for driver SCUGIC */
#define XPAR_XSCUGIC_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SCUGIC_0 */
#define XPAR_PS7_SCUGIC_0_DEVICE_ID 0
#define XPAR_PS7_SCUGIC_0_BASEADDR 0xF8F00100
#define XPAR_PS7_SCUGIC_0_HIGHADDR 0xF8F001FF
#define XPAR_PS7_SCUGIC_0_DIST_BASEADDR 0xF8F01000


/******************************************************************/

/* Canonical definitions for peripheral PS7_SCUGIC_0 */
#define XPAR_SCUGIC_0_DEVICE_ID 0
#define XPAR_SCUGIC_0_CPU_BASEADDR 0xF8F00100
#define XPAR_SCUGIC_0_CPU_HIGHADDR 0xF8F001FF
#define XPAR_SCUGIC_0_DIST_BASEADDR 0xF8F01000


/******************************************************************/

/* Definitions for driver SCUTIMER */
#define XPAR_XSCUTIMER_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SCUTIMER_0 */
#define XPAR_PS7_SCUTIMER_0_DEVICE_ID 0
#define XPAR_PS7_SCUTIMER_0_BASEADDR 0xF8F00600
#define XPAR_PS7_SCUTIMER_0_HIGHADDR 0xF8F0061F


/******************************************************************/

/* Canonical definitions for peripheral PS7_SCUTIMER_0 */
#define XPAR_XSCUTIMER_0_DEVICE_ID XPAR_PS7_SCUTIMER_0_DEVICE_ID
#define XPAR_XSCUTIMER_0_BASEADDR 0xF8F00600
#define XPAR_XSCUTIMER_0_HIGHADDR 0xF8F0061F


/******************************************************************/

/* Definitions for driver SCUWDT */
#define XPAR_XSCUWDT_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SCUWDT_0 */
#define XPAR_PS7_SCUWDT_0_DEVICE_ID 0
#define XPAR_PS7_SCUWDT_0_BASEADDR 0xF8F00620
#define XPAR_PS7_SCUWDT_0_HIGHADDR 0xF8F006FF


/******************************************************************/

/* Canonical definitions for peripheral PS7_SCUWDT_0 */
#define XPAR_SCUWDT_0_DEVICE_ID XPAR_PS7_SCUWDT_0_DEVICE_ID
#define XPAR_SCUWDT_0_BASEADDR 0xF8F00620
#define XPAR_SCUWDT_0_HIGHADDR 0xF8F006FF


/******************************************************************/

/* Definitions for driver SPIPS */
#define XPAR_XSPIPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SPI_0 */
#define XPAR_PS7_SPI_0_DEVICE_ID 0
#define XPAR_PS7_SPI_0_BASEADDR 0xE0006000
#define XPAR_PS7_SPI_0_HIGHADDR 0xE0006FFF
#define XPAR_PS7_SPI_0_SPI_CLK_FREQ_HZ 166666672


/******************************************************************/

/* Canonical definitions for peripheral PS7_SPI_0 */
#define XPAR_XSPIPS_0_DEVICE_ID XPAR_PS7_SPI_0_DEVICE_ID
#define XPAR_XSPIPS_0_BASEADDR 0xE0006000
#define XPAR_XSPIPS_0_HIGHADDR 0xE0006FFF
#define XPAR_XSPIPS_0_SPI_CLK_FREQ_HZ 166666672


/******************************************************************/

/* Definitions for driver SRIO_AXI_CONFIG */
#define XPAR_SRIO_AXI_CONFIG_NUM_INSTANCES 1

/* Definitions for peripheral SRIO_AXI_CONFIG_0 */
#define XPAR_SRIO_AXI_CONFIG_0_DEVICE_ID 0
#define XPAR_SRIO_AXI_CONFIG_0_S00_AXI_BASEADDR 0x83C20000
#define XPAR_SRIO_AXI_CONFIG_0_S00_AXI_HIGHADDR 0x83C2FFFF


/******************************************************************/

/* Definitions for driver SYSMON */
#define XPAR_XSYSMON_NUM_INSTANCES 1

/* Definitions for peripheral XADC_WIZ_0 */
#define XPAR_XADC_WIZ_0_IP_TYPE 0
#define XPAR_XADC_WIZ_0_DEVICE_ID 0
#define XPAR_XADC_WIZ_0_BASEADDR 0x83C00000
#define XPAR_XADC_WIZ_0_HIGHADDR 0x83C0FFFF
#define XPAR_XADC_WIZ_0_INCLUDE_INTR 1


/******************************************************************/

/* Canonical definitions for peripheral XADC_WIZ_0 */
#define XPAR_SYSMON_0_IP_TYPE 0
#define XPAR_SYSMON_0_DEVICE_ID XPAR_XADC_WIZ_0_DEVICE_ID
#define XPAR_SYSMON_0_BASEADDR 0x83C00000
#define XPAR_SYSMON_0_HIGHADDR 0x83C0FFFF
#define XPAR_SYSMON_0_INCLUDE_INTR 1


/******************************************************************/

/* Definitions for driver UARTLITE */
#define XPAR_XUARTLITE_NUM_INSTANCES 1

/* Definitions for peripheral AXI_UARTLITE_0 */
#define XPAR_AXI_UARTLITE_0_BASEADDR 0x82C00000
#define XPAR_AXI_UARTLITE_0_HIGHADDR 0x82C0FFFF
#define XPAR_AXI_UARTLITE_0_DEVICE_ID 0
#define XPAR_AXI_UARTLITE_0_BAUDRATE 9600
#define XPAR_AXI_UARTLITE_0_USE_PARITY 0
#define XPAR_AXI_UARTLITE_0_ODD_PARITY 0
#define XPAR_AXI_UARTLITE_0_DATA_BITS 8


/******************************************************************/

/* Canonical definitions for peripheral AXI_UARTLITE_0 */
#define XPAR_UARTLITE_0_DEVICE_ID XPAR_AXI_UARTLITE_0_DEVICE_ID
#define XPAR_UARTLITE_0_BASEADDR 0x82C00000
#define XPAR_UARTLITE_0_HIGHADDR 0x82C0FFFF
#define XPAR_UARTLITE_0_BAUDRATE 9600
#define XPAR_UARTLITE_0_USE_PARITY 0
#define XPAR_UARTLITE_0_ODD_PARITY 0
#define XPAR_UARTLITE_0_DATA_BITS 8


/******************************************************************/

/* Definitions for driver UARTPS */
#define XPAR_XUARTPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_UART_0 */
#define XPAR_PS7_UART_0_DEVICE_ID 0
#define XPAR_PS7_UART_0_BASEADDR 0xE0000000
#define XPAR_PS7_UART_0_HIGHADDR 0xE0000FFF
#define XPAR_PS7_UART_0_UART_CLK_FREQ_HZ 100000000
#define XPAR_PS7_UART_0_HAS_MODEM 0


/******************************************************************/

/* Canonical definitions for peripheral PS7_UART_0 */
#define XPAR_XUARTPS_0_DEVICE_ID XPAR_PS7_UART_0_DEVICE_ID
#define XPAR_XUARTPS_0_BASEADDR 0xE0000000
#define XPAR_XUARTPS_0_HIGHADDR 0xE0000FFF
#define XPAR_XUARTPS_0_UART_CLK_FREQ_HZ 100000000
#define XPAR_XUARTPS_0_HAS_MODEM 0


/******************************************************************/

/* Definitions for driver XADCPS */
#define XPAR_XADCPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_XADC_0 */
#define XPAR_PS7_XADC_0_DEVICE_ID 0
#define XPAR_PS7_XADC_0_BASEADDR 0xF8007100
#define XPAR_PS7_XADC_0_HIGHADDR 0xF8007120


/******************************************************************/

/* Canonical definitions for peripheral PS7_XADC_0 */
#define XPAR_XADCPS_0_DEVICE_ID XPAR_PS7_XADC_0_DEVICE_ID
#define XPAR_XADCPS_0_BASEADDR 0xF8007100
#define XPAR_XADCPS_0_HIGHADDR 0xF8007120


/******************************************************************/

/* Xilinx FAT File System Library (XilFFs) User Settings */
