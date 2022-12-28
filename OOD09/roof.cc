//  Copyright [2022] <Copyright JangJinYoung>
#include <string>
#include "roof.h"

Roof::Roof(std::string factory_name) :
    Part::Part(factory_name) {}

std::string Roof::GetInfo() const {
    return "[" + Part::factory_name() + "] Roof, ";
}
