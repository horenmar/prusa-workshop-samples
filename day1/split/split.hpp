#pragma once

#include <string>
#include <vector>

//! Returns a list of "words" in the string, using `split_on` as the delimiter
std::vector<std::string> split(std::string const& to_split, char split_on);
