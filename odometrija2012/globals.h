#include    <p33FJ128MC802.h>

/* 
 * File:   globals.h
 * Author: mrmot
 *
 * Created on November 24, 2012, 3:25 PM
 */

#ifndef GLOBALS_H
#define	GLOBALS_H

#define PI	3.1415926535897932384626433832795
#define d_tocka	51.775//51.75 // precnik odometrijskog tocka
#define D_tocka	167.555//167.5 //rastojanje izmedju tockova
#define K1	(long)(8*1024.0f * D_tocka / d_tocka)  //broj ikremenata po krugu
#define K2	(long)(4*1024.0f / (d_tocka * PI))  //za konverziju mm u inkremente == 121.26
#define Gp_D	20//1.5
#define Gd_D	11//16

#define Gp_T	0
#define Gd_T	0

//makroi za zadavanje smera motora:
#define LEVI_NAPRED	LATBbits.LATB14=0; LATBbits.LATB12=1
#define LEVI_NAZAD	LATBbits.LATB14=1; LATBbits.LATB12=0
#define DESNI_NAPRED 	LATBbits.LATB11=1; LATBbits.LATB8=0
#define DESNI_NAZAD 	LATBbits.LATB11=0; LATBbits.LATB8=1

//POMOCNE PROMENLJIVE:
extern char brint;
extern long positionR, positionL;               //trenutne pozicije na enkoderima
extern int vR, vL, greska_pred, greska_pred_R;  //trenutne brzine na motorima
extern int zaglavL, zaglavR;                    //detekcija zaglavljivanja
extern unsigned char brzinaL;
extern long L, orientation, teta;
extern long long int Xlong, Ylong;
extern float vmax, accel;
extern float omega, alfa;
extern long X, Y;
extern long brojac,i;
extern unsigned long sys_time;
//PROMENLJIVE POTREBNE ZA REGULACIJU
extern int PWML, PWMD;
extern long t_ref, d_ref;
extern float v_ref;


#endif	/* GLOBALS_H */
