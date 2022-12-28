#include "gtest/gtest.h"
#include "class.h"

TEST(test, class1) {
    ClassInfo c1(12142004, "object oriented pogramming");
    ClassInfo c2(23145019, "sofrware analysis");

    Student s1(202102695, "Jin young Jang");
    Student s2(199400217, "ku Soon Jang");

    Class ood22(c1);
    Class sa2022(c2);

    ood22.Register(s1);
    ood22.Register(s2);
    sa2022.Register(s1);
    sa2022.Register(s2);

    std::string result = "CLASS[12142004, object oriented pogramming]\n"
    "(1) STUDENT[199400217, ku Soon Jang]\n"
    "(2) STUDENT[202102695, Jin young Jang]"
    "CLASS[23145019, sofrware analysis]\n"
    "(1) STUDENT[199400217, ku Soon Jang]\n"
    "(2) STUDENT[202102695, Jin young Jang]";

    EXPECT_EQ(ood22.GetInfo() + sa2022.GetInfo(), result);
}

TEST(test, class2) {
    ClassInfo c1(11537001, "physics");
    ClassInfo c2(12142003, "computer architechtuers");
    ClassInfo c3(12142006, "system programming");

    Student s1(202102695, "Jin young Jang");
    Student s2(199400217, "ku Soon Jang");
    Student s3(198900306, "Tae Yeon Kim");

    Class ph2022(c1);
    Class ca2022(c2);
    Class sp2022(c3);

    ph2022.Register(s1);
    ph2022.Register(s2);
    ph2022.Register(s3);
    ca2022.Register(s1);
    ca2022.Register(s2);
    sp2022.Register(s1);
    sp2022.Register(s3);

    std::string result = "CLASS[11537001, physics]\n"
    "(1) STUDENT[198900306, Tae Yeon Kim]\n"
    "(2) STUDENT[199400217, ku Soon Jang]\n"
    "(3) STUDENT[202102695, Jin young Jang]"
    "CLASS[12142003, computer architechtuers]\n"
    "(1) STUDENT[199400217, ku Soon Jang]\n"
    "(2) STUDENT[202102695, Jin young Jang]"
    "CLASS[12142006, system programming]\n"
    "(1) STUDENT[198900306, Tae Yeon Kim]\n"
    "(2) STUDENT[202102695, Jin young Jang]";

    EXPECT_EQ(ph2022.GetInfo() + ca2022.GetInfo() + sp2022.GetInfo(), result);
}

TEST(test, class3) {
    ClassInfo c1(12142004, "object oriented pogramming");
    ClassInfo c2(23145019, "sofrware analysis");
    ClassInfo c3(12143007, "sofrware engineering");
    ClassInfo c4(12142007, "algorithms");

    Student s1(202102695, "Jin young Jang");
    Student s2(199400217, "ku Soon Jang");
    Student s3(198900306, "Tae Yeon Kim");
    Student s4(199500819, "Ji Yeon Kim");

    Class ood2022(c1);
    Class sa2022(c2);
    Class se2022(c3);
    Class al2022(c4);

    ood2022.Register(s1);
    ood2022.Register(s2);
    ood2022.Register(s3);
    ood2022.Register(s4);

    sa2022.Register(s1);
    sa2022.Register(s2);
    sa2022.Register(s4);

    se2022.Register(s1);
    se2022.Register(s2);

    al2022.Register(s3);
    al2022.Register(s4);

    std::string result = "CLASS[12142004, object oriented pogramming]\n"
    "(1) STUDENT[198900306, Tae Yeon Kim]\n"
    "(2) STUDENT[199400217, ku Soon Jang]\n"
    "(3) STUDENT[199500819, Ji Yeon Kim]\n"
    "(4) STUDENT[202102695, Jin young Jang]"
    "CLASS[23145019, sofrware analysis]\n"
    "(1) STUDENT[199400217, ku Soon Jang]\n"
    "(2) STUDENT[199500819, Ji Yeon Kim]\n"
    "(3) STUDENT[202102695, Jin young Jang]"
    "CLASS[12143007, sofrware engineering]\n"
    "(1) STUDENT[199400217, ku Soon Jang]\n"
    "(2) STUDENT[202102695, Jin young Jang]"
    "CLASS[12142007, algorithms]\n"
    "(1) STUDENT[198900306, Tae Yeon Kim]\n"
    "(2) STUDENT[199500819, Ji Yeon Kim]";

    EXPECT_EQ(ood2022.GetInfo() + sa2022.GetInfo() +
        se2022.GetInfo() + al2022.GetInfo(), result);
}
