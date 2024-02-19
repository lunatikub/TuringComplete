#ifndef XOR_H_
# define XOR_H_

#include "logic/not.h"
#include "logic/and.h"
#include "logic/or.h"

/**
 * XOR gate (exclusive).
 * See advanced documentation `logic` for more details.
 */
static bit_t xor(bit_t A, bit_t B)
{
    return or(and(not(A), B),
              and(A, not(B)));
}

#endif /* !XOR_H_ */
