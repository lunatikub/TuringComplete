#ifndef XNOR_H_
# define XNOR_H_

#include "logic/xor.h"
#include "logic/not.h"

/**
 * XNOR gate (biconditional).
 * See advanced documentation `logic` for more details.
 */
static bit_t xnor(bit_t A, bit_t B)
{
    return not(xor(A, B));
}

#endif /* !XNOR_H_ */
