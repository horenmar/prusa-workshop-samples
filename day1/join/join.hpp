#pragma once

#include <string>
#include <vector>

/**
 * Returns a string that is created by joining `strings` with `joiner`
 *
 * For example for `strings` {"a", "b"} and `joiner` ", " returns "a, b".
 */
std::string join(std::vector<std::string> const& strings,
                 std::string const& joiner);
