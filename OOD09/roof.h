//  Copyright [2022] <Copyright JangJinYoung>
#ifndef CNU_CSE_OOD_OOD10_ROOF_H_
#define CNU_CSE_OOD_OOD10_ROOF_H_
#include <string>
#include "part.h"

class Roof : public Part {
 public:
  explicit Roof(std::string factory_name);
  std::string GetInfo() const override;
};

#endif  //  CNU_CSE_OOD_OOD10_ROOF_H_
