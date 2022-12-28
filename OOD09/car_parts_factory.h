//  Copyright [2022] <Copyright JangJinYoung>
#ifndef CNU_CSE_OOD_OOD10_CAR_PARTS_FACTORY_H_
#define CNU_CSE_OOD_OOD10_CAR_PARTS_FACTORY_H_
#include "part.h"

class CarPartsFactory {
 public:
  virtual Part* CreateDoor() const = 0;
  virtual Part* CreateWheel() const = 0;
  virtual Part* CreateRoof() const = 0;
};
#endif  //  CNU_CSE_OOD_OOD10_CAR_PARTS_FACTORY_H_
