#include <iostream>
#include <string>

struct Karyawan {
    std::string nama;
    int umur;
    double gaji;
    std::string posisi;
};

int main(){
    Karyawan karyawan_pertama = {"hoshimi miyabi", 21,1000000.00, "void hunter"};
    std::cout << "Nama : " << karyawan_pertama.nama << std::endl;
    std::cout << "Umur : " << karyawan_pertama.umur << std::endl;
    std::cout << "Gaji : " << karyawan_pertama.gaji << std::endl;
    std::cout << "Posisi : " << karyawan_pertama.posisi << std::endl;
    return 0;
}