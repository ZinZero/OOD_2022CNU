#ifndef _INT_NODE_H_
#define _INT_NODE_H_
#include "node.h"
#include <string>

class IntNode : public Node {
 public:
  IntNode(const Node* left, const Node* right, const int value);
  std::string value() const;
  std::string ToString() const;
 private:
  const int value_;
};

#endif  //  _INT_NODE_H_
