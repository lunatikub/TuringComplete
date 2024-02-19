#include "minunit.h"

#include "fundamental/nand.h"

MU_TEST(test_nand)
{
    mu_check(nand(0, 0) == 1);
    mu_check(nand(1, 0) == 1);
    mu_check(nand(0, 1) == 1);
    mu_check(nand(1, 1) == 0);
}

#include "fundamental/byte_splitter.h"

MU_TEST(test_byte_splitter)
{
    byte_t i = 0xaa; /* 10101010  */
    bit8_t o;
    byte_splitter(i, o);
    mu_check(o[0] == 1 && o[1] == 0 &&
             o[2] == 1 && o[3] == 0 &&
             o[4] == 1 && o[6] == 1 &&
             o[5] == 0 && o[7] == 0);
}

#include "fundamental/byte_maker.h"

MU_TEST(test_byte_maker)
{
    bit8_t i = { 0, 0, 1, 0, 1, 0, 1, 1 }; /* 0x2a, 43 */
    byte_t o;
    byte_maker(i, &o);
    mu_check(o == 43);
}

MU_TEST(test_byte_eq)
{
    byte_t byte;
    bit8_t bits;
    byte_splitter(12, bits);
    byte_maker(bits, &byte);
    mu_check(byte == 12);
}

MU_TEST_SUITE(test_suite_fundamental)
{
    MU_RUN_TEST(test_nand);
    MU_RUN_TEST(test_byte_splitter);
    MU_RUN_TEST(test_byte_maker);
    MU_RUN_TEST(test_byte_eq);
}

int main(int argc, char *argv[])
{
    MU_RUN_SUITE(test_suite_fundamental);
    MU_REPORT();
    return MU_EXIT_CODE;
}
