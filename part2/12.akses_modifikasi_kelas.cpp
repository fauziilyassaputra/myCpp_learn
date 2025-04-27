#include<iostream>
#include<string>

class Orang{
    // public:
    // std::string nama;

    // void tampiilkanNama(){
    //     std::cout << "welcome " << nama << std::endl;
    // }

    private:
    std::string nama;

    public:
    void settingNama(std::string n){
        nama = n;
    }

    void tampiilkanNama(){
        std::cout << "welcome " << nama << std::endl;
    }
};

// -------------

class Orang2{
    protected:
    std::string nama;

    public:
    void settingNama(std::string n) {nama = n;}
};

class Siswa : public Orang2{
    public:
    void displayNama() {std::cout << "nama : " << nama << std::endl;}
};


// -----------

class AkunBank{
    private:
    double saldo;

    protected:
    std::string nama_nasabah;

    public:
    AkunBank(std::string n, double s){
        nama_nasabah  = n;
        saldo = s;
    }

    void deposit(double jumlah){
        if (jumlah > 0){
            saldo += jumlah;
            std::cout << "saldo berhasil ditambah" << std::endl;
        } else {
            std::cout << "jumlah saldo harus positif" << std::endl;
        }
    }

    void tampilkanInfoAkunBank(){
        std::cout << "pemilik: " << nama_nasabah << std::endl;
        std::cout << "saldo : Rp" << saldo << std::endl;
    }
};

int main(){
    Orang orang_pertama;
    // orang_pertama.nama = "nahida";
    orang_pertama.settingNama("lesser lord");
    orang_pertama.tampiilkanNama();

    // -----------
    Siswa siswa_pertama;
    siswa_pertama.settingNama("Ellen joe");
    siswa_pertama.displayNama();

    // -------------
    AkunBank akun_pertama("hoshimi", 500.00);
    akun_pertama.tampilkanInfoAkunBank();
    akun_pertama.deposit(200.00);
    akun_pertama.tampilkanInfoAkunBank();


    return 0;
}
