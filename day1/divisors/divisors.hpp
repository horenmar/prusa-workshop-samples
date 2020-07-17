#pragma once

#include <vector>

/**
 * Returns all natural divisors of `n`
 *
 * Returns an empty vector when `n == 0`.
 *
 * \pre `n >= 0`
 */
std::vector<int> get_divisors(int n);
