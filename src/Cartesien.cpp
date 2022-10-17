#include "Cartesien.hpp"
#include "Polaire.hpp"
#include <iostream>
#include <tgmath.h>

Cartesien::Cartesien() : x(0), y(0) {
}

Cartesien::Cartesien(double x, double y) : x(x), y(y) {
}

Cartesien::Cartesien(Polaire p) : x(p.getDistance() * cos((p.getAngle() * M_PI) / 180)), y(p.getDistance() * sin((p.getAngle() * M_PI) / 180)) {
}

double Cartesien::getX() const {
    return x;
}

double Cartesien::getY() const {
    return y;
}

void Cartesien::setX(double xn) {
    x = xn;
}

void Cartesien::setY(double yn) {
    y = yn;
}

void Cartesien::afficher(std::stringstream & s) const {
    s << "(x=" << x << ";y=" << y << ")";
}

void Cartesien::convertir(Polaire & p) const {
    p.setDistance(sqrt(x*x + y*y));
    p.setAngle(atan2(y, x) * (180 / M_PI));
}

void Cartesien::convertir(Cartesien & c) const {
    c.setX(x);
    c.setY(y);
}