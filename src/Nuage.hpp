#ifndef ZZ3_TP2_NUAGE_HPP
#define ZZ3_TP2_NUAGE_HPP

#include <vector>
#include "Cartesien.hpp"
#include "Polaire.hpp"

template <typename T>
class Nuage {
    std::vector<T> v;

    public:
        Nuage() = default;
        void ajouter(const T e);
        int size() const;
        ~Nuage() = default;

        using const_iterator = typename std::vector<T>::const_iterator;
        const_iterator begin() const;
        const_iterator end() const;
};

template <typename T>
void Nuage<T>::ajouter(const T e) {
    v.push_back(e);
}

template <typename T>
int Nuage<T>::size() const {
    return v.size();
}

template <typename T>
typename Nuage<T>::const_iterator Nuage<T>::begin() const {
    return v.begin();
}

template <typename T>
typename Nuage<T>::const_iterator Nuage<T>::end() const {
    return v.end();
}

template <typename T>
Cartesien barycentre_v1(Nuage<T> const &n) {
    double x, y;
    for(T p : n) {
        Cartesien c;
        p.convertir(c);
        x += c.getX();
        y += c.getY();
    }
    return (n.size() == 0) ? Cartesien(0, 0) : Cartesien(x/n.size(), y/n.size());
}

#endif