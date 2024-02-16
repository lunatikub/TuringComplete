#ifndef ELEMENTARY_GATES_H_
# define ELEMENTARY_GATES_H_

#include "types.h"

/**
 * i | o
 * -----
 * 0 | 1
 * 1 | 0
 */
static inline bit_t not(bit_t i)
{
    return !i;
}

/**
 * i1 | i2 |  o
 * ------------
 *  0 |  0 |  0
 *  1 |  0 |  1
 *  1 |  1 |  1
 *  1 |  1 |  1
 */
static inline bit_t or(bit_t i1, bit_t i2)
{
    return i1 | i2;
}

/**
 * i1 | i2 |  o
 * ------------
 *  0 |  0 |  0
 *  1 |  0 |  0
 *  1 |  1 |  0
 *  1 |  1 |  1
 */
static inline bit_t and(bit_t i1, bit_t i2)
{
    return i1 & i2;
}

/**
 * i1 | i2 |  o
 * ------------
 *  0 |  0 |  1
 *  1 |  0 |  0
 *  1 |  1 |  0
 *  1 |  1 |  0
 */
static inline bit_t nor(bit_t i1, bit_t i2)
{
    return not(or(i1, i2));
}

/**
 * i1 | i2 |  o
 * ------------
 *  0 |  0 |  0
 *  1 |  0 |  1
 *  1 |  1 |  1
 *  1 |  1 |  1
 */
static inline bit_t nand(bit_t i1, bit_t i2)
{
    return not(and(i1, i2));
}

/**
 * i1 | i2 |  o
 * ------------
 *  0 |  0 |  0
 *  1 |  0 |  1
 *  1 |  1 |  1
 *  1 |  1 |  0
 */
static inline bit_t xor(bit_t i1, bit_t i2)
{
    return i1 ^ i2;
}

/**
 * i1 | i2 |  o
 * ------------
 *  0 |  0 |  1
 *  1 |  0 |  0
 *  1 |  1 |  0
 *  1 |  1 |  1
 */
static inline bit_t xnor(bit_t i1, bit_t i2)
{
    return not(xor(i1, i2));
}

#endif /* !ELEMENTARY_GATES_H_ */
