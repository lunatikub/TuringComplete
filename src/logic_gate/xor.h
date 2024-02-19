#ifndef XOR_H_
# define XOR_H_

#include "logic_gate/not.h"
#include "logic_gate/and.h"
#include "logic_gate/or.h"

/**
 * XOR gate (exclusive).
 * See advanced documentation `logic_gate` for more details.
 */
static bit_t xor(bit_t A, bit_t B)
{
    return or(and(not(A), B),
              and(A, not(B)));
}

#endif /* !XOR_H_ */
