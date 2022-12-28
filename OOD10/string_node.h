//  Copyright [2022] <Copyright JangJinYoung>
#ifndef CNU_CSE_OOD_OOD10_STRING_NODE_H_
#define CNU_CSE_OOD_OOD10_STRING_NODE_H_
#include <string>
#include "node.h"

class StringNode : public Node {
 public:
  StringNode(const Node* left, const Node* right, const std::string value);
  std::string value() const;
 private:
  const std::string value_;
};

#endif  //  CNU_CSE_OOD_OOD10_STRING_NODE_H_
