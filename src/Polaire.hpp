#ifndef ZZ3_TP2_POLAIRE_HPP
#define ZZ3_TP2_POLAIRE_HPP

#include "Point.hpp"

class Polaire : public Point {
    double ro;
    double teta;
    public:
        Polaire();
        Polaire(double teta, double ro);
        Polaire(Cartesien c);
        double getAngle() const;
        double getDistance() const;
        void setAngle(double a);
        void setDistance(double d);
        virtual void afficher(std::stringstream & s) const override;
        virtual void convertir(Polaire & p) const override;
        virtual void convertir(Cartesien & p) const override;
};

#endif