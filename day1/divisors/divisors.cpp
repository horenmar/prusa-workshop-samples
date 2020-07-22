#include "divisors.hpp"

std::vector<int> get_divisors(int n) {
    std::vector<int> ret;

    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            ret.push_back(i);
        }
    }

    return ret;
}

std::vector<int> get_divisors_fast(int n) {
    std::vector<int> ret;

    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            ret.push_back(i);
            if (n / i != i) {
                ret.push_back(n / i);
            }
        }
    }

    return ret;
}
