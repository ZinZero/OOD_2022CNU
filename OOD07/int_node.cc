#include "node.h"
#include "int_node.h"

IntNode::IntNode(
        const Node* left, const Node* right, const int value)
        : Node(left, right), value_(value) {}

const int IntNode::value() const {
    return value_;
}
