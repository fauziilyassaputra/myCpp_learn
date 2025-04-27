#include<iostream>
#include<string>

class Mobil{
    public:
    std::string merek_mobil;
    int tahun_keluaran;

    void displayInfoMobil(){
        std::cout << "merek mobil: " << merek_mobil << std::endl;
        std::cout << "tahun keluaran mobil :  " << tahun_keluaran << std::endl;
    };

};

class Orang{
    private:
        std::string nama;

    public:
    void setnama(std::string namaBaru){
        nama = namaBaru;
    }

    void tampil_nama(){
        std::cout << "nama kamu adalah : " << nama << std::endl;
    }
};

int main(){
    Mobil mobil_pertama;
    mobil_pertama.merek_mobil = "mclaren";
    mobil_pertama.tahun_keluaran = 2024;
    mobil_pertama.displayInfoMobil();

    std::cout << std::endl;

    Mobil mobil_kedua;
    mobil_kedua.merek_mobil = "lambo";
    mobil_kedua.tahun_keluaran= 2024;
    mobil_kedua.displayInfoMobil();

    Orang orang_pertama;
    orang_pertama.setnama("faruzan");
    orang_pertama.tampil_nama();

    return 0;
}
