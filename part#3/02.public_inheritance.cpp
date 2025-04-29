#include<iostream>
#include<string>

class Kendaraan{
    protected:
    std::string nama;
    int kecepatan;

    public:
    Kendaraan(std::string n, int k) : nama(n), kecepatan(k){}

    void informasiKendaraan(){
        std::cout << "nama kendaraan:  " << nama << std::endl;
        std::cout << "kecepatan:  " << kecepatan << std::endl;
    }
    virtual void klakson(){
        std::cout << "kendaraan mengeluarkan klakson" << std::endl;
    }

};

class Mobil : public Kendaraan{
    private:
    int kursi;

    public:
    Mobil(std::string n,int k, int jumlah_kursi) : Kendaraan(n,k), kursi(jumlah_kursi) {}

    void infoKursiMobil(){
        std::cout << "jumlah kursi mobil: " << kursi << std::endl;
    }
    void klakson()   override {
        std::cout << nama  << " bersuara: tut tut";
    }

};

int main(){
    Kendaraan kendaraan("dasar kelas kendaraan",80);
    kendaraan.informasiKendaraan();
    kendaraan.klakson();

    Mobil mobil("mustang",120,4);
    // mobil.informasiKendaraan();
    // mobil.infoKursiMobil();
    // mobil.klakson();

    Kendaraan* kendaraan_pointer = &mobil;
    kendaraan_pointer->informasiKendaraan();
    kendaraan_pointer->klakson();
}
