#ifndef XNOR_H_
# define XNOR_H_

#include "logic_gate/xor.h"
#include "logic_gate/not.h"

/**
 * XNOR gate (biconditional).
 *
 * Distinctive shape (IEEE Std 91/91a-1991):
 *      +----+
 * A ---|    |\
 *      | =1 |--- Q
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
 * | 1 | 1 | 1 |
 * +---+---+---+
 *
 */
static bit_t xnor(bit_t A, bit_t B)
{
    return not(xor(A, B));
}

#endif /* !XNOR_H_ */
