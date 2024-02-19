#ifndef NOR_H_
# define NOR_H_

#include "logic_gate/not.h"

/**
 * NOR gate (joint denial).
 * See advanced documentation `logic_gate` for more details.
 */
static bit_t nor(bit_t A, bit_t B)
{
    return not(or(A, B));
}

#endif /* !NOR_H_ */
