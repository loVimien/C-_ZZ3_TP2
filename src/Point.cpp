#include "Point.hpp"

std::stringstream& operator<<(std::stringstream& os, const Point& p) {
    p.afficher(os);
    return os;
}