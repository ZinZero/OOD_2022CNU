//  Copyright [2022] <Copyright JangJinYoung>
#include <string>
#include <array>
#include "gtest/gtest.h"
#include "node.h"

template <class T, int N>
std::string PrintIntChildren(const Node<T, N>& n) {
    std::string result = std::to_string((n.value()));
    for (Node<T, N>* child : n.children()) {
        result += std::to_string(child->value());
    }
    return result;
}

template <class T, int N>
std::string PrintStringChildren(const Node<T, N>& n) {
    std::string result = n.value();
    for (Node<T, N>* child : n.children()) {
        result += child->value();
    }
    return result;
}

TEST(Test, TestIntAdd1) {
    Node<int, 2> n1(1);
    Node<int, 2> n2(2);
    Node<int, 2> n3(3);
    Node<int, 2> n4(4);
    Node<int, 2> n5(5);

    n1.AddChild(&n2);
    n1.AddChild(&n3);
    n1.AddChild(&n4);
    n1.AddChild(&n5);

    EXPECT_EQ(PrintIntChildren(n1), "123");
}

TEST(Test, TestIntAdd2) {
    Node<int, 3> n1(1);
    Node<int, 3> n2(2);
    Node<int, 3> n3(3);
    Node<int, 3> n4(4);
    Node<int, 3> n5(5);

    n1.AddChild(&n2);
    n1.AddChild(&n3);
    n1.AddChild(&n4);
    n1.AddChild(&n5);

    EXPECT_EQ(PrintIntChildren(n1), "1234");
}

TEST(Test, TestIntAdd3) {
    Node<int, 4> n1(1);
    Node<int, 4> n2(2);
    Node<int, 4> n3(3);
    Node<int, 4> n4(4);
    Node<int, 4> n5(5);

    n1.AddChild(&n2);
    n1.AddChild(&n3);
    n1.AddChild(&n4);
    n1.AddChild(&n5);

    EXPECT_EQ(PrintIntChildren(n1), "12345");
}

TEST(Test, TestStringAdd1) {
    Node<std::string, 3> s1("what");
    Node<std::string, 3> s2("are");
    Node<std::string, 3> s3("you");
    Node<std::string, 3> s4("looking");
    Node<std::string, 3> s5("for");

    s1.AddChild(&s2);
    s1.AddChild(&s3);
    s1.AddChild(&s4);
    s1.AddChild(&s5);

    EXPECT_EQ(PrintStringChildren(s1), "whatareyoulooking");
}

TEST(Test, TestStringAdd2) {
    Node<std::string, 4> s1("what");
    Node<std::string, 4> s2("are");
    Node<std::string, 4> s3("you");
    Node<std::string, 4> s4("looking");
    Node<std::string, 4> s5("for");

    s1.AddChild(&s2);
    s1.AddChild(&s3);
    s1.AddChild(&s4);
    s1.AddChild(&s5);

    EXPECT_EQ(PrintStringChildren(s1), "whatareyoulookingfor");
}

TEST(Test, TestStringAdd3) {
    Node<std::string, 5> s1("what");
    Node<std::string, 5> s2("are");
    Node<std::string, 5> s3("you");
    Node<std::string, 5> s4("looking");
    Node<std::string, 5> s5("for");
    Node<std::string, 5> s6("now");

    s1.AddChild(&s2);
    s1.AddChild(&s3);
    s1.AddChild(&s4);
    s1.AddChild(&s5);
    s1.AddChild(&s6);

    EXPECT_EQ(PrintStringChildren(s1), "whatareyoulookingfornow");
}
