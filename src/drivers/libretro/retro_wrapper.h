#ifndef RETRO_WRAPPER_H
#define RETRO_WRAPPER_H

#include "driver.h"

#define NES_WIDTH  256
#define NES_HEIGHT 240

#define RAM_SIZE   2048

extern CartInfo iNESCart;
extern int pal_emulation;
extern int eoptions;
extern bool replaceP2StartWithMicrophone;

#endif /* RETRO_WRAPPER_H */
