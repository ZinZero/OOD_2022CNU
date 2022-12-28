//  Copyright [2022] <Copyright JangJinYoung>
#ifndef CNU_CSE_OOD_OOD10_WHEEL_H_
#define CNU_CSE_OOD_OOD10_WHEEL_H_
#include <string>
#include "part.h"

class Wheel : public Part {
 public:
  explicit Wheel(std::string factory_name);
  std::string GetInfo() const override;
};

#endif  //  CNU_CSE_OOD_OOD10_WHEEL_H_
