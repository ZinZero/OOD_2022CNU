#include "gtest/gtest.h"
#include "int_acc.h"
#include "float_acc.h"

namespace int_acc {
    TEST(TestUtil, intAdd1Test) {
        Accumulator intAdd1(2);
        intAdd1.Add(4);
        EXPECT_EQ(intAdd1.acc(), 6);
    }

    TEST(TestUtil, intAdd2Test) {
        Accumulator intAdd2(3);
        intAdd2.Add(6);
        EXPECT_EQ(intAdd2.acc(), 9);
    }

    TEST(TestUtil, intAdd3Test) {
        Accumulator intAdd3(2);
        intAdd3.Add(8);
        EXPECT_EQ(intAdd3.acc(), 10);
    }

    TEST(TestUtil, intSub1Test) {
        Accumulator intSub(9);
        intSub.Sub(6);
        EXPECT_EQ(intSub.acc(), 3);
    }

    TEST(TestUtil, intSub2Test) {
        Accumulator intSub(7);
        intSub.Sub(4);
        EXPECT_EQ(intSub.acc(), 3);
    }

    TEST(TestUtil, intSub3Test) {
        Accumulator intSub(5);
        intSub.Sub(2);
        EXPECT_EQ(intSub.acc(), 3);
    }

    TEST(TestUtil, intMult1Test) {
        Accumulator intMult(2);
        intMult.Mult(5);
        EXPECT_EQ(intMult.acc(), 10);
    }

    TEST(TestUtil, intMult2Test) {
        Accumulator intMult(6);
        intMult.Mult(5);
        EXPECT_EQ(intMult.acc(), 30);
    }

    TEST(TestUtil, intMult3Test) {
        Accumulator intMult(3);
        intMult.Mult(5);
        EXPECT_EQ(intMult.acc(), 15);
    }

    TEST(TestUtil, intDiv1Test) {
        Accumulator intDiv(10);
        intDiv.Div(5);
        EXPECT_EQ(intDiv.acc(), 2);
    }

    TEST(TestUtil, intDiv2Test) {
        int_acc::Accumulator intDiv(10);
        intDiv.Div(0);
        EXPECT_EQ(intDiv.acc(), 0);
    }

    TEST(TestUtil, intDiv3Test) {
        int_acc::Accumulator intDiv(5);
        intDiv.Div(5);
        EXPECT_EQ(intDiv.acc(), 1);
    }

}  // namespace int_acc

namespace float_acc {

    TEST(TestUtil, floatAdd1Test) {
        Accumulator floatAdd(5);
        floatAdd.Add(1.5);
        EXPECT_FLOAT_EQ(floatAdd.acc(), 6.5);
    }

    TEST(TestUtil, floatAdd2Test) {
        Accumulator floatAdd(5);
        floatAdd.Add(2.5);
        EXPECT_FLOAT_EQ(floatAdd.acc(), 7.5);
    }

    TEST(TestUtil, floatAdd3Test) {
        Accumulator floatAdd(5);
        floatAdd.Add(4.5);
        EXPECT_FLOAT_EQ(floatAdd.acc(), 9.5);
    }

    TEST(TestUtil, floatSub1Test) {
        Accumulator floatSub(10);
        floatSub.Sub(5.5);
        EXPECT_FLOAT_EQ(floatSub.acc(), 4.5);
    }

    TEST(TestUtil, floatSub2Test) {
        Accumulator floatSub(10);
        floatSub.Sub(7.5);
        EXPECT_FLOAT_EQ(floatSub.acc(), 2.5);
    }

    TEST(TestUtil, floatSub3Test) {
        Accumulator floatSub(10);
        floatSub.Sub(9.5);
        EXPECT_FLOAT_EQ(floatSub.acc(), 0.5);
    }

    TEST(TestUtil, floatMult1Test) {
        Accumulator floatMult(3);
        floatMult.Mult(1.5);
        EXPECT_FLOAT_EQ(floatMult.acc(), 4.5);
    }

    TEST(TestUtil, floatMult2Test) {
        Accumulator floatMult(3);
        floatMult.Mult(2.5);
        EXPECT_FLOAT_EQ(floatMult.acc(), 7.5);
    }

    TEST(TestUtil, floatMult3Test) {
        Accumulator floatMult(4);
        floatMult.Mult(1.5);
        EXPECT_FLOAT_EQ(floatMult.acc(), 6.0);
    }

    TEST(Testutil, floatDiv1Test) {
        Accumulator floatDiv(10);
        floatDiv.Div(0);
        EXPECT_FLOAT_EQ(floatDiv.acc(), 0);
    }

    TEST(Testutil, floatDiv2Test) {
        Accumulator floatDiv(10);
        floatDiv.Div(2.5);
        EXPECT_FLOAT_EQ(floatDiv.acc(), 4);
    }

    TEST(Testutil, floatDiv3Test) {
        Accumulator floatDiv(1.21);
        floatDiv.Div(1.1);
        EXPECT_FLOAT_EQ(floatDiv.acc(), 1.1);
    }

}  // namespace float_acc
