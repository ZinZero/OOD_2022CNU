#ifndef CNU_CSE_OOD_OOD06_CIRCLE_H_
#define CNU_CSE_OOD_OOD06_CIRCLE_H_

class Circle {
 public:
  explicit Circle(int radius);
  int radius() const;
  Circle operator+(const Circle& Circle) const;
 private:
  const int radius_;
};

#endif  //  CNU_CSE_OOD_OOD06_CIRCLE_H_
