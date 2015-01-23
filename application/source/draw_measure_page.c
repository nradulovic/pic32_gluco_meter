/*
 * This file is part of tft
 *
 * Template version: 1.1.16 (24.12.2013)
 *
 * Copyright (C) 2011, 2012 - Nenad Radulovic
 *
 * tft is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * tft is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with eSolid.  If not, see <http://www.gnu.org/licenses/>.
 *
 * web site:    http://blueskynet.dyndns-server.com
 * e-mail  :    blueskyniss@gmail.com
 *//***********************************************************************//**
 * @file
 * @author      Administrator
 * @brief       Short desciption of file
 * @addtogroup  module_impl
 *********************************************************************//** @{ */
                                                                                                  
/*=========================================================  INCLUDE FILES  ==*/

#include "draw_measure_page.h"
#include "drawing.h"
#include "colors.h"
#include "dejavusansbold9.h"
#include "verdanabold14.h"
#include <stdio.h>
/*=========================================================  LOCAL MACRO's  ==*/
/*======================================================  LOCAL DATA TYPES  ==*/
/*=============================================  LOCAL FUNCTION PROTOTYPES  ==*/
/*=======================================================  LOCAL VARIABLES  ==*/
/*======================================================  GLOBAL VARIABLES  ==*/
/*============================================  LOCAL FUNCTION DEFINITIONS  ==*/
/*===================================  GLOBAL PRIVATE FUNCTION DEFINITIONS  ==*/
/*====================================  GLOBAL PUBLIC FUNCTION DEFINITIONS  ==*/
void drawMeasurePage(void) {
	drawFill(COLOR_BLUE);

	drawString(15, 35, COLOR_MAGENTA, &verdanabold14ptFontInfo,   "Meassurement session");
	drawString(140, 60, COLOR_WHITE, &dejaVuSansBold9ptFontInfo, "Ro :     		");
	drawString(120, 80, COLOR_WHITE, &dejaVuSansBold9ptFontInfo, "Rmax : 		");
	drawString(125, 100, COLOR_WHITE, &dejaVuSansBold9ptFontInfo,"Rmin :		");
	drawString(15, 120, COLOR_WHITE, &dejaVuSansBold9ptFontInfo,"Response Rmax/Rmin : 		");

	drawString(15, 140, COLOR_MAGENTA, &verdanabold14ptFontInfo,   "Previous measurement");
	drawString(140, 165, COLOR_WHITE, &dejaVuSansBold9ptFontInfo, "Ro : 		");
	drawString(120, 185, COLOR_WHITE, &dejaVuSansBold9ptFontInfo, "Rmax :		");
	drawString(125, 205, COLOR_WHITE, &dejaVuSansBold9ptFontInfo,"Rmin : 		");
	drawString(15, 225, COLOR_WHITE, &dejaVuSansBold9ptFontInfo,"Response Rmax/Rmin : 		");

	drawButton(20, 260, 90, 40, &dejaVuSansBold9ptFontInfo, 7, COLOR_BLACK, COLOR_RED, COLOR_WHITE, "BACK");
}

/*_____________________________________________________________________________*/
void drawMeasureResults(measurePageData_T * result) {
	char buff[6];

	snprintf(buff, sizeof(buff), "%3.2f", (double)result->ro);
	drawString(180, 60, COLOR_WHITE, &dejaVuSansBold9ptFontInfo, buff);
	snprintf(buff, sizeof(buff), "%3.2f", (double)result->rmax);
	drawString(180, 80, COLOR_WHITE, &dejaVuSansBold9ptFontInfo, buff);
	snprintf(buff, sizeof(buff), "%3.2f", (double)result->rmin);
	drawString(180, 100, COLOR_WHITE, &dejaVuSansBold9ptFontInfo, buff);
	snprintf(buff, sizeof(buff), "%3.2f",(double)result->rRatio);
	drawString(180, 120, COLOR_WHITE, &dejaVuSansBold9ptFontInfo, buff);
}

/*_____________________________________________________________________________*/
void drawPreviousResults(measurePageData_T * result) {
	char buff[6];

	snprintf(buff, sizeof(buff), "%3.2f", (double)result->ro);
	drawString(180, 165, COLOR_WHITE, &dejaVuSansBold9ptFontInfo, buff);
	snprintf(buff, sizeof(buff), "%3.2f", (double)result->rmax);
	drawString(180, 185, COLOR_WHITE, &dejaVuSansBold9ptFontInfo, buff);
	snprintf(buff, sizeof(buff), "%3.2f", (double)result->rmin);
	drawString(180, 205, COLOR_WHITE, &dejaVuSansBold9ptFontInfo, buff);
	snprintf(buff, sizeof(buff), "%3.2f", (double)result->rRatio);
	drawString(180, 225, COLOR_WHITE, &dejaVuSansBold9ptFontInfo, buff);
}
/*================================*//** @cond *//*==  CONFIGURATION ERRORS  ==*/
/** @endcond *//** @} *//******************************************************
 * END of draw_measure_page.c
 ******************************************************************************/