#ifndef XNOR_H_
# define XNOR_H_

#include "logic_gate/xor.h"
#include "logic_gate/not.h"

/**
 * XNOR gate (biconditional).
 * See advanced documentation `logic_gate` for more details.
 */
static bit_t xnor(bit_t A, bit_t B)
{
    return not(xor(A, B));
}

#endif /* !XNOR_H_ */
