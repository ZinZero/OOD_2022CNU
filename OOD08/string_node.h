#ifndef _STRING_NODE_H_
#define _STRING_NODE_H_
#include <string>
#include "node.h"

class StringNode : public Node {
 public:
  StringNode(const Node* left, const Node* right, const std::string value);
  std::string value() const;
  std::string ToString() const;
 private:
  const std::string value_;
};

#endif  //  _STRING_NODE_H_
