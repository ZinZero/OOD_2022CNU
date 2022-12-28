#ifndef FLOAT_ACC_H_
#define FLOAT_ACC_H_

namespace float_acc {
class Accumulator {
 public:
  explicit Accumulator(float acc);
  void Add(float x);
  void Sub(float x);
  void Mult(float x);
  void Div(float x);
  float acc();
 private:
  float acc_;
};
}  // namespace float_acc
#endif  // CNU_CSE_OOD_OOD04_FLOAT_ACC_H_
