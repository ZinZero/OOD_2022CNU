#include "gtest/gtest.h"
#include "class_info.h"

TEST(Test, classinfo1) {
    ClassInfo c1(12142004, "object oriented pogramming");
    ClassInfo c2(23145019, "sofrware analysis");

    std::string result = "CLASS[12142004, object oriented pogramming]"
    "CLASS[23145019, sofrware analysis]";

    EXPECT_EQ(c1.GetInfo() + c2.GetInfo(), result);
}

TEST(Test, classinfo2) {
    ClassInfo c1(11537001, "physics");
    ClassInfo c2(12142003, "computer architechtuers");
    ClassInfo c3(12142006, "system programming");

    std::string result = "CLASS[11537001, physics]"
    "CLASS[12142003, computer architechtuers]"
    "CLASS[12142006, system programming]";

    EXPECT_EQ(c1.GetInfo() + c2.GetInfo() + c3.GetInfo(), result);
}

TEST(Test, classinfo3) {
    ClassInfo c1(12142004, "object oriented pogramming");
    ClassInfo c2(23145019, "sofrware analysis");
    ClassInfo c3(12143007, "sofrware engineering");
    ClassInfo c4(12142007, "algorithms");

    std::string result = "CLASS[12142004, object oriented pogramming]"
    "CLASS[23145019, sofrware analysis]"
    "CLASS[12143007, sofrware engineering]"
    "CLASS[12142007, algorithms]";

    EXPECT_EQ(c1.GetInfo() + c2.GetInfo() +
        c3.GetInfo() + c4.GetInfo(), result);
}
