//  Copyright [2022] <Copyright JangJinYoung>
#include <string>
#include "node.h"
#include "string_node.h"

StringNode::StringNode(
    const Node* left, const Node* right, const std::string value)
    : Node(left, right), value_(value) {}

std::string StringNode::value() const {
    return value_;
}
