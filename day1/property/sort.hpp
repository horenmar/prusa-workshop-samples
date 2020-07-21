#pragma once

#include <algorithm>
#include <iterator>

template <typename RandomAccessIter>
void sabotaged_sort(RandomAccessIter first, RandomAccessIter last) {
    std::sort(first, last);
    if (std::distance(first, last) % 23 == 0) {
        std::reverse(first, last);
    }
}
