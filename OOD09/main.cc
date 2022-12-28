//  Copyright [2022] <Copyright JangJinYoung>
#include <iostream>
#include <string>
#include "car_builder.h"
#include "car.h"
#include "car_parts_factory.h"
#include "hyundai_parts_factory.h"
#include "kia_parts_factory.h"

int main() {
    CarPartsFactory* factory1 = HyundaiPartsFactory::GetInstance();
    CarPartsFactory* factory2 = KiaPartsFactory::GetInstance();

    CarBuilder builder1(factory1);
    Car* car1 = builder1.CreateDoor()
        .CreateRoof()
        .SetColor("red")
        .Build();
    
    CarBuilder builder2(factory1);
    Car* car2 = builder2.CreateDoor()
        .Build();

    CarBuilder builder3(factory2);
    Car* car3 = builder3.CreateRoof()
        .CreateDoor()
        .CreateWheel()
        .SetColor("white")
        .Build();

    CarBuilder builder4(factory2);
    Car* car4 = builder4.SetColor("gray")
        .Build();

    std::cout << car1->GetSpec() << std::endl;
    std::cout << car2->GetSpec() << std::endl;
    std::cout << car3->GetSpec() << std::endl;
    std::cout << car4->GetSpec() << std::endl;

    return 0;
}
