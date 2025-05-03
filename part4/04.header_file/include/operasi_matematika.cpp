#include <iostream>
// #include "include/operasi_matematika.hpp"
#include "include/kotak.hpp"

int main(){
    int a = 20, b = 30;
    // std::cout << "pertambahan nilai: " << a << " dan " << b << std::endl;
    // std::cout << "hasilnya adalah: " << pertambahan(a, b) << std::endl;

    Kotak kotak_pertama(5.0,3.0);
    std::cout << "area kotak: " << kotak_pertama.area() << std::endl;
    std::cout << "perimeter: " << kotak_pertama.parameter() << std::endl;

    kotak_pertama.settingTinggi(4.0);
    std::cout << "update tinggi adalah: " << kotak_pertama.ambilTinggi() << std::endl;
    return 0;


    return 0;
}
