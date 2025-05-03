#ifndef KOTAK_HPP_
#define KOTAK_HPP_

class Kotak {
    private:
    double lebar;
    double tinggi;

    public:
    Kotak(double lebar, double tinggi);

    double area() const;
    double parameter() const;

    void settingLebar(double lebar);
    void settingTinggi(double tinggi);

    double ambilLebar()   const;
    double ambilTinggi() const;
};

#endif