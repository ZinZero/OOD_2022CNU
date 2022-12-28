#include "gtest/gtest.h"
#include "node.h"
#include "tree_util.h"

TEST(TestUtil, IsFullBinaryTree1) {
    Node n1(1, NULL, NULL);
    Node n2(3, &n1, NULL);
    Node n3(2, NULL, &n2);
    Node root(4, &n3, NULL);

    TreeUtil* tree_util = TreeUtil::GetInstance();

    EXPECT_EQ(tree_util->IsFullBinaryTree(root), false);
}

TEST(TestUtil, IsFullBinaryTree2) {
    Node n1(1, NULL, NULL);
    Node n2(3, NULL, NULL);
    Node n3(6, NULL, NULL);
    Node n4(9, NULL, NULL);
    Node n5(2, &n1, &n2);
    Node n6(8, &n3, &n4);
    Node root(5, &n5, &n6);

    TreeUtil* tree_util = TreeUtil::GetInstance();

    EXPECT_EQ(tree_util->IsFullBinaryTree(root), true);
}

TEST(TestUtil, IsFullBinaryTree3) {
    Node n1(1, NULL, NULL);
    Node n2(3, NULL, NULL);
    Node n3(7, NULL, NULL);
    Node n4(9, NULL, NULL);
    Node n5(12, NULL, NULL);
    Node n6(17, NULL, NULL);
    Node n7(2, &n1, &n2);
    Node n8(8, &n3, &n4);
    Node n9(13, &n5, &n6);
    Node n10(20, NULL, NULL);
    Node n11(6, &n7, &n8);
    Node n12(15, &n9, &n10);
    Node root(10, &n11, &n12);
    TreeUtil* tree_util = TreeUtil::GetInstance();

    EXPECT_EQ(tree_util->IsFullBinaryTree(root), true);
}

TEST(TestUtil, IsCompleteBinaryTree1) {
    Node n1(1, NULL, NULL);
    Node n2(3, &n1, NULL);
    Node n3(2, NULL, &n2);
    Node root(4, &n3, NULL);

    TreeUtil* tree_util = TreeUtil::GetInstance();

    EXPECT_EQ(tree_util->IsCompleteBinaryTree(root), false);
}

TEST(TestUtil, IsCompleteBinaryTree2) {
    Node n1(1, NULL, NULL);
    Node n2(3, NULL, NULL);
    Node n3(6, NULL, NULL);
    Node n4(9, NULL, NULL);
    Node n5(2, &n1, &n2);
    Node n6(8, &n3, &n4);
    Node root(5, &n5, &n6);

    TreeUtil* tree_util = TreeUtil::GetInstance();

    EXPECT_EQ(tree_util->IsCompleteBinaryTree(root), true);
}

TEST(TestUtil, IsCompleteBinaryTree3) {
    Node n1(1, NULL, NULL);
    Node n2(3, NULL, NULL);
    Node n3(7, NULL, NULL);
    Node n4(9, NULL, NULL);
    Node n5(12, NULL, NULL);
    Node n6(17, NULL, NULL);
    Node n7(2, &n1, &n2);
    Node n8(8, &n3, &n4);
    Node n9(13, &n5, &n6);
    Node n10(20, NULL, NULL);
    Node n11(6, &n7, &n8);
    Node n12(15, &n9, &n10);
    Node root(10, &n11, &n12);
    TreeUtil* tree_util = TreeUtil::GetInstance();

    EXPECT_EQ(tree_util->IsCompleteBinaryTree(root), true);
}

TEST(TestUtil, IsBinarySearchTree1) {
    Node n1(1, NULL, NULL);
    Node n2(3, &n1, NULL);
    Node n3(2, NULL, &n2);
    Node root(4, &n3, NULL);

    TreeUtil* tree_util = TreeUtil::GetInstance();

    EXPECT_EQ(tree_util->IsBinarySearchTree(root), true);
}

TEST(TestUtil, IsBinarySearchTree2) {
    Node n1(1, NULL, NULL);
    Node n2(3, NULL, NULL);
    Node n3(6, NULL, NULL);
    Node n4(9, NULL, NULL);
    Node n5(2, &n1, &n2);
    Node n6(8, &n3, &n4);
    Node root(5, &n5, &n6);

    TreeUtil* tree_util = TreeUtil::GetInstance();

    EXPECT_EQ(tree_util->IsBinarySearchTree(root), true);
}

TEST(TestUtil, IsBinarySearchTree3) {
    Node n1(1, NULL, NULL);
    Node n2(3, NULL, NULL);
    Node n3(7, NULL, NULL);
    Node n4(9, NULL, NULL);
    Node n5(12, NULL, NULL);
    Node n6(17, NULL, NULL);
    Node n7(2, &n1, &n2);
    Node n8(8, &n3, &n4);
    Node n9(13, &n5, &n6);
    Node n10(20, NULL, NULL);
    Node n11(6, &n7, &n8);
    Node n12(15, &n9, &n10);
    Node root(10, &n11, &n12);
    TreeUtil* tree_util = TreeUtil::GetInstance();

    EXPECT_EQ(tree_util->IsBinarySearchTree(root), true);
}
