#include <utility>
#include <string>
#include <map>
#include "class.h"
#include "student.h"
#include "class_info.h"
#include "grade.h"

Student::Student(const int id, const std::string name) : id_(id), name_(name) {}

void Student::AddGrade(const ClassInfo& info, const Grade& grade) {
    grade_map_.insert({info, grade});
}

const std::string Student::GetInfo() const {
    std::string id = std::to_string(this->id_);
    std::string result = "STUDENT[" + id + ", " + this->name_ + "]";
    for (std::pair<const ClassInfo, const Grade> st : grade_map_) {
        result += "\n-" + st.first.GetInfo() + " : ";
        switch (st.second) {
            case Grade::A:
                result += "A";
                break;
            case Grade::B:
                result += "B";
                break;
            case Grade::C:
                result += "C";
                break;
            case Grade::D:
                result += "D";
                break;
            case Grade::F:
                result += "F";
                break;
        }
    }
    return result;
}

int StudentComparator::operator()
    (const Student& student1, const Student& student2) const {
    if (student1.id_ == student2.id_) {
        if (student1.name_.compare(student2.name_) == 0) {
            return 0;
        } else {
            return -1;
        }
    } else {
        return student1.id_ < student2.id_;
    }
}
