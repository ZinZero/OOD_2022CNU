//  Copyright [2022] <Copyright JangJinYoung>
#ifndef CNU_CSE_OOD_OOD10_TREE_UTIL_H_
#define CNU_CSE_OOD_OOD10_TREE_UTIL_H_
#include <vector>

class TreeUtil {
 public:
  static TreeUtil* GetInstance();
  const std::vector<const Node*> DepthFirstSearch(const Node* node) const;
  const std::vector<const Node*> BreadthFirstSearch(const Node* node) const;
 private:
  TreeUtil();
  static TreeUtil* instance_;
};

#endif  //  CNU_CSE_OOD_OOD10_TREE_UTIL_H_
