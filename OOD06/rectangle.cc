#include "rectangle.h"
#include "rectangle.h"

Rectangle::Rectangle(int height, int width) : height_(height), width_(width) {}

int Rectangle::height() const {
    return height_;
}

int Rectangle::width() const {
    return width_;
}

Rectangle Rectangle::operator+(const Rectangle& rectangle) const {
    return Rectangle(this->height() + rectangle.height(), 
                    this->width() + rectangle.width());
}
