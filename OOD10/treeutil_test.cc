//  Copyright [2022] <Copyright JangJinYoung>
#include <vector>
#include <string>
#include "gtest/gtest.h"
#include "node.h"
#include "int_node.h"
#include "string_node.h"
#include "tree_util.h"

TEST(TestDFS, DepthFirstSearch1) {
    IntNode in1(nullptr, nullptr, 1);
    IntNode in2(nullptr, nullptr, 22);
    StringNode sn1(&in1, &in2, "Tree");
    IntNode in3(nullptr, nullptr, 12);
    IntNode root(&sn1, &in3, 10);

    TreeUtil* tree_util = TreeUtil::GetInstance();
    std::string result = "";
    std::vector<const Node*> dfs_result = tree_util->DepthFirstSearch(&root);

    for (const Node* n : dfs_result) {
        result += n->value() + " ";
    }

    EXPECT_EQ(result, "10 Tree 1 22 12 ");
}

TEST(TestDFS, DepthFirstSearch2) {
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
    std::string result = "";
    std::vector<const Node*> dfs_result = tree_util->DepthFirstSearch(&root);

    for (const Node* n : dfs_result) {
        result += n->value() + " ";
    }

    EXPECT_EQ(result, "10 CS 3 OOD SYSP 7 5 WEBP Algorithm ");
}

TEST(TestDFS, DepthFirstSearch3) {
    IntNode in1(nullptr, nullptr, 3);
    IntNode in2(nullptr, nullptr, 7);
    StringNode sn1(nullptr, nullptr, "hello");
    StringNode sn2(nullptr, nullptr, "world");
    StringNode sn3(&in1, &in2, "here");
    IntNode in3(&sn1, &sn2, 6);
    IntNode root(&sn3, &in3, 10);

    TreeUtil* tree_util = TreeUtil::GetInstance();
    std::string result = "";
    std::vector<const Node*> dfs_result = tree_util->DepthFirstSearch(&root);

    for (const Node* n : dfs_result) {
        result += n->value() + " ";
    }

    EXPECT_EQ(result, "10 here 3 7 6 hello world ");
}

TEST(TestBFS, BreadthFirstSearch1) {
    IntNode in1(nullptr, nullptr, 1);
    IntNode in2(nullptr, nullptr, 22);
    StringNode sn1(&in1, &in2, "Tree");
    IntNode in3(nullptr, nullptr, 12);
    IntNode root(&sn1, &in3, 10);

    TreeUtil* tree_util = TreeUtil::GetInstance();
    std::string result = "";
    std::vector<const Node*> bfs_result = tree_util->BreadthFirstSearch(&root);

    for (const Node* n : bfs_result) {
        result += n->value() + " ";
    }

    EXPECT_EQ(result, "10 Tree 12 1 22 ");
}

TEST(TestBFS, BreadthFirstSearch2) {
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
    std::string result = "";
    std::vector<const Node*> bfs_result = tree_util->BreadthFirstSearch(&root);

    for (const Node* n : bfs_result) {
        result += n->value() + " ";
    }

    EXPECT_EQ(result, "10 CS 5 3 7 WEBP Algorithm OOD SYSP ");
}

TEST(TestBFS, BreadthFirstSearch3) {
    IntNode in1(nullptr, nullptr, 3);
    IntNode in2(nullptr, nullptr, 7);
    StringNode sn1(nullptr, nullptr, "hello");
    StringNode sn2(nullptr, nullptr, "world");
    StringNode sn3(&in1, &in2, "here");
    IntNode in3(&sn1, &sn2, 6);
    IntNode root(&sn3, &in3, 10);

    TreeUtil* tree_util = TreeUtil::GetInstance();
    std::string result = "";
    std::vector<const Node*> bfs_result = tree_util->BreadthFirstSearch(&root);

    for (const Node* n : bfs_result) {
        result += n->value() + " ";
    }

    EXPECT_EQ(result, "10 here 6 3 7 hello world ");
}
