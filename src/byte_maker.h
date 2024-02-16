#ifndef BYTE_MAKER_H_
#define BYTE_MAKER_H_

#include "types.h"

/**
 * Turns 8 bits into a byte.
 */
static inline void byte_maker(bit8_t i, byte_t *o)
{
    *o =
        i[0] << 7 |
        i[1] << 6 |
        i[2] << 5 |
        i[3] << 4 |
        i[4] << 3 |
        i[5] << 2 |
        i[6] << 1 |
        i[7] << 0;
}

#endif // BYTE_MAKER_H_
