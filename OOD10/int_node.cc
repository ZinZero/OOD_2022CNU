//  Copyright [2022] <Copyright JangJinYoung>
#include <string>
#include "node.h"
#include "int_node.h"

IntNode::IntNode(
        const Node* left, const Node* right, const int value)
        : Node(left, right), value_(value) {}

std::string IntNode::value() const {
    std::string str_int = std::to_string(value_);
    return str_int;
}
