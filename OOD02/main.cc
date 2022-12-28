#include <iostream>
#include "util.h"


int main(int argc, char const *argv[]) {
    std::cout << MyAdd(1, 2) << std::endl;
    std::cout << MySub(6, 2) << std::endl;
    std::cout << MyMult(6, 2) << std::endl;
    std::cout << MyDiv(5, 0) << std::endl;

    return 0;
}
