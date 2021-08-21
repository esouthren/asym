#pragma once

#include "quefrency.h"

#include "quantum.h"


#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
  #include <avr/io.h>
  #include <avr/interrupt.h>
#endif
#endif

#define LAYOUT( \
  LA1, LA2, LA3, LA4, LA5, LA6,                 RA2, RA3, RA4, RA5, RA6, RA7, RA8,         RA9, RA10, RB11, RC11\
  LB1, LB2, LB3, LB4, LB5, LB6, LA7              RA1, RB2, RB3, RB4, RB5, RB6, RB7,        RB8, RB9, RB10,  RD10\
  LC1, LC2, LC3, LC4, LC5, LC6, LB7              RB1, RC2, RC3, RC4, RC5, RC6, RC7         RC8, RC9, RC10 \
  LD1, LD2  LD3, LD4, LD5, LD6, LC7, LD7,   RD1, RC1, RD2, RD3, RD4, RD5, RD6, RD7,    RD8,     RD9,     RD11, \
    LE1, LE2, LE3, LE4, LE5, LE6, LE7,        RE1, RE2, RE3, RE4, RE5, RE6, RE7,         RE8,       RE9, RE10, RE11 \
  ) \
  { \
    { LA1, LA2, LA3, LA4, LA5, LA6, LA7, RA1, RA2, RA3, RA4, RA5, RA6, RA7, RA8, RA9, RA10, KC_NO }, \
    { LB1, LB2, LB3, LB4, LB5, LB6, LB7, RB1, RB2, RB3, RB4, RB5, RB6, RB7, RB8, RB9, RB10, RB11 }, \
    { LC1, LC2, LC3, LC4, LC5, LC6, LC7, RC1, RC2, RC3, RC4, RC5, RC6, RC7, RC8, RC9, RC10, RC11 }, \
    { LD1, LD2, LD3, LD4, LD5, LD6, LD7, RD1, RD2, RD3, RD4, RD5, RD6, RD7, RD8, RD9, RD10, RD11 }, \
    { LE1, LE2, LE3, LE4, LE5, LE6, LE7, RE1, RE2, RE3, RE4, RE5, RE6, RE7, RE8, RE9, RE10, RE11 }, \
  }
