#include "gtest/gtest.h"
#include "util.h"

TEST(TestUtil, MyAdd1PosPosTest) {
    EXPECT_EQ(MyAdd(1, 2), 3);
}

TEST(TestUtil, MyAdd2PosPosTest) {
    EXPECT_EQ(MyAdd(1, 5), 6);
}

TEST(TestUtil, MyAdd3PosPosTest) {
    EXPECT_EQ(MyAdd(2, 2), 4);
}

TEST(TestUtil, MyAdd4PosPosTest) {
    EXPECT_EQ(MyAdd(5, 2), 7);
}

TEST(TestUtil, MyAdd5PosPosTest) {
    EXPECT_EQ(MyAdd(7, 2), 9);
}

TEST(TestUtil, MyDiv1PosPosTest) {
    EXPECT_EQ(MyDiv(15, 5), 3);
}

TEST(TestUtil, MyDiv2PosPosTest) {
    EXPECT_EQ(MyDiv(5, 1), 5);
}

TEST(TestUtil, MyDiv3PosPosTest) {
    EXPECT_EQ(MyDiv(4, 2), 2);
}

TEST(TestUtil, MyDiv4PosPosTest) {
    EXPECT_EQ(MyDiv(8, 4), 2);
}

TEST(TestUtil, MyDiv5PosPosTest) {
    EXPECT_EQ(MyDiv(21, 7), 3);
}

TEST(TestUtil, MyMult1PosPosTest) {
    EXPECT_EQ(MyMult(1, 3), 3);
}

TEST(TestUtil, MyMult2PosPosTest) {
    EXPECT_EQ(MyMult(2, 3), 6);
}

TEST(TestUtil, MyMult3PosPosTest) {
    EXPECT_EQ(MyMult(2, 4), 8);
}

TEST(TestUtil, MyMult4PosPosTest) {
    EXPECT_EQ(MyMult(5, 2), 10);
}

TEST(TestUtil, MyMult5PosPosTest) {
    EXPECT_EQ(MyMult(7, 3), 21);
}

TEST(TestUtil, MySub1PosPosTest) {
    EXPECT_EQ(MySub(6, 3), 3);
}

TEST(TestUtil, MySub2PosPosTest) {
    EXPECT_EQ(MySub(8, 3), 5);
}

TEST(TestUtil, MySub3PosPosTest) {
    EXPECT_EQ(MySub(7, 3), 4);
}

TEST(TestUtil, MySub4PosPosTest) {
    EXPECT_EQ(MySub(19, 10), 9);
}

TEST(TestUtil, MySub5PosPosTest) {
    EXPECT_EQ(MySub(8, 3), 5);
}
