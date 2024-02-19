#ifndef NOT_H_
# define NOT_H_

#include "fundamental/nand.h"

/**
 * NOT gate (inverter).
 * See advanced documentation `logic_gate` for more details.
 */
static bit_t not(bit_t A)
{
    return nand(A, A);
}

#endif /* !NOT_H_ */
