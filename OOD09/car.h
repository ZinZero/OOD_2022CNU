//  Copyright [2022] <Copyright JangJinYoung>
#ifndef CNU_CSE_OOD_OOD10_CAR_H_
#define CNU_CSE_OOD_OOD10_CAR_H_
#include <string>
#include "part.h"

class CarBuilder;

class Car {
 public:
  std::string GetSpec();
 private:
  Car(Part* door, Part* wheel, Part* roof, std::string color);
  const Part* door_;
  const Part* wheel_;
  const Part* roof_;
  const std::string color_;
  friend CarBuilder;
};

#endif  //  CNU_CSE_OOD_OOD10_CAR_H_
