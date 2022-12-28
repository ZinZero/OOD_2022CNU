#include <iostream>
#include <string>
#include "node.h"

Node::Node(int value, Node* left, Node* right):
    value_(value), left_(left), right_(right) {}


const int Node::value() const {
    return value_;
}

const Node* Node::left() const {
    return left_;
}

const Node* Node::right() const {
    return right_;
}

std::string Node::ToString() const {
    std::string str = std::to_string(value());
    return "NODE(" + str +", " + ((left() == NULL) ? "NULL" :
        left() -> ToString()) + ", " + ((right() == NULL) ? "NULL" :
        right() -> ToString()) + ")";
}
