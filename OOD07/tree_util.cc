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

const std::string TreeUtil::ToString(const Node* node) const {
    if (const IntNode* int_node = dynamic_cast<const IntNode*>(node)) {
        std::string str = std::to_string(int_node->value());
        return "IntNode(" + str + ", " + ((int_node->left() == NULL) ?
                "NULL" : ToString(int_node->left()))
                + ", " + ((int_node->right() == NULL) ?
                "NULL" : ToString(int_node->right())) + ")";
    } else if (const StringNode* string_node =
        dynamic_cast<const StringNode*>(node)) {
        std::string str2 = string_node->value();
        return "StringNode(" + str2 + ", " + ((string_node->left() == NULL) ?
                "NULL" : ToString(string_node->left()))
                + ", " + ((string_node->right() == NULL) ?
                "NULL" : ToString(string_node->right())) + ")";
    }
    return 0;
}
const std::string TreeUtil::PreOrderTraversal(const Node* node) const {
    std::string result ="";
    if (const IntNode* int_node = dynamic_cast<const IntNode*>(node)) {
        result = std::to_string(int_node->value());
        if (int_node->left() != NULL) {
            result += "," + PreOrderTraversal(int_node->left());
        }
        if (int_node->right() != NULL) {
            result += "," + PreOrderTraversal(int_node->right());
        }
    } else if (const StringNode* string_node =
        dynamic_cast<const StringNode*>(node)) {
        result = string_node->value();
        if (string_node->left() != NULL) {
            result += "," + PreOrderTraversal(string_node->left());
        }
        if (string_node->right() != NULL) {
            result += "," + PreOrderTraversal(string_node->right());
        }
    }
    return result;
}

const std::string TreeUtil::InOrderTraversal(const Node* node) const {
    std::string result = "";
    if (const IntNode* int_node = dynamic_cast<const IntNode*>(node)) {
        if (int_node->left() != NULL) {
      result += InOrderTraversal(int_node->left()) + ",";
        }
        result += std::to_string(int_node->value());
        if (int_node->right() != NULL) {
            result += "," + InOrderTraversal(int_node->right());
        }
        } else if (const StringNode* string_node =
            dynamic_cast<const StringNode*>(node)) {
            if (string_node->left() != NULL) {
            result += InOrderTraversal(string_node->left()) + ",";
            }
            result += string_node->value();
            if (string_node->right() != NULL) {
            result += "," + InOrderTraversal(string_node->right());
            }
        }
    return result;
}

const std::string TreeUtil::PostOrderTraversal(const Node* node) const {
  std::string result = "";
    if (const IntNode* int_node
    = dynamic_cast<const IntNode*>(node)) {
        if (int_node->left() != NULL) {
            result += PostOrderTraversal(int_node->left()) + ",";
        }
        if (int_node->right() != NULL) {
            result += PostOrderTraversal(int_node->right()) + ",";
        }
        result += std::to_string(int_node->value());
    } else if (const StringNode* string_node =
        dynamic_cast<const StringNode*>(node)) {
        if (string_node->left() != NULL) {
            result += PostOrderTraversal(string_node->left()) + ",";
        }
        if (string_node->right() != NULL) {
            result += PostOrderTraversal(string_node->right()) + ",";
        }
        result += string_node->value();
    }
    return result;
}
