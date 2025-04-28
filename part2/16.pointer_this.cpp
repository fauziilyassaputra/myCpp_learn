#include<iostream>

class Kotak{
    private:
    int lebar, tinggi;

    public:
    // Kotak(int lebar, int tinggi){
    //     this->lebar = lebar;
    //     this->tinggi = tinggi;
    // }

    Kotak &settingTinggi(int t){
        this->tinggi = t;
        return *this;
    }
    Kotak &settingLebar(int l){
        this->lebar = l;
        return *this;
    }

    void display_informasiKotak(){
        std::cout << "hasil kalkulasi adalah: " << lebar + tinggi << std::endl;
    }
};

class Kotak2{
    private:
    int lebar, tinggi;

    public:
    Kotak2(int l, int t) : lebar(l), tinggi(t) {}

    bool apakahSama(const Kotak2 &nilai_kotak_lagi)  const {
        return (this == &nilai_kotak_lagi);
    }
};

 // --------------------
 class Persegi{
    private:
    int lebar, tinggi;

    public:
    Persegi(int l, int t) : lebar(l), tinggi(t){};

    Persegi &operator+=(const Persegi &nilai_alamat){
        this->lebar += nilai_alamat.lebar;
        this->tinggi += nilai_alamat.tinggi;
        return *this;
    }
    void hasilKalkulasi(){
        std::cout << "lebar: " << lebar << ", tinggi: " << tinggi << std::endl;
        std::cout << "hasilnya adalah: " << lebar + tinggi << std::endl;
    }
};

int main(){
    // Kotak kotak(10,30);
    // kotak.display_informasiKotak();

    Kotak kotak;
    kotak.settingTinggi(15).settingLebar(20).display_informasiKotak();

    Kotak2 kotak2(10,15);
    Kotak2 kotak3(10,5);
    if (kotak2.apakahSama(kotak2)){
        std::cout << "hey, kotak ini sama" << std::endl;
    }
    if(!kotak2.apakahSama(kotak3)){
        std::cout << "ukuran kotak tidak sama " << std::endl;
    }

    // ----------------------
    Persegi persegi_pertama(10,20);
    Persegi persegi_kedua(5,10);

    persegi_pertama += persegi_kedua;
    persegi_pertama.hasilKalkulasi();
    return 0;

   

    return 0;
}
