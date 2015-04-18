/* 
 * File:   bsp.h
 * Author: nenad
 *
 * Created on April 14, 2015, 11:10 PM
 */

#ifndef BSP_H
#define	BSP_H

#ifdef	__cplusplus
extern "C" {
#endif

/*
 * LMR62421 Switch Power Supply
 */
#define LMR_SHDN_PORT                   PORTD
#define LMR_SHDN_TRIS                   TRISD
#define LMR_SHDN_PIN                    5

/*
 * LT3083 Linear Power Supply
 */
#define LT_OUT_OFF_PORT                 PORTD
#define LT_OUT_OFF_TRIS                 TRISD
#define LT_OUT_OFF_PIN                  6

/*
 * AD5282 Digital potentiometer
 */
#define AD_SHDN_PORT                    PORTB
#define AD_SHDN_TRIS                    TRISB
#define AD_SHDN_PIN                     3

/*
 * MCP73871 status pins
 */
#define MCP_STAT1_PORT                  PORTB
#define MCP_STAT1_TRIS                  TRISB
#define MCP_STAT1_PIN                   14
#define MCP_STAT2_PORT                  PORTB
#define MCP_STAT2_TRIS                  TRISB
#define MCP_STAT2_PIN                   15
#define MCP_PG_PORT                     PORTB
#define MCP_PG_TRIS                     TRISB
#define MCP_PG_PIN                      2


#ifdef	__cplusplus
}
#endif

#endif	/* BSP_H */
