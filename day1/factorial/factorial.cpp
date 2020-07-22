#include "factorial.hpp"

#include <stdexcept>

int factorial(int n) {
    if (n < 0) {
        return -1;// throw std::runtime_error("negative number");
    }
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
