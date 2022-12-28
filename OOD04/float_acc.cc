#include <iostream>
#include "float_acc.h"

namespace float_acc {
    Accumulator::Accumulator(float acc) {
        acc_ = acc;
    }

    void Accumulator::Add(float x) {
        acc_ += x;
    }

    void Accumulator::Sub(float x) {
        acc_ -= x;
    }

    void Accumulator::Mult(float x) {
        acc_ *= x;
    }

    void Accumulator::Div(float x) {
        if (x == 0) {
            acc_ = 0;
        } else {
            acc_ /= x;
        }
    }

    float Accumulator::acc() {
        return acc_;
    }
}  // namespace float_acc
