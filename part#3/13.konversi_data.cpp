// implisit conversion
// explisit convertion
// C-style (type) konversi
// C++ static.cast dynamic.cast, const_cast, reinterpret_cast

#include<iostream>

class Jarak{
private:
int meter;

public:
    Jarak(int meter) : meter(meter) {}
    Jarak() : meter(0) {}

    operator int() const {
        return meter;
    }

    void jarakSekarang() const {
        std::cout << "jarak sekarang adalah: " << meter << " meter / m" << std::endl;
    }
};

int main(){
    int nilai_integer = 42;
    double nilai_koma = nilai_integer;

    std::cout << "nilai integer: " << nilai_integer << std::endl;
    std::cout << "nilai koma: " << nilai_koma << std::endl;

    double nilai_koma2 = 42.52;
    int nilai_integer2 = (int) nilai_koma2;

    std::cout << "nilai berkoma: " << nilai_koma2 << std::endl;
    std::cout << "nilai integer: " << nilai_integer2 << std::endl;

    double nilai_koma_3 = 45.65;
    int nilai_bulat = static_cast<int>(nilai_koma_3);

    std::cout << "nilai koma: " << nilai_koma_3 << std::endl;
    std::cout << "nilai bulat: " << nilai_bulat << std::endl;

    // ---------------------

    // Jarak jarak_pertama;
    // Jarak jarak_kedua = 50;

    // jarak_pertama.jarakSekarang();
    // jarak_kedua.jarakSekarang();

    Jarak jarak(200);
    int meter =  jarak;

    jarak.jarakSekarang();
    std::cout << "jarak sekarang versi variable: " << meter << std::endl;




    return 0;
}
