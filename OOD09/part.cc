//  Copyright [2022] <Copyright JangJinYoung>
#include "part.h"

Part::Part(std::string factory_name) :
    factory_name_(factory_name) {}

const std::string& Part::factory_name() const {
    return factory_name_;
}
