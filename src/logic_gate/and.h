#ifndef AND_H_
# define AND_H_

#include "fundamental/nand.h"
#include "logic_gate/not.h"

/**
 * AND gate (conjunction).
 *
 * Distinctive shape (IEEE Std 91/91a-1991):
 *      +----+
 * A ---|    |
 *      | &  |--- Q
 * B ---|    |
 *      +----+
 *
 * Thuth table:
 * +---+---+---+
 * | A | B | Q |
 * +---+---+---+
 * | 0 | 0 | 0 |
 * | 1 | 0 | 0 |
 * | 1 | 1 | 0 |
 * | 1 | 1 | 1 |
 * +---+---+---+
 *
 */
static bit_t and(bit_t A, bit_t B)
{
    return not(nand(A, B));
}

#endif /* !AND_H_ */
