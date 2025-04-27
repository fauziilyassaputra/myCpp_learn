#include<iostream>
#include<string>

class Orang{
    public:
    std::string nama;

    void tampiilkanNama();

};

void Orang::tampiilkanNama(){
    std::cout << "nama " << nama << std::endl;
}

// --------------------------

class Hitung{
    private:
    static int hitung_angka;

    public:
    static void tambahkan(){
        hitung_angka++;
    }
    static void tampilkanHitung(){
        std::cout << "hitung: " << hitung_angka << std::endl;
    }
};
int Hitung::hitung_angka = 0;

// --------------

class Mobil{
    private:
    std::string nama;
    int tahun_keluaran;

    public:
    Mobil(std::string n, int t) : nama(n), tahun_keluaran(t) {};

    void tampilkanInfo() const {
        std::cout <<  "nama mobil : " << nama << std::endl;
        std::cout << "tahun keluar: " << tahun_keluaran << std::endl;
    }
};

// ---------------
class Kotak{
    private:
    double lebar;

    public:
    Kotak(double l) : lebar(l) {}

    friend void tampilkanInformasiKotak(const Kotak &k);

};

void tampilkanInformasiKotak(const Kotak &k){
    std::cout << "lebar kotak adalah " << k.lebar << std::endl;
};

// -------------

class Tank{
    private:
    std::string nama;

    public:
    Tank(std::string n) : nama(n) {}

    void tampilkanInfo() {std::cout << "nama mobil: " << this->nama << std::endl;}


};



int main(){
    Orang orang_pertama;
    orang_pertama.nama = "nizwa";
    orang_pertama.tampiilkanNama();

    // -----------------------

    Hitung  mulai_hitung;
    Hitung::tambahkan();
    mulai_hitung.tampilkanHitung();
  

    // ------------

    const Mobil mobil_pertama("ferrari",  2077);
    mobil_pertama.tampilkanInfo();

    // --------

    Kotak kotak_pertama(5.5);
    tampilkanInformasiKotak(kotak_pertama);

    // ---------

    Tank tank_pertama("Tiger");
    tank_pertama.tampilkanInfo();



    return 0;
}
