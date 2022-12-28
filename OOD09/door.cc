//  Copyright [2022] <Copyright JangJinYoung>
#include <string>
#include "door.h"

Door::Door(std::string factory_name) :
    Part::Part(factory_name) {}

std::string Door::GetInfo() const {
    return "[" + Part::factory_name() + "] Door, ";
}
