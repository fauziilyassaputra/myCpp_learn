#include<iostream>
#include <memory>
#include<string>


class Siswa{
    public:
    std::string nama;
    Siswa(std::string nama) : nama(nama) {}
    void tampilkan() {
        std::cout << "nama siswa: " << nama << std::endl;
    }
};

int main(){

    int *angka = new int;
    *angka = 10;
    std::cout << "nilai dari angka adalah: " << *angka << std::endl;

    delete angka;
    angka = nullptr;

    std::cout << *angka;
  


// ----------------------------

    int ukuran;
    std::cout << "masukkan ukuran dari array: ";
    std::cin >> ukuran;

    int* array_dinamis = new int[ukuran];
    for (int i = 0; i < ukuran; ++i){
        array_dinamis[i] = i * 10;
    }

    std::cout << "elemen array: " << std::endl;
    for(int i = 0; i < ukuran; ++i){
        std::cout << array_dinamis[i] << std::endl;
    }
    std::cout << std::endl;

    delete[] array_dinamis;
    array_dinamis = nullptr;

    // ----------------
    std::unique_ptr<Siswa> siswa_pertama = std::make_unique<Siswa>("hoshimi");
    siswa_pertama->tampilkan();

    return 0;
}
