//  Copyright [2022] <Copyright JangJinYoung>
#ifndef CNU_CSE_OOD_OOD10_CAR_BUILDER_H_
#define CNU_CSE_OOD_OOD10_CAR_BUILDER_H_
#include <string>
#include "car_parts_factory.h"
#include "part.h"
#include "car.h"

class CarBuilder {
 public:
  explicit CarBuilder(CarPartsFactory* factory);
  CarBuilder& CreateDoor();
  CarBuilder& CreateWheel();
  CarBuilder& CreateRoof();
  CarBuilder& SetColor(std::string color);
  Car* Build();
 private:
  Part* door_;
  Part* wheel_;
  Part* roof_;
  std::string color_;
  const CarPartsFactory* factory_;
};

#endif  //  CNU_CSE_OOD_OOD10_CAR_BUILDER_H_
