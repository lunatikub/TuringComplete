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
 * Representation of a byte with 8 bits.
 * By convention, index 0 is the most significant bit.
 * number: [ 1, 0, 1, 0, 1, 0, 1, 0 ] (0xaa)
 * index:  [ 0  1  2  3  4  5  6  7]
 */
typedef bit_t bit8_t[8];

#endif /* !TYPES_H_ */
