//  Copyright [2022] <Copyright JangJinYoung>
#ifndef CNU_CSE_OOD_OOD10_INT_NODE_H_
#define CNU_CSE_OOD_OOD10_INT_NODE_H_
#include <string>
#include "node.h"

class IntNode : public Node {
 public:
  IntNode(const Node* left, const Node* right, const int value);
  std::string value() const;
 private:
  const int value_;
};

#endif  //  CNU_CSE_OOD_OOD10_INT_NODE_H_
