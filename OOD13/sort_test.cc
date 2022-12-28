//  Copyright [2022] <Copyright JangJinYoung>
#include <vector>
#include <array>
#include <list>
#include <string>
#include "gtest/gtest.h"
#include "sort.h"

TEST(Test, sort1) {
    std::vector<int> vec = {8, 5, 6, 3, 7, 9, 10, 4};

    std::string result = "";
    Sort<std::vector<int>>(vec.begin(), vec.end());
    for (int i : vec) {
        result += std::to_string(i) + " ";
    }

    EXPECT_EQ(result, "3 4 5 6 7 8 9 10 ");
}

TEST(Test, sort2) {
    std::array<int, 7> arr = {4, 8, 97, 6, 100, 23154, 9696};

    std::string result = "";
    Sort<std::array<int, 7>>(arr.begin(), arr.end());
    for (int i : arr) {
        result += std::to_string(i) + " ";
    }

    EXPECT_EQ(result, "4 6 8 97 100 9696 23154 ");
}

TEST(Test, sort3) {
    std::list<int> lst = {19, 6, 22, 17, 13, 7, 9};

    std::string result = "";
    Sort<std::list<int>>(lst.begin(), lst.end());
    for (int i : lst) {
        result += std::to_string(i) + " ";
    }

    EXPECT_EQ(result, "6 7 9 13 17 19 22 ");
}
