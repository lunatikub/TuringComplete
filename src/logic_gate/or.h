#ifndef OR_H_
# define OR_H_

#include "fundamental/nand.h"
#include "logic_gate/not.h"

/**
 * OR gate (disjunction) construction from NAND gate.
 * See advanced documentation `logic_gate` for more details.
 */
static bit_t or(bit_t A, bit_t B)
{
    return nand(not(A), not(B));
}

#endif /* !OR_H_ */
