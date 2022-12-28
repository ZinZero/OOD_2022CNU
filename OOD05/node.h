#ifndef CNU_CSE_OOD_OOD05_NODE_H_
#define CNU_CSE_OOD_OOD05_NODE_H_
#include <string>

class Node {
 public:
  explicit Node(int value, Node* left, Node* right);
  const int value() const;
  const Node* left() const;
  const Node* right() const;
  std::string ToString() const;
 private:
  const int value_;
  const Node* left_;
  const Node* right_;
};

#endif  //  CNU_CSE_OOD_OOD05_NODE_H_
