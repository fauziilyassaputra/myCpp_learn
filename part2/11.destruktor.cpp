#include<iostream>
#include<string>

class Orang{
    public:
    std::string nama;

    Orang(std::string n){
        nama = n;
        std::cout << "constructor parameter dipanggil" << std::endl;
    }

    ~Orang(){
        std::cout << "destructor dipanggil" << std::endl;
    }
    
    void salam(){
        std::cout << "welcome " << nama << std::endl;
    }
};

class ArrayDinamis{
    private:
    int* array;
    int ukuran;

    public:
    ArrayDinamis(int u){
        ukuran = u;
        array = new int[ukuran];
        std::cout << "array dengan ukuran " << ukuran << " diakolasikan" << std::endl;
    }

    ~ArrayDinamis(){
        delete[] array;
        std::cout << "memori dari array  sudah di bebaskan" << std::endl;
    }
};

int main(){

    Orang orang_pertama("vivian");
    // output salam lebih dahulu dibanding destructor 
    orang_pertama.salam();
    Orang orang_kedua("hugo");

    ArrayDinamis array_pertama(6);
}
