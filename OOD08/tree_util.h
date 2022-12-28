#ifndef CNU_CSE_OOD_OOD07_TREE_UTIL_H_
#define CNU_CSE_OOD_OOD07_TREE_UTIL_H_
#include <string>

class TreeUtil {
 public:
  static TreeUtil* GetInstance();
  const std::string ToString(const Node* node) const;
  const std::string PreOrderTraversal(const Node* node) const;
  const std::string InOrderTraversal(const Node* node) const;
  const std::string PostOrderTraversal(const Node* node) const;
 private:
  TreeUtil();
  static TreeUtil* instance_;
};

#endif  //  CNU_CSE_OOD_OOD07_TREE_UTIL_H_
