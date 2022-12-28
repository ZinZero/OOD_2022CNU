//  Copyright [2022] <Copyright JangJinYoung>
#ifndef CNU_CSE_OOD_OOD10_KIA_PARTS_FACTORY_H_
#define CNU_CSE_OOD_OOD10_KIA_PARTS_FACTORY_H_
#include "part.h"
#include "car_parts_factory.h"

class KiaPartsFactory : public CarPartsFactory {
 public:
  static KiaPartsFactory* GetInstance();
  Part* CreateDoor() const override;
  Part* CreateWheel() const override;
  Part* CreateRoof() const override;
 private:
  KiaPartsFactory();
  static KiaPartsFactory* instance_;
};

#endif  //  CNU_CSE_OOD_OOD10_KIA_PARTS_FACTORY_H_
