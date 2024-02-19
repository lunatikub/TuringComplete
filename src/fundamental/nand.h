#ifndef NAND_H_
# define NAND_H_

#include <stdbool.h>

#include "types.h"

/**
 * Transistor NPN.
 * Transistors are commonly used in digital circuits as electronic
 * switches which can be either in an "on" or "off".
 *
 *            o (Collector)
 *            |
 * (Base) o-I<
 *            |
 *            o (Emitter)
 */
typedef struct transistor {
    bool base;
    bool collector;
    bool emitter;
} transistor_t;

/**
 * NAND gate (alternative denial).
 *
 * Emulates a NAND gate from basics electronic components.
 * All other logic gates must be based on this one !
 * Electronic schema for the NAND gate with 2 NPN transistors:
 *
 * ^^^: Resistance
 * |>|: LED
 * ///: Ground
 * I< : Transistor
 *
 *                5V
 *                 o
 *                 |
 *                ^^^
 *                 |
 *                 +--|>|--///--o [Q]
 *                 |
 *  [A] o--^^^-- I< (t1)
 *                 |
 *  [B] o--^^^-- I< (t2)
 *                 |
 *                 o
 *                ///
 *
 * Distinctive shape (IEEE Std 91/91a-1991):
 *      +----+
 * A ---|    |\
 *      | &  |--- Q
 * B ---|    |
 *      +----+
 *
 * Thuth table:
 * +---+---+---+
 * | A | B | Q |
 * +---+---+---+
 * | 0 | 0 | 1 |
 * | 1 | 0 | 1 |
 * | 1 | 1 | 1 |
 * | 1 | 1 | 0 |
 * +---+---+---+
 *
 */
static bit_t nand(bit_t A, bit_t B)
{
    transistor_t t1 = { 0 };
    transistor_t t2 = { 0 };

    t1.base = (A == 1);
    t2.base = (B == 1);
    t1.collector = 1; /* 5V */
    t2.emitter = 0; /* Ground */

    if (t1.base == 1) {
        t1.emitter = t1.collector;
    }

    t2.collector = t1.emitter;
    if (t2.base == 1) {
        t2.emitter = t2.collector;
    }

    return t2.emitter == 0;
}

#endif /* !NAND_H_ */
