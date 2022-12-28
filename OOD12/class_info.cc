#include <string>
#include "class_info.h"

ClassInfo::ClassInfo(int class_id, const std::string& name) :
    class_id_(class_id), name_(name) {}

const std::string ClassInfo::GetInfo() const {
    std::string result = "CLASS[" + std::to_string(this->class_id_) +
        ", " + this->name_ + "]";
    return result;
}

int ClassInfoComparator::operator()
    (const ClassInfo& info1, const ClassInfo& info2) const {
    if (info1.class_id_ == info2.class_id_) {
        if (info1.name_ == info2.name_) {
            return 0;
        } else {
            return -1;
        }
    } else {
        return info1.class_id_ < info2.class_id_;
    }
}
