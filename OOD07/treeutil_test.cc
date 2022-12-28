#include "gtest/gtest.h"
#include "node.h"
#include "int_node.h"
#include "string_node.h"
#include "tree_util.h"

TEST(TestPre, PreOrderTraversalTest1) {
    IntNode in1(nullptr, nullptr, 1);
    IntNode in2(nullptr, nullptr, 22);
    StringNode sn1(&in1, &in2, "Tree");
    IntNode in3(nullptr, nullptr, 12);
    IntNode root(&sn1, &in3, 10);

    TreeUtil* tree_util = TreeUtil::GetInstance();

    EXPECT_EQ(tree_util->PreOrderTraversal(&root),
    "10,Tree,1,22,12");
}

TEST(TestPre, PreOrderTraversalTest2) {
    StringNode sn1(nullptr, nullptr, "OOD");
    StringNode sn2(nullptr, nullptr, "SYSP");
    IntNode in1(&sn1, &sn2, 3);
    IntNode in2(nullptr, nullptr, 7);
    StringNode sn3(nullptr, nullptr, "WEBP");
    StringNode sn4(nullptr, nullptr, "Algorithm");
    IntNode in3(&sn3, &sn4, 5);
    StringNode sn5(&in1, &in2, "CS");
    IntNode root(&sn5, &in3, 10);

    TreeUtil* tree_util = TreeUtil::GetInstance();

    EXPECT_EQ(tree_util->PreOrderTraversal(&root),
    "10,CS,3,OOD,SYSP,7,5,WEBP,Algorithm");
}

TEST(TestPre, PreOrderTraversalTest3) {
    IntNode in1(nullptr, nullptr, 3);
    IntNode in2(nullptr, nullptr, 7);
    StringNode sn1(nullptr, nullptr, "hello");
    StringNode sn2(nullptr, nullptr, "world");
    StringNode sn3(&in1, &in2, "here");
    IntNode in3(&sn1, &sn2, 7);
    IntNode root(&sn3, &in3, 10);

    TreeUtil* tree_util = TreeUtil::GetInstance();

    EXPECT_EQ(tree_util->PreOrderTraversal(&root),
    "10,here,3,7,7,hello,world");
}

TEST(TestIn, InOrderTraversalTest1) {
    IntNode in1(nullptr, nullptr, 1);
    IntNode in2(nullptr, nullptr, 22);
    StringNode sn1(&in1, &in2, "Tree");
    IntNode in3(nullptr, nullptr, 12);
    IntNode root(&sn1, &in3, 10);

    TreeUtil* tree_util = TreeUtil::GetInstance();

    EXPECT_EQ(tree_util->InOrderTraversal(&root),
    "1,Tree,22,10,12");
}

TEST(TestIn, InOrderTraversalTest2) {
    StringNode sn1(nullptr, nullptr, "OOD");
    StringNode sn2(nullptr, nullptr, "SYSP");
    IntNode in1(&sn1, &sn2, 3);
    IntNode in2(nullptr, nullptr, 7);
    StringNode sn3(nullptr, nullptr, "WEBP");
    StringNode sn4(nullptr, nullptr, "Algorithm");
    IntNode in3(&sn3, &sn4, 5);
    StringNode sn5(&in1, &in2, "CS");
    IntNode root(&sn5, &in3, 10);

    TreeUtil* tree_util = TreeUtil::GetInstance();

    EXPECT_EQ(tree_util->InOrderTraversal(&root),
    "OOD,3,SYSP,CS,7,10,WEBP,5,Algorithm");
}

TEST(TestIn, InOrderTraversalTest3) {
    IntNode in1(nullptr, nullptr, 3);
    IntNode in2(nullptr, nullptr, 7);
    StringNode sn1(nullptr, nullptr, "hello");
    StringNode sn2(nullptr, nullptr, "world");
    StringNode sn3(&in1, &in2, "here");
    IntNode in3(&sn1, &sn2, 7);
    IntNode root(&sn3, &in3, 10);

    TreeUtil* tree_util = TreeUtil::GetInstance();

    EXPECT_EQ(tree_util->InOrderTraversal(&root),
    "3,here,7,10,hello,7,world");
}

TEST(TestPost, PostOrderTraversalTest1) {
    IntNode in1(nullptr, nullptr, 1);
    IntNode in2(nullptr, nullptr, 22);
    StringNode sn1(&in1, &in2, "Tree");
    IntNode in3(nullptr, nullptr, 12);
    IntNode root(&sn1, &in3, 10);

    TreeUtil* tree_util = TreeUtil::GetInstance();

    EXPECT_EQ(tree_util->PostOrderTraversal(&root),
    "1,22,Tree,12,10");
}

TEST(TestPost, PostOrderTraversalTest2) {
    StringNode sn1(nullptr, nullptr, "OOD");
    StringNode sn2(nullptr, nullptr, "SYSP");
    IntNode in1(&sn1, &sn2, 3);
    IntNode in2(nullptr, nullptr, 7);
    StringNode sn3(nullptr, nullptr, "WEBP");
    StringNode sn4(nullptr, nullptr, "Algorithm");
    IntNode in3(&sn3, &sn4, 5);
    StringNode sn5(&in1, &in2, "CS");
    IntNode root(&sn5, &in3, 10);

    TreeUtil* tree_util = TreeUtil::GetInstance();

    EXPECT_EQ(tree_util->PostOrderTraversal(&root),
    "OOD,SYSP,3,7,CS,WEBP,Algorithm,5,10");
}

TEST(TestPost, PostOrderTraversalTest3) {
    IntNode in1(nullptr, nullptr, 3);
    IntNode in2(nullptr, nullptr, 7);
    StringNode sn1(nullptr, nullptr, "hello");
    StringNode sn2(nullptr, nullptr, "world");
    StringNode sn3(&in1, &in2, "here");
    IntNode in3(&sn1, &sn2, 7);
    IntNode root(&sn3, &in3, 10);

    TreeUtil* tree_util = TreeUtil::GetInstance();

    EXPECT_EQ(tree_util->PostOrderTraversal(&root),
    "3,7,here,hello,world,7,10");
}

TEST(TestPost, Tostring1) {
    IntNode in1(nullptr, nullptr, 1);
    IntNode in2(nullptr, nullptr, 22);
    StringNode sn1(&in1, &in2, "Tree");
    IntNode in3(nullptr, nullptr, 12);
    IntNode root(&sn1, &in3, 10);

    TreeUtil* tree_util = TreeUtil::GetInstance();

    EXPECT_EQ(tree_util->ToString(&root),
    "IntNode(10, StringNode(Tree, IntNode(1, NULL, NULL), IntNode(22, NULL, NULL)), IntNode(12, NULL, NULL))");
}

TEST(TestPost, Tostring2) {
    StringNode sn1(nullptr, nullptr, "OOD");
    StringNode sn2(nullptr, nullptr, "SYSP");
    IntNode in1(&sn1, &sn2, 3);
    IntNode in2(nullptr, nullptr, 7);
    StringNode sn3(nullptr, nullptr, "WEBP");
    StringNode sn4(nullptr, nullptr, "Algorithm");
    IntNode in3(&sn3, &sn4, 5);
    StringNode sn5(&in1, &in2, "CS");
    IntNode root(&sn5, &in3, 10);

    TreeUtil* tree_util = TreeUtil::GetInstance();

    EXPECT_EQ(tree_util->ToString(&root),
    "IntNode(10, StringNode(CS, IntNode(3, StringNode(OOD, NULL, NULL), StringNode(SYSP, NULL, NULL)), IntNode(7, NULL, NULL)), IntNode(5, StringNode(WEBP, NULL, NULL), StringNode(Algorithm, NULL, NULL)))");
}

TEST(TestPost, ToString3) {
    IntNode in1(nullptr, nullptr, 3);
    IntNode in2(nullptr, nullptr, 7);
    StringNode sn1(nullptr, nullptr, "hello");
    StringNode sn2(nullptr, nullptr, "world");
    StringNode sn3(&in1, &in2, "here");
    IntNode in3(&sn1, &sn2, 7);
    IntNode root(&sn3, &in3, 10);
    TreeUtil* tree_util = TreeUtil::GetInstance();
    EXPECT_EQ(tree_util->ToString(&root),
        "IntNode(10, StringNode(here, IntNode(3, NULL, NULL), IntNode(7, NULL, NULL)), IntNode(7, StringNode(hello, NULL, NULL), StringNode(world, NULL, NULL)))");
}
