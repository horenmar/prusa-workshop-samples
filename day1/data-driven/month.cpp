#include "month.hpp"

#include <ostream>

std::ostream& operator<<(std::ostream& out, month m) {
    switch (m) {
    case month::January:
        out << "Jan"; break;
    case month::February:
        out << "Feb"; break;
    case month::March:
        out << "Mar"; break;
    case month::April:
        out << "Apr"; break;
    case month::May:
        out << "May"; break;
    case month::June:
        out << "Jun"; break;
    case month::July:
        out << "Jul"; break;
    case month::August:
        out << "Aug"; break;
    case month::September:
        out << "Sep"; break;
    case month::October:
        out << "Oct"; break;
    case month::November:
        out << "Nov"; break;
    case month::December:
        out << "Dec"; break;
    }

    return out;
}
