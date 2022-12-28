//  Copyright [2022] <Copyright JangJinYoung>
#ifndef CNU_CSE_OOD_OOD10_HYUNDAI_PARTS_FACTORY_H_
#define CNU_CSE_OOD_OOD10_HYUNDAI_PARTS_FACTORY_H_
#include "part.h"
#include "car_parts_factory.h"

class HyundaiPartsFactory : public CarPartsFactory {
 public:
  static HyundaiPartsFactory* GetInstance();
  Part* CreateDoor() const override;
  Part* CreateWheel() const override;
  Part* CreateRoof() const override;
 private:
  HyundaiPartsFactory();
  static HyundaiPartsFactory* instance_;
};

#endif  //  CNU_CSE_OOD_OOD10_HYUNDAI_PARTS_FACTORY_H_
