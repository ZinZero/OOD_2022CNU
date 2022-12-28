//  Copyright [2022] <Copyright JangJinYoung>
#ifndef CNU_CSE_OOD_OOD10_DOOR_H_
#define CNU_CSE_OOD_OOD10_DOOR_H_
#include <string>
#include "part.h"

class Door : public Part {
 public:
  explicit Door(std::string factory_name);
  std::string GetInfo() const override;
};

#endif  //  CNU_CSE_OOD_OOD10_DOOR_H_
