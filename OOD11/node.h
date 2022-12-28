//  Copyright [2022] <Copyright JangJinYoung>
#ifndef CNU_CSE_OOD_OOD11_NODE_H_
#define CNU_CSE_OOD_OOD11_NODE_H_
#include <array>
#include <string>

template<class T, int N>
class Node {
 public:
  explicit Node(const T value) : value_(value), num_of_child_(0) {}
  bool AddChild(Node<T, N>* n) {
      num_of_child_ = this->num_of_child_;
      if (num_of_child_ < children_.max_size()) {
          children_.at(num_of_child_) = n;
          num_of_child_++;
          return 1;
      } else {
        return 0;
      }
  }
  const T value() const {
      return value_;
  }
  const std::array<Node<T, N>*, N>& children() const {
      return children_;
  }

 private:
  const T value_;
  std::array<Node<T, N>*, N> children_;
  int num_of_child_;
};

#endif  //  CNU_CSE_OOD_OOD11_NODE_H_
