/* 
 * File:   badge.h
 * Author: bocal
 *
 * Created on June 12, 2018, 9:32 AM
 */

#ifndef BADGE_H
#define	BADGE_H

#ifdef	__cplusplus
extern "C" {
#endif

#define WIEGAND_DATA0_MODE TRISAbits.TRISA9
#define WIEGAND_DATA0_DATA PORTAbits.RA9
#define WIEGAND_DATA0_CN CNENAbits.CNIEA9

#define WIEGAND_DATA1_DATA PORTCbits.RC3
#define WIEGAND_DATA1_MODE TRISCbits.TRISC3
#define WIEGAND_DATA1_CN CNENCbits.CNIEC3

typedef struct	s_wiegand_buf
{
    u8			index;
    u8			buffer[44];
}				t_wiegand_buf;

extern t_wiegand_buf	g_wiegand_buf;

#ifdef	__cplusplus
}
#endif

#endif	/* BADGE_H */

