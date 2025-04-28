#include<iostream>

class HitungObject{
    private:
    static int hitung_objek;

    public:
    HitungObject(){
        ++hitung_objek;
    }
    ~HitungObject(){
        --hitung_objek;
    }

    static int berikanHitungObject(){
        return hitung_objek;
    }
};

int HitungObject::hitung_objek = 0;

int main(){
    std::cout << "jumlah objek saat ini " << HitungObject::berikanHitungObject() << std::endl;

    HitungObject objek_pertama, objek_kedua;
    std::cout << "jumlah objek setelah dibuat adalah: " << HitungObject::berikanHitungObject() << std::endl;
    {
        HitungObject objek_ketiga;
        std::cout << "jumlah objek setelah dibuat ini " << HitungObject::berikanHitungObject() << std::endl;
    }
    std::cout << "jumlah elemen sekarang adalah: " << HitungObject::berikanHitungObject() << std::endl;

    return 0;
}
