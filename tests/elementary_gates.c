#include "minunit.h"
#include "elementary_gates.h"

MU_TEST(test_not)
{
    mu_check(not(0) == 1);
    mu_check(not(1) == 0);
}

MU_TEST(test_or)
{
    mu_check(or(0, 0) == 0);
    mu_check(or(1, 0) == 1);
    mu_check(or(0, 1) == 1);
    mu_check(or(1, 1) == 1);
}

MU_TEST(test_and)
{
    mu_check(and(0, 0) == 0);
    mu_check(and(1, 0) == 0);
    mu_check(and(0, 1) == 0);
    mu_check(and(1, 1) == 1);
}

MU_TEST(test_nor)
{
    mu_check(nor(0, 0) == 1);
    mu_check(nor(1, 0) == 0);
    mu_check(nor(0, 1) == 0);
    mu_check(nor(1, 1) == 0);
}

MU_TEST(test_nand)
{
    mu_check(nand(0, 0) == 1);
    mu_check(nand(1, 0) == 1);
    mu_check(nand(0, 1) == 1);
    mu_check(nand(1, 1) == 0);
}

MU_TEST(test_xor)
{
    mu_check(xor(0, 0) == 0);
    mu_check(xor(1, 0) == 1);
    mu_check(xor(0, 1) == 1);
    mu_check(xor(1, 1) == 0);
}

MU_TEST(test_xnor)
{
    mu_check(xnor(0, 0) == 1);
    mu_check(xnor(1, 0) == 0);
    mu_check(xnor(0, 1) == 0);
    mu_check(xnor(1, 1) == 1);
}

MU_TEST_SUITE(test_suite_elementary_gates)
{
    MU_RUN_TEST(test_not);
    MU_RUN_TEST(test_or);
    MU_RUN_TEST(test_and);
    MU_RUN_TEST(test_nor);
    MU_RUN_TEST(test_nand);
    MU_RUN_TEST(test_xor);
    MU_RUN_TEST(test_xnor);
}

int main(int argc, char *argv[])
{
    MU_RUN_SUITE(test_suite_elementary_gates);
    MU_REPORT();
    return MU_EXIT_CODE;
}
