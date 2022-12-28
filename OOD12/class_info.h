#ifndef CNU_CSE_OOD_OOD12_CLASS_INFO_H_
#define CNU_CSE_OOD_OOD12_CLASS_INFO_H_
#include <string>

class ClassInfoComparator;

class ClassInfo {
 public:
  explicit ClassInfo(int class_id, const std::string& name);
  const std::string GetInfo() const;
 private:
  const int class_id_;
  const std::string name_;
  friend ClassInfoComparator;
};

class ClassInfoComparator {
 public:
  int operator() (const ClassInfo& info1, const ClassInfo& info2) const;
};

#endif  //  CNU_CSE_OOD_OOD12_CLASS_INFO_H_
