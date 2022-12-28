//  Copyright [2022] <Copyright JangJinYoung>
#include "gtest/gtest.h"
#include "car_builder.h"
#include "car_parts_factory.h"
#include "car.h"
#include "door.h"
#include "hyundai_parts_factory.h"
#include "kia_parts_factory.h"
#include "part.h"
#include "roof.h"
#include "wheel.h"

TEST(TestHyundai1, HyundaiCar1) {
    CarPartsFactory* factory = HyundaiPartsFactory::GetInstance();

    CarBuilder builder(factory);
    Car* car = builder.CreateDoor()
        .CreateRoof()
        .SetColor("red")
        .Build();
    EXPECT_EQ(car->GetSpec(), "Car([hyundai] Door, [hyundai] Roof, red)");
}

TEST(TestHyundai2, HyundaiCar2) {
    CarPartsFactory* factory = HyundaiPartsFactory::GetInstance();

    CarBuilder builder(factory);
    Car* car = builder.CreateDoor()
        .CreateWheel()
        .CreateRoof()
        .SetColor("white")
        .Build();
    EXPECT_EQ(car->GetSpec(),
        "Car([hyundai] Door, [hyundai] Wheel, [hyundai] Roof, white)");
}


TEST(TestHyundai3, HyundaiCar3) {
    CarPartsFactory* factory = HyundaiPartsFactory::GetInstance();

    CarBuilder builder(factory);
    Car* car = builder.CreateDoor()
        .CreateRoof()
        .Build();
    EXPECT_EQ(car->GetSpec(), "Car([hyundai] Door, [hyundai] Roof, black)");
}

TEST(TestKia1, KiaCar1) {
    CarPartsFactory* factory = KiaPartsFactory::GetInstance();

    CarBuilder builder(factory);
    Car* car = builder.CreateDoor()
        .CreateWheel()
        .CreateRoof()
        .SetColor("blue")
        .Build();
    EXPECT_EQ(car->GetSpec(), "Car([kia] Door, [kia] Wheel, [kia] Roof, blue)");
}
TEST(TestKia2, KiaCar2) {
    CarPartsFactory* factory = KiaPartsFactory::GetInstance();

    CarBuilder builder(factory);
    Car* car = builder.CreateDoor()
        .CreateWheel()
        .SetColor("green")
        .Build();
    EXPECT_EQ(car->GetSpec(), "Car([kia] Door, [kia] Wheel, green)");
}
TEST(TestKia3, KiaCar3) {
    CarPartsFactory* factory = KiaPartsFactory::GetInstance();

    CarBuilder builder(factory);
    Car* car = builder.CreateDoor()
        .CreateRoof()
        .Build();
    EXPECT_EQ(car->GetSpec(), "Car([kia] Door, [kia] Roof, black)");
}
