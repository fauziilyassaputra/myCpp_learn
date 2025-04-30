#include<iostream>
#include<exception>
#include <stdexcept>

class CustomException : public std::exception {
    private:
    std::string pesan;

    public:
    explicit CustomException(const std::string pesan) : pesan(pesan)  {}

    const char* what() const noexcept override{
        return pesan.c_str();
    }
};

class Kalkulator{
    public:
    double pembagian(double angka1 , double angka2){
        if(angka2 == 0){
            throw std::invalid_argument("Error: ridak boleh dibagikan dengan nol");
        }
        return angka1 / angka2;
    }
};

int main(){
//     Kalkulator kalkulator;
//     double angka1, angka2;

//     std::cout << "masukkan angka: ";
//     std::cin >> angka1;
//     std::cout << "masukkan angka kedua: ";
//     std::cin >> angka2;

// try {
//     double hasil = kalkulator.pembagian(angka1, angka2);
//     std::cout << "hasilnya adalah: " << hasil << std::endl;
// } catch (const std::invalid_argument& pesan_error) {
//     std::cout << pesan_error.what() << std::endl;
// }

// std::cout << "hasil kalkulasi berhasil!" << std::endl;

// ----------------------

try{
    throw CustomException("contoh dari exception buatan sendiri");
} catch (const CustomException &pesan_error){
    std::cout << pesan_error.what() << std::endl;
}


return 0;
};

