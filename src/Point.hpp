#ifndef ZZ3_TP2_POINT_HPP
#define ZZ3_TP2_POINT_HPP

#include <sstream>
class Polaire;
class Cartesien;

class Point {
    public:
        virtual void afficher(std::stringstream  & s) const = 0;
        virtual void convertir(Polaire & p) const = 0;
        virtual void convertir(Cartesien & c) const = 0;
        virtual ~Point() = default;
};

std::stringstream& operator<<(std::stringstream& os, const Point& p);

#endif