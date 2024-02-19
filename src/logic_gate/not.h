#ifndef NOT_H_
# define NOT_H_

#include "fundamental/nand.h"

/**
 * NOT gate (inverter).
 *
 * Rectangular shape (IEEE Std 91/91a-1991):
 *      +----+
 *      |    |\
 * A ---| 1  |--- Q
 *      |    |
 *      +----+
 *
 * Thuth table:
 * +----+--+
 * | A | o |
 * +----+--+
 * | 0 | 1 |
 * | 1 | 0 |
 * +----+--+
 *
 */

static bit_t not(bit_t A)
{
    return nand(A, A);
}

#endif /* !NOT_H_ */
