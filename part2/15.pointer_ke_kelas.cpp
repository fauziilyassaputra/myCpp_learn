#include<iostream>
#include<string>

class Mobil{
    public:
    std::string nama;

    void tampilkanInfo(){
        std::cout << "nama: " << nama << std::endl;
    }

};

// -------------------------

class Tank{
    public:
    std::string nama;
    int tahun_keluaran;

    void infoTank(){
        std::cout << "nama tank: "  << nama << std::endl;
        std::cout << "tahun keluaran: " << tahun_keluaran << std::endl;
    }
};

class Motor{
    public:
    std::string nama;
    int tahun_keluaran;

    void tampilkanInfo(){
        std::cout << "nama motor: " << nama << std::endl;
        std::cout << "tahun keluaran: " << tahun_keluaran << std::endl;
    }
};  

// ---------------------------

class Manusia{
    public:
    virtual void bicara() {std::cout << "hola" << std::endl;}
};

class Orang : public Manusia{
    public:
    void bicara()override{std::cout << "keren rek" << std::endl;}
};

int main(){
    Mobil mobil_pertama;
    Mobil *mobil_pointer;
    mobil_pointer = &mobil_pertama;

    mobil_pointer->nama  = "ferrari";
    mobil_pointer->tampilkanInfo();

// ------------------------

    Tank *tank_pointer_pertama = new Tank;
    tank_pointer_pertama->nama = "T-34";
    tank_pointer_pertama->tahun_keluaran = 1943;
    tank_pointer_pertama->infoTank();
    delete tank_pointer_pertama;

// -------------------

    Motor *motor_pointer = new Motor[2];
    motor_pointer[0].nama = "beat";
    motor_pointer[0].tahun_keluaran = 2020;
    motor_pointer[1].nama = "mio";
    motor_pointer[1].tahun_keluaran = 2021;

    for(int i = 0; i < 2; ++i){
        motor_pointer[i].tampilkanInfo();
    }
    delete[] motor_pointer;

    // ----------------------

    Manusia *manusia_pointer;
    Orang orang;

    manusia_pointer = &orang;
    manusia_pointer->bicara();

    return 0;
}
