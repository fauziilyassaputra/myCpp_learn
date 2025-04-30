#include<iostream>

class Shape{
public:
    virtual void gambar(){
        std::cout << "gambar shape dasar" << std::endl;
    }

};

class Bulat : public Shape{
    public:
    void gambar() override {
        std::cout << "gambarkan lingkaran" << std::endl;
        std::cout << "0 <-- gambar bulat sudah dibuat " << std::endl;
    }
};

class Kotak : public Shape{
    public:
    void gambar() override{
        std::cout << "gambarkan kotak" << std::endl;
        std::cout << "[] <- gambar kotak sudah dibuat" << std::endl;
    }
};

// ------------------------------

class OperasiMatematika{
    public:
    int add(int a, int b){
        return a + b;
    }
    double add(double a, double b){
        return a + b;
    }
};




int main(){
    Shape* shape_pointer;

    Bulat bulat;
    shape_pointer = &bulat;
    shape_pointer->gambar();

    Kotak kotak;
    shape_pointer = &kotak;
    shape_pointer->gambar();

    // -----------------------

    OperasiMatematika pertambahan;
    int a = 10, b = 5;
    std::cout << "penjumlahan bilangan bulat dari " << a << " dan " << b << std::endl;
    std::cout << "hasilnya adalah: " << pertambahan.add(a,b) <<std::endl;

    double a_desimal = 5.5, b_desimal = 3.7;
    std::cout << "penjumlahan bilangan desmal dari " << a_desimal << " dan " << b_desimal << std::endl;
    std::cout << "hasilnya adalah: " << pertambahan.add(a_desimal,b_desimal);




    return 0;
}
