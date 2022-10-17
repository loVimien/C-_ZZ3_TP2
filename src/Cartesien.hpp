#ifndef ZZ3_TP2_CARTESIEN_HPP
#define ZZ3_TP2_CARTESIEN_HPP

#include "Point.hpp"

class Cartesien : public Point {
    double x;
    double y;
    public:
        Cartesien();
        Cartesien(double x, double y);
        Cartesien(Polaire p);
        double getX() const;
        double getY() const;
        void setX(double x);
        void setY(double y);
        virtual void afficher(std::stringstream & s) const override;
        virtual void convertir(Polaire & p) const override;
        virtual void convertir(Cartesien & p) const override;
};

#endif