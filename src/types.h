#ifndef TYPES_H_
#define TYPES_H_

#include <stdint.h>

/**
 * The bit is the most basic unit of information in computing.
 * By convention, can take 2 values: 0 or 1.
 */
typedef uint8_t bit_t;

/**
 * Byte is the unit of digital information that most commonly
 * consists of eight bits.
 */
typedef uint8_t byte_t;

/**
 * By convention, index 0 is the most significant bit.
 * number: [10101010] (0xaa)
 * index:  [01234567]
 */
typedef bit_t bit8_t[8];

#endif /* !TYPES_H_ */
