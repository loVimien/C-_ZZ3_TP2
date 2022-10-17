#include "Cartesien.hpp"
#include "Polaire.hpp"
#include <iostream>
#include <tgmath.h>

Polaire::Polaire() : ro(0), teta(0) {
}

Polaire::Polaire(double teta, double ro) : teta(teta), ro(ro) {
}

Polaire::Polaire(Cartesien c) : teta(atan2(c.getY(), c.getX()) * (180 / M_PI)), ro(sqrt(c.getX()*c.getX() + c.getY()*c.getY())) {
}

double Polaire::getAngle() const {
    return teta;
}

double Polaire::getDistance() const {
    return ro;
}

void Polaire::setAngle(double a) {
    teta = a;
}

void Polaire::setDistance(double d) {
    ro = d;
}

void Polaire::afficher(std::stringstream & s) const {
    s << "(a=" << teta << ";d=" << ro << ")";
}

void Polaire::convertir(Cartesien & c) const {
    c.setX(ro * cos((teta * M_PI) / 180));
    c.setY(ro * sin((teta * M_PI) / 180));
}

void Polaire::convertir(Polaire & p) const {
    p.setAngle(teta);
    p.setDistance(ro);
}