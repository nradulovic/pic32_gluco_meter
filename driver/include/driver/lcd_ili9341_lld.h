/* 
 * File:   lcd_ili9341_lld.h
 * Author: nenad
 *
 * Created on 29 October 2014, 22:09
 */

#ifndef LCD_ILI9341_LLD_H
#define	LCD_ILI9341_LLD_H

#include <stdint.h>

#ifdef	__cplusplus
extern "C" {
#endif

void ili9341_reset_active(void);
void ili9341_reset_inactive(void);
void ili9341_cmd_active(void);
void ili9341_cmd_inactive(void);
void ili9341_write_cmd(uint16_t cmd);
void ili9341_write_data(uint16_t data);

#ifdef	__cplusplus
}
#endif

#endif	/* LCD_ILI9341_LLD_H */

