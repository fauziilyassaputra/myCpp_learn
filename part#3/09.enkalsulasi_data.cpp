#include<iostream>
#include<string>

class AkunBank{
    private:
    std::string nama_pemilik_akun;
    double saldo;

    public:
    AkunBank(std::string nama, double nilai_saldo){
        nama_pemilik_akun = nama;
        saldo = nilai_saldo;
    }

    std::string ambilNamaPemilikAkun() const{
        return nama_pemilik_akun;
    }
    void settingNamaPemilikAkun(std::string nama){
        if(!nama.empty()){
            nama_pemilik_akun = nama;
        } else{
            std::cout << "kamu memasukkan field yang salah" << std::endl;
        }
    }

    double ambilSaldo() const {
        return saldo;
    }

    void deposit(double jumlah){
        if(jumlah > 0){
            saldo += jumlah;
            std::cout << "deposit anda sejumlah: Rp." << jumlah << std::endl;
            std::cout << "jumlah uang sekarang adalah: Rp." << saldo << std::endl;
        } else{
            std::cout << "nilai invalid" << std::endl;
        }
    }
    void tarikUang(double jumlah){
        if(jumlah > 0 && jumlah <= saldo){
            saldo -= jumlah;
            std::cout << "menarik jumlah uang sebanyak: Rp." << jumlah << std::endl;
            std::cout << "sisa uang sekarang adalah: Rp." << saldo << std::endl;
        } else{
            std::cout << "kamu memasukkan nilai yang salah!" << std::endl;
        }
    }
};

int main(){
    AkunBank akun_saya("feixiao", 500000.0);
    std::cout << "nama pemilik akun: " << akun_saya.ambilNamaPemilikAkun() << std::endl;
    std::cout << "saldo " << akun_saya.ambilNamaPemilikAkun() << " berjumlah: Rp." << akun_saya.ambilSaldo() <<std::endl;
    
}
