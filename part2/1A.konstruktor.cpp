#include<iostream>
#include<string>

class Mobil{
    public:
    std::string nama;
    int tahun_keluaran;

    Mobil(){
        nama = "Ferrari";
        tahun_keluaran = 2024;
        std::cout << "default constructor dibuat " << std::endl;
    }

    void tampilkanInformasiMobil(){
        std::cout << "nama mobil: " << nama << std::endl;
        std::cout << "tahun keluaran: " << tahun_keluaran << std::endl;
    }
};


class Siswa{
    public:
    std::string nama;
    int kelas;

    Siswa(std::string n, int k){
        nama = n;
        kelas = k;
        std::cout << "parameter konstuktor dibuat " << std::endl;
    }
    void tampilkanInformasiSiswa(){
        std::cout << "nama: " << nama << std::endl;
        std::cout << "kelas: " << kelas << std::endl;
    }
};

class youtubeProgramming{
    public:
    std::string nama_channel;
    int kode_channel;

    youtubeProgramming(std::string n, int k){
        nama_channel = n;
        kode_channel = k;
    }

    youtubeProgramming(const youtubeProgramming &objek){
        nama_channel = objek.nama_channel;
        kode_channel = objek.kode_channel;
        std::cout << "copy constructor dipanggil" << std::endl;
    }

    void tampilkanInfo(){
        std::cout << "nama channel: " << nama_channel << std::endl;
        std::cout << "kode channel: " << kode_channel << std::endl;
    }
};


int main (){
    Mobil mobil_pertama;
    mobil_pertama.tampilkanInformasiMobil();

    Siswa siswa_pertama("hoshimi",12);
    siswa_pertama.tampilkanInformasiSiswa();

    youtubeProgramming vtuber_pertama("hoshimi",275);
    youtubeProgramming vtuber_upgrade = vtuber_pertama;
    vtuber_pertama.tampilkanInfo();



    return 0;
}
