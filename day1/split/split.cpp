#include "split.hpp"

std::vector<std::string> split(std::string const& to_split,
                               char split_on) {
    std::vector<std::string> ret;

    size_t start_idx = 0;
    size_t end_idx;

    do {
        end_idx = to_split.find(split_on, start_idx);
        ret.push_back(to_split.substr(start_idx, end_idx - start_idx));
        start_idx = end_idx + 1;
    } while (end_idx < to_split.size());

    return ret;
}
