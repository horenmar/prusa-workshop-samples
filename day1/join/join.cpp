#include "join.hpp"

std::string join(std::vector<std::string> const& strings, 
                 std::string const& joiner) {
    std::string ret = strings[0];
    
    for (size_t i = 1; i < strings.size(); ++i) {
        ret += joiner;
        ret += strings[i];
    }

    return ret;
}
