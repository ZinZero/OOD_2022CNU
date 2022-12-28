#include <iostream>
#include <string>
#include "node.h"
#include "tree_util.h"
#include "int_node.h"
#include "string_node.h"

TreeUtil::TreeUtil() {}
TreeUtil* TreeUtil::instance_ = NULL;

TreeUtil* TreeUtil::GetInstance() {
    if (instance_ == NULL) {
        instance_ = new TreeUtil;
    }
    return instance_;
}


const std::string TreeUtil::PreOrderTraversal(const Node* node) const {
    std::string result ="";
        result = node->value();
        if (node->left() != NULL) {
            result += "," + PreOrderTraversal(node->left());
        }
        if (node->right() != NULL) {
            result += "," + PreOrderTraversal(node->right());
        }
    return result;
}

const std::string TreeUtil::InOrderTraversal(const Node* node) const {
    std::string result = "";
        if (node->left() != NULL) {
      result += InOrderTraversal(node->left()) + ",";
        }
        result += node->value();
        if (node->right() != NULL) {
            result += "," + InOrderTraversal(node->right());
        }
    return result;
}

const std::string TreeUtil::PostOrderTraversal(const Node* node) const {
  std::string result = "";
        if (node->left() != NULL) {
            result += PostOrderTraversal(node->left()) + ",";
        }
        if (node->right() != NULL) {
            result += PostOrderTraversal(node->right()) + ",";
        }
        result += node->value();
    return result;
}
