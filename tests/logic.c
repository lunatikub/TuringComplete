#include "minunit.h"

#include "logic/not.h"

MU_TEST(test_not)
{
    mu_check(not(0) == 1);
    mu_check(not(1) == 0);
}

#include "logic/or.h"

MU_TEST(test_or)
{
    mu_check(or(0, 0) == 0);
    mu_check(or(1, 0) == 1);
    mu_check(or(0, 1) == 1);
    mu_check(or(1, 1) == 1);
}

#include "logic/and.h"

MU_TEST(test_and)
{
    mu_check(and(0, 0) == 0);
    mu_check(and(1, 0) == 0);
    mu_check(and(0, 1) == 0);
    mu_check(and(1, 1) == 1);
}

#include "logic/nor.h"

MU_TEST(test_nor)
{
    mu_check(nor(0, 0) == 1);
    mu_check(nor(1, 0) == 0);
    mu_check(nor(0, 1) == 0);
    mu_check(nor(1, 1) == 0);
}

#include "logic/xor.h"

MU_TEST(test_xor)
{
    mu_check(xor(0, 0) == 0);
    mu_check(xor(1, 0) == 1);
    mu_check(xor(0, 1) == 1);
    mu_check(xor(1, 1) == 0);
}

#include "logic/xnor.h"

MU_TEST(test_xnor)
{
    mu_check(xnor(0, 0) == 1);
    mu_check(xnor(1, 0) == 0);
    mu_check(xnor(0, 1) == 0);
    mu_check(xnor(1, 1) == 1);
}

MU_TEST_SUITE(test_suite_logic)
{
    MU_RUN_TEST(test_not);
    MU_RUN_TEST(test_or);
    MU_RUN_TEST(test_and);
    MU_RUN_TEST(test_nor);
    MU_RUN_TEST(test_xor);
    MU_RUN_TEST(test_xnor);
}

int main(int argc, char *argv[])
{
    MU_RUN_SUITE(test_suite_logic);
    MU_REPORT();
    return MU_EXIT_CODE;
}
