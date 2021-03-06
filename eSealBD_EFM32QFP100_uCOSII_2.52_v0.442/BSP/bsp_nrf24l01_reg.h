/***************************************************************************************************
*                                              MODULE                                              *
***************************************************************************************************/
#ifndef BSP_NRF24L01_REG_H
#define BSP_NRF24L01_REG_H

#ifdef __cplusplus
extern "C" {
#endif
 
    
/***************************************************************************************************
*                                             DEFINES                                              *
***************************************************************************************************/
/*NRF24L01 Command Word Definitions*/ 
#define R_REGISTER		                    0x00
#define W_REGISTER		                    0x20
#define R_RX_PAYLOAD	                            0x61
#define W_TX_PAYLOAD	                            0xA0
#define FLUSH_TX		                    0xE1
#define FLUSH_RX		                    0xE2
#define REUSE_TX_PL	                            0xE3
#define ACTIVATE		                    0x50
#define R_RX_PL_WID		                    0x60
#define W_ACK_PAYLOAD		                    0xA8
#define W_TX_PAYLOAD_NOACK	                    0xB0
#define NOP			                    0xFF

/*NRF24L01 Register Address Definitions*/ 
#define CONFIG			                    0x00
#define EN_AA			                    0x01
#define EN_RXADDR		                    0x02  
#define SETUP_AW		                    0x03
#define SETUP_RETR		                    0x04
#define RF_CH			                    0x05
#define RF_SETUP		                    0x06
#define STATUS			                    0x07
#define OBSERVE_TX		                    0x08
#define CD	                                    0x09
#define RX_ADDR_P0		                    0x0A
#define RX_ADDR_P1		                    0x0B
#define RX_ADDR_P2		                    0x0C
#define RX_ADDR_P3		                    0x0D
#define RX_ADDR_P4		                    0x0E
#define RX_ADDR_P5		                    0x0F
#define TX_ADDR			                    0x10
#define RX_PW_P0		                    0x11
#define RX_PW_P1		                    0x12
#define RX_PW_P2		                    0x13
#define RX_PW_P3		                    0x14
#define RX_PW_P4		                    0x15
#define RX_PW_P5		                    0x16
#define FIFO_STATUS	                            0x17
#define FEATURE	                                    0x1D

/*NRF24L01 CONFIG Register Bit Definitions*/
#define MASK_RX_DR	                            0x40
#define MASK_TX_DS	                            0x20
#define MASK_MAX_RT	                            0x10
#define EN_CRC		                            0x08
#define CRCO		                            0x04
#define PWR_UP		                            0x02
#define PRIM_RX		                            0x01

/*NRF24L01 EN_AA Register Bit Definitions*/
#define ENAA_P5	        	                    0x20
#define ENAA_P4	        	                    0x10
#define ENAA_P3		                            0x08
#define ENAA_P2		                            0x04
#define ENAA_P1		                            0x02
#define ENAA_P0		                            0x01
#define DISAA		                            0x00

/*NRF24L01 EN_RXADDR Register Bit Definitions*/
#define ERX_P5	        	                    0x20
#define ERX_P4	        	                    0x10
#define ERX_P3		                            0x08
#define ERX_P2		                            0x04
#define ERX_P1		                            0x02
#define ERX_P0		                            0x01

/*NRF24L01 SETUP_AW Register Bit Definitions*/
#define AW_5_BYTE	                            0x03
#define AW_4_BYTE	                            0x02
#define AW_3_BYTE	                            0x01
#define ILLEGAL	                                    0x00

/*NRF24L01 SETUP_RETR Register Bit Definitions*/
#define ARD_250US	                            0x00
#define ARD_N		                            0x01    /* Usage:ARD_N*n is delay 250us*n+250us  n[1,15]   
                                                            Example:ARD_N*6 is delay 250us*6+250us=1750us */
#define ARC_N		                            0x01    /* Usage:ARC_N*n is retransmit n times   n[1,15]	  
                                                            Example:ARC_N*6 is retransmit 6 times      */

/*NRF24L01 RF_CH Register Bit Definitions*/
#define RF_CH_N			                    0x02    /* Usage:RF_CH_N+n is channel n        n[0,125]
                                                            Example:RF_CH_N+6 is channel 6             */

/*NRF24L01 RF_SETUP Register Bit Definitions*/
#define PLL_LOCK	                            0x10
#define RF_DR_1Mbps		                    0x00
#define RF_DR_2Mbps	                            0x08
#define RF_PWR_18dBm		                    0x00
#define RF_PWR_12dBm		                    0x02
#define RF_PWR_6dBm		                    0x04
#define RF_PWR_0dBm		                    0x06
#define LNA_HCURR		                    0x01

/*NRF24L01 STATUS Register Bit Definitions*/
#define RX_DR		                            0x40
#define TX_DS		                            0x20
#define MAX_RT		                            0x10

/*NRF24L01 DYNPD Register Bit Definitions*/
#define DPL_P5	        	                    0x20
#define DPL_P4	        	                    0x10
#define DPL_P3		                            0x08
#define DPL_P2		                            0x04
#define DPL_P1		                            0x02
#define DPL_P0		                            0x01

/*NRF24L01 FEATURE Register Bit Definitions*/
#define EN_DPL		                            0x04
#define EN_ACK_PAY		                    0x02
#define EN_DYN_ACK		                    0x01
    

/***************************************************************************************************
*                                           MODULE END                                             *
***************************************************************************************************/
#ifdef __cplusplus
}
#endif

#endif






















