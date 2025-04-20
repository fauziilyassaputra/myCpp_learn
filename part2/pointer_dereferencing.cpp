#include <iostream>


union  Data{
   int angka_integer;
   float nilai_float;
   char* char_pointer;
};

union Paket{
    char rawData[8];
    struct{
        int id;
        float value;
    } parsed;
};


int main(){
    Data data;
    

    data.angka_integer = 100;
    std::cout << "nilai angka  integer dari union adalah : " << data.angka_integer << std::endl;

    data.nilai_float = 5.5;
    std::cout << "nilai angka float adalah: " << data.nilai_float << std::endl;
    std::cout << "nilai angka integer sekarang adalah : " << data.angka_integer << std::endl;

    char teks[]= "hello";
    data.char_pointer = teks;
    std::cout << "charpointer (dereferensikan) : " << data.char_pointer << std::endl;

    *data.char_pointer = 'j';
    std::cout << "nilai char pointer setelah ada perubahan : " << data.char_pointer << std::endl;



    // projek sederhananya
    Paket paket;

    char* pointer = paket.rawData;
    pointer[0] = 1;
    pointer[1] = 0;
    pointer[2] = 0;
    pointer[3] = 0;
    pointer[4] = 0;
    pointer[5] = 0;
    pointer[6] = 64;
    pointer[7] = 64;

    std::cout << "data id yang diparsing : " << paket.parsed.id << std::endl;
    std::cout << "parsing value : " << paket.parsed.value << std::endl;



    return 0;

}