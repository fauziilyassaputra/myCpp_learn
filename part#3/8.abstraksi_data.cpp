#include<iostream>

class AkunBank{
    protected:
    double saldo;

    public:
    AkunBank(double saldo) : saldo(saldo) {}
    virtual void tabung(double jumlah) = 0;

    void tarik_uang(double jumlah){
        if (jumlah <= saldo){
            saldo -= jumlah;
            std::cout << "pemarikan berhasil, silahkan ambil uang anda" << std::endl;
        } else{
            std::cout << "saldo tidak cukup" << std::endl;
        }
    }
    double liat_saldo() const {
        return saldo;
    }
};

class TabungAkun : public AkunBank{
    public:
    TabungAkun(double saldo) : AkunBank(saldo) {}

    void tabung(double jumlah) override{
        saldo += jumlah;
        std::cout << "jumlah deposit uang adalah: Rp." << jumlah << std::endl;
        std::cout << "jumlah uang sekarang adalah:  Rp." << saldo << std::endl;
    }
};


int main (){
    TabungAkun akun_saya(250000.00);
    akun_saya.tabung(20000.0);
    akun_saya.tarik_uang(50000.00);
    std::cout << "saldo kita sekarang adalah:  " << akun_saya.liat_saldo() << std::endl;

}
