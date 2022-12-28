#ifndef CNU_CSE_OOD_OOD07_INT_NODE_H_
#define CNU_CSE_OOD_OOD07_INT_NODE_H_
#include "node.h"

class IntNode : public Node {
 public:
  IntNode(const Node* left, const Node* right, const int value);
  const int value() const;
 private:
  const int value_;
};

#endif  //  CNU_CSE_OOD_OOD07_INT_NODE_H_
