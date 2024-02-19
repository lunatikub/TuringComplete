#ifndef OR_H_
# define OR_H_

#include "fundamental/nand.h"
#include "logic_gate/not.h"

/**
 * OR gate (disjunction).
 *
 * Distinctive shape (IEEE Std 91/91a-1991):
 *      +----+
 * A ---|    |
 *      |>=1 |--- Q
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
 * | 1 | 1 | 1 |
 * +---+---+---+
 *
 */
static bit_t or(bit_t A, bit_t B)
{
    return nand(not(A), not(B));
}

#endif /* !OR_H_ */
