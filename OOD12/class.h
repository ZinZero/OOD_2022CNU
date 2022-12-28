#ifndef CNU_CSE_OOD_OOD12_CLASS_H_
#define CNU_CSE_OOD_OOD12_CLASS_H_
#include <string>
#include <set>
#include "class_info.h"
#include "student.h"

class Class {
 public:
  explicit Class(const ClassInfo& info);
  void Register(const Student& student);
  const std::string GetInfo() const;
 private:
  const ClassInfo info_;
  std::set<const Student, StudentComparator> registered_student_;
};

#endif  //  CNU_CSE_OOD_OOD12_CLASS_H_
