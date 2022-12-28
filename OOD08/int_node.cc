#include "node.h"
#include "int_node.h"
#include <string>

IntNode::IntNode(
        const Node* left, const Node* right, const int value)
        : Node(left, right), value_(value) {}

std::string IntNode::value() const {
    std::string str_int = std::to_string(value_);
    return str_int;
}

std::string IntNode::ToString() const {
    std::string str = this->value();
    return "IntNode(" + str + ", " +
        ((this->left() == NULL) ? "NULL" : (this->left()->ToString())) + ", " +
        ((this->right() == NULL) ? "NULL" : (this->right()->ToString())) + ")";
}
