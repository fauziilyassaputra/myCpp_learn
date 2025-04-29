#include<iostream>

class HitungLuas{
    public:
    double hitung_luas(double jari){
        return 3.14 * jari * jari;
    }
    int hitung_luas(int  sisi){
        return sisi * sisi;
    }
    int hitung_luas(int p, int l){
        return p * l;
    }
};

// -------------------------

class Complex{
    private:
    double real;
    double imag;

    public:
    Complex(double r, double i): real(r), imag(i) {}

    Complex operator+(const Complex& nilai){
        return Complex(real + nilai.real, imag + nilai.imag);
    }

    void tampilkan() const{
        std::cout << real << " + " << imag << " i" << std::endl;
    }
};


int main(){
    HitungLuas kalkulasi;

    std::cout << "menghitung luas lingkaran untuk jari-jari 4.5" << std::endl;
    std::cout << "hasilnya adalah: " << kalkulasi.hitung_luas(4.5) << std::endl;

    std::cout << "menghitung luas persegi jika sisinya adalah 5 " << std::endl;
    std::cout << "hasilnya adalah: " << kalkulasi.hitung_luas(5) << std::endl;

    std::cout << std::endl;

    // --------------------------------

    Complex bilangan_complex1(3.0, 4.0);
    Complex bilangan_complex2(1.5, 2.5);

    Complex hasil = bilangan_complex1 + bilangan_complex2;

    std::cout << "nilai komplex pertama adalah: ";
    bilangan_complex1.tampilkan();
    std::cout << "nilai komplex kedua adalah: ";
    bilangan_complex2.tampilkan();
    std::cout << "nilai complex1 + nilai complex2 adalah: ";
    hasil.tampilkan();


    return 0;
}
