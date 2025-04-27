#include<iostream>

// inline int tambah(int a, int b){
//     return a + b;
// }

class Hitung{
    private:
    int nilai1, nilai2 ;

    public:
    Hitung(int a, int b) : nilai1(a), nilai2(b) {};

    int tambah(){
        return nilai1 + nilai2;
    }
};


class Lingkaran{
    private:
    double radius;

    public:
    Lingkaran(double r) : radius(r){};

    void settingRadius(double r){
        radius = r;
    }

    double kalkulasiRadius() const{
        return radius;
    }
    double kalkulasi() const {
        return 3.14159 * radius * radius;
    }

};

int main(){
    int n = 10, y = 20;
    // std::cout << "hasilnya adalah " << tambah(n,y) << std::endl;

    Hitung hitung_kalkulasi(n,y);
    std::cout  << "hasilnya adalah " << hitung_kalkulasi.tambah() << std::endl;

    // ---------------
    Lingkaran l(5.0);
    std::cout << "nilai radius yang diketahui " << l.kalkulasiRadius() << std::endl;
    std::cout << "hasilnya adalah " << l.kalkulasi();


    return 0;
}
