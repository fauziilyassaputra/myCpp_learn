#include "kotak.hpp"

Kotak::Kotak(double lebar, double tinggi) : lebar(lebar), tinggi(tinggi) {}

double Kotak::area () const {
    return lebar * tinggi;
}

double Kotak::parameter() const {
    return 2 * (lebar + tinggi);
}

void Kotak::settingLebar(double lebar){
    lebar = lebar;
}

void Kotak::settingTinggi(double tinggi){
    tinggi = tinggi;
}

double Kotak::ambilLebar() const {
    return lebar;
}

double Kotak::ambilTinggi() const {
    return tinggi;
}