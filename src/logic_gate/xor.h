#ifndef XOR_H_
# define XOR_H_

#include "logic_gate/not.h"
#include "logic_gate/or.h"

/**
 * XOR gate (exclusive).
 *
 * Distinctive shape (IEEE Std 91/91a-1991):
 *      +----+
 * A ---|    |
 *      | =1 |--- Q
 * B ---|    |
 *      +----+
 *
 * Thuth table:
 * +---+---+---+
 * | A | B | Q |
 * +---+---+---+
 * | 0 | 0 | 0 |
 * | 1 | 0 | 1 |
 * | 1 | 1 | 1 |
 * | 1 | 1 | 0 |
 * +---+---+---+
 *
 */
static bit_t xor(bit_t A, bit_t B)
{
    return or(and(not(A), B),
              and(A, not(B)));
}

#endif /* !XOR_H_ */
