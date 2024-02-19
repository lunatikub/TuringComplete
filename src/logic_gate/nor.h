#ifndef NOR_H_
# define NOR_H_

#include "logic_gate/not.h"

/**
 * NOR gate (joint denial).
 *
 * Distinctive shape (IEEE Std 91/91a-1991):
 *      +----+
 * A ---|    |\
 *      |>=1 |--- Q
 * B ---|    |
 *      +----+
 *
 * Thuth table:
 * +---+---+---+
 * | A | B | Q |
 * +---+---+---+
 * | 0 | 0 | 1 |
 * | 1 | 0 | 0 |
 * | 1 | 1 | 0 |
 * | 1 | 1 | 0 |
 * +---+---+---+
 *
 */
static bit_t nor(bit_t A, bit_t B)
{
    return not(or(A, B));
}

#endif /* !NOR_H_ */
