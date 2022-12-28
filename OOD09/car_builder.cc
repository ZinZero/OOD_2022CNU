//  Copyright [2022] <Copyright JangJinYoung>
#include "car_builder.h"

CarBuilder::CarBuilder(CarPartsFactory* factory) :
    factory_(factory), door_(nullptr), wheel_(nullptr),
    roof_(nullptr), color_("black") {}

CarBuilder& CarBuilder::CreateDoor() {
    door_ = factory_->CreateDoor();
    return *this;
}

CarBuilder& CarBuilder::CreateWheel() {
    wheel_ = factory_->CreateWheel();
    return *this;
}

CarBuilder& CarBuilder::CreateRoof() {
    roof_ = factory_->CreateRoof();
    return *this;
}

CarBuilder& CarBuilder::SetColor(std::string color) {
    color_ = color;
    return *this;
}

Car* CarBuilder::Build() {
    Car* temp_car = new Car(door_, wheel_, roof_, color_);
    door_ = nullptr;
    wheel_ = nullptr;
    roof_ = nullptr;
    color_ = "black";
    
    return temp_car;
}
