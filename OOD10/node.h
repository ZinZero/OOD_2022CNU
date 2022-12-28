//  Copyright [2022] <Copyright JangJinYoung>
#ifndef CNU_CSE_OOD_OOD10_NODE_H_
#define CNU_CSE_OOD_OOD10_NODE_H_
#include <string>

class Node {
 public:
  Node(const Node* left, const Node* right);
  const Node* left() const;
  const Node* right() const;
  virtual std::string value() const = 0;
 private:
  const Node* left_;
  const Node* right_;
};

#endif  //  CNU_CSE_OOD_OOD10_NODE_H_
