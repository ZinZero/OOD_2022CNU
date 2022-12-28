#include <string>
#include <set>
#include "class.h"
#include "student.h"

Class::Class(const ClassInfo& info) : info_(info) {}

void Class::Register(const Student& student) {
    registered_student_.insert(student);
}

const std::string Class::GetInfo() const {
    std::string result = "";
    result += this->info_.GetInfo();
    int i = 1;
    for (Student k : registered_student_) {
        result += "\n(" + std::to_string(i) + ") " + k.GetInfo();
        i++;
    }
    return result;
}
