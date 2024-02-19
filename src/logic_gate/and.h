#ifndef AND_H_
# define AND_H_

#include "fundamental/nand.h"
#include "logic_gate/not.h"

/**
 * AND gate (conjunction) construction from NAND gate.
 * See advanced documentation `logic_gate` for more details.
 */
static bit_t and(bit_t A, bit_t B)
{
    return not(nand(A, B));
}

#endif /* !AND_H_ */
