#ifndef CNU_CSE_OOD_OOD06_SHAPE_UTIL_H_
#define CNU_CSE_OOD_OOD06_SHAPE_UTIL_H_
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"

class ShapeUtil {
 public:
  static ShapeUtil *GetInstance();
  float CalcArea(const Circle& circle);
  float CalcArea(const Triangle& triangle);
  int CalcArea(const Rectangle& rectangle);
 private:
  static ShapeUtil *instance_;
};

#endif  // CNU_CSE_OOD_OOD06_SHAPE_UTIL_H_
