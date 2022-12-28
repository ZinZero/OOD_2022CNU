#include "gtest/gtest.h"
#include "student.h"

TEST(Test, student1) {
    ClassInfo c1(12142004, "object oriented pogramming");
    ClassInfo c2(23145019, "sofrware analysis");

    Student s1(202102695, "Jin young Jang");
    Student s2(199400217, "ku Soon Jang");

    s1.AddGrade(c1, Grade::A);
    s1.AddGrade(c2, Grade::B);
    s2.AddGrade(c1, Grade::C);

    std::string result = "STUDENT[202102695, Jin young Jang]\n"
    "-CLASS[12142004, object oriented pogramming] : A\n"
    "-CLASS[23145019, sofrware analysis] : B"
    "STUDENT[199400217, ku Soon Jang]\n"
    "-CLASS[12142004, object oriented pogramming] : C";

    EXPECT_EQ(s1.GetInfo() + s2.GetInfo(), result);
}

TEST(Test, student2) {
    ClassInfo c1(11537001, "physics");
    ClassInfo c2(12142003, "computer architechtuers");
    ClassInfo c3(12142006, "system programming");

    Student s1(202102695, "Jin young Jang");
    Student s2(199400217, "ku Soon Jang");
    Student s3(198900306, "Tae Yeon Kim");

    s1.AddGrade(c1, Grade::A);
    s1.AddGrade(c2, Grade::B);
    s1.AddGrade(c3, Grade::A);
    s2.AddGrade(c1, Grade::D);
    s2.AddGrade(c2, Grade::B);
    s3.AddGrade(c3, Grade::A);

    std::string result = "STUDENT[202102695, Jin young Jang]\n"
    "-CLASS[11537001, physics] : A\n"
    "-CLASS[12142003, computer architechtuers] : B\n"
    "-CLASS[12142006, system programming] : A"
    "STUDENT[199400217, ku Soon Jang]\n"
    "-CLASS[11537001, physics] : D\n"
    "-CLASS[12142003, computer architechtuers] : B"
    "STUDENT[198900306, Tae Yeon Kim]\n"
    "-CLASS[12142006, system programming] : A";

    EXPECT_EQ(s1.GetInfo() + s2.GetInfo() + s3.GetInfo(), result);
}

TEST(Test, student3) {
    ClassInfo c1(12142004, "object oriented pogramming");
    ClassInfo c2(23145019, "sofrware analysis");
    ClassInfo c3(12143007, "sofrware engineering");
    ClassInfo c4(12142007, "algorithms");

    Student s1(202102695, "Jin young Jang");
    Student s2(199400217, "ku Soon Jang");
    Student s3(198900306, "Tae Yeon Kim");
    Student s4(199500819, "Ji Yeon Kim");

    s1.AddGrade(c1, Grade::A);
    s1.AddGrade(c2, Grade::C);
    s1.AddGrade(c3, Grade::B);
    s1.AddGrade(c4, Grade::D);

    s2.AddGrade(c1, Grade::D);
    s2.AddGrade(c2, Grade::B);

    s3.AddGrade(c2, Grade::B);
    s3.AddGrade(c3, Grade::A);

    s4.AddGrade(c3, Grade::A);
    s4.AddGrade(c4, Grade::C);

    std::string result = "STUDENT[202102695, Jin young Jang]\n"
    "-CLASS[12142004, object oriented pogramming] : A\n"
    "-CLASS[12142007, algorithms] : D\n"
    "-CLASS[12143007, sofrware engineering] : B\n"
    "-CLASS[23145019, sofrware analysis] : C"
    "STUDENT[199400217, ku Soon Jang]\n"
    "-CLASS[12142004, object oriented pogramming] : D\n"
    "-CLASS[23145019, sofrware analysis] : B"
    "STUDENT[198900306, Tae Yeon Kim]\n"
    "-CLASS[12143007, sofrware engineering] : A\n"
    "-CLASS[23145019, sofrware analysis] : B"
    "STUDENT[199500819, Ji Yeon Kim]\n"
    "-CLASS[12142007, algorithms] : C\n"
    "-CLASS[12143007, sofrware engineering] : A";

    EXPECT_EQ(s1.GetInfo() + s2.GetInfo() +
        s3.GetInfo() + s4.GetInfo(), result);
}
