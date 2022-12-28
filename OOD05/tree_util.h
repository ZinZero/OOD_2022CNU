#ifndef CNU_CSE_OOD_OOD05_TREE_UTIL_H_
#define CNU_CSE_OOD_OOD05_TREE_UTIL_H_
#include "node.h"

class TreeUtil {
 public:
  static TreeUtil* GetInstance();
  bool IsFullBinaryTree(const Node& n) const;
  bool IsCompleteBinaryTree(const Node& n) const;
  bool IsBinarySearchTree(const Node& n) const;
 private:
  TreeUtil();
  static TreeUtil* instance_;
};

#endif  // CNU_CSE_OOD_OOD05_TREE_UTIL_H_
