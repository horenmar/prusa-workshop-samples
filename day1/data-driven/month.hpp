#pragma once

#include <iosfwd>

enum class month {
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

//! Writes out month's short name (first three letters)
std::ostream& operator<<(std::ostream& out, month m);
