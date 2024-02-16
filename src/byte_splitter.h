#ifndef BYTE_SPLITTER_H_
#define BYTE_SPLITTER_H_

#include "types.h"

/**
 * Splits a byte into 8 bits (bit8_t).
 * */
static inline void byte_splitter(byte_t i, bit8_t o)
{
    o[0] = i >> 7 & 0x01;
    o[1] = i >> 6 & 0x01;
    o[2] = i >> 5 & 0x01;
    o[3] = i >> 4 & 0x01;
    o[4] = i >> 3 & 0x01;
    o[5] = i >> 2 & 0x01;
    o[6] = i >> 1 & 0x01;
    o[7] = i >> 0 & 0x01;
}

#endif // BYTE_SPLITTER_H_
