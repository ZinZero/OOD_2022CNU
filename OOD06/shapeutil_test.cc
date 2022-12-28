#include "gtest/gtest.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"
#include "shape_util.h"

ShapeUtil* shape_util = ShapeUtil::GetInstance();

TEST(TestUtil, circle1) {
    Circle c1(2);
    Circle c2(4);
    Circle c3 = c1 + c2;

    EXPECT_FLOAT_EQ(shape_util->CalcArea(c3), 113.04);
}

TEST(TestUtil, circle2) {
    Circle c1(3);
    Circle c2(5);
    Circle c3 = c1 + c2;

    EXPECT_FLOAT_EQ(shape_util->CalcArea(c3), 200.96);
}

TEST(TestUtil, circle3) {
    Circle c1(6);
    Circle c2(10);
    Circle c3 = c1 + c2;

    EXPECT_FLOAT_EQ(shape_util->CalcArea(c3), 803.84);
}

TEST(TestUtil, triangle1) {
    Triangle t1(4, 6);
    Triangle t2(2, 6);
    Triangle t3 = t1 + t2;

    EXPECT_FLOAT_EQ(shape_util->CalcArea(t3), 36);
}

TEST(TestUtil, triangle2) {
    Triangle t1(4, 10);
    Triangle t2(3, 5);
    Triangle t3 = t1 + t2;

    EXPECT_FLOAT_EQ(shape_util->CalcArea(t3), 52.5);
}

TEST(TestUtil, triangle3) {
    Triangle t1(2, 2);
    Triangle t2(4, 8);
    Triangle t3 = t1 + t2;

    EXPECT_FLOAT_EQ(shape_util->CalcArea(t3), 30);
}

TEST(TestUtil, rectangle1) {
    Rectangle r1(2, 4);
    Rectangle r2(3, 5);
    Rectangle r3 = r1 + r2;

    EXPECT_EQ(shape_util->CalcArea(r3), 45);
}

TEST(TestUtil, rectangle2) {
    Rectangle r1(4, 5);
    Rectangle r2(2, 3);
    Rectangle r3 = r1 + r2;

    EXPECT_EQ(shape_util->CalcArea(r3), 48);
}

TEST(TestUtil, rectangle3) {
    Rectangle r1(10, 4);
    Rectangle r2(5, 7);
    Rectangle r3 = r1 + r2;

    EXPECT_EQ(shape_util->CalcArea(r3), 165);
}
