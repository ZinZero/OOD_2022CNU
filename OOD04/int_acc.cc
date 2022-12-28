#include <iostream>
#include "int_acc.h"

namespace int_acc {
    Accumulator::Accumulator(int acc) {
        acc_ = acc;
    }

    void Accumulator::Add(int x) {
        acc_ += x;
    }

    void Accumulator::Sub(int x) {
        acc_ -= x;
    }

    void Accumulator::Mult(int x) {
        acc_ *= x;
    }

    void Accumulator::Div(int x) {
        if (x == 0) {
            acc_ = 0;
        } else {
            acc_ /= x;
        }
    }

    int Accumulator::acc() {
        return acc_;
    }
}  // namespace int_acc
