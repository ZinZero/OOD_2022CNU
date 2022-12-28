#include <string>
#include "node.h"
#include "string_node.h"

StringNode::StringNode(
    const Node* left, const Node* right, const std::string value)
    : Node(left, right), value_(value) {}

std::string StringNode::value() const {
    return value_;
}

std::string StringNode::ToString() const {
    return "StringNode(" + this->value() + ", " +
    ((this->left() == NULL) ? "NULL" : (this->left()->ToString())) + ", " +
    ((this->right() == NULL) ? "NULL" : (this->right()->ToString())) + ")";
}
