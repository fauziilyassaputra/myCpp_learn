#include <iostream>
// #include <string>


union data_kita{
    int nilai_integer;
    float nilai_float;
    char nilai_char;
};

union PaketData{
    char rawData[4];
    struct{
        char header;
        char command;
        char payloadPertama;
        char payloadKedua;
    } parsed;
};

int main(){
    // data_kita data_kita;

    // data_kita.nilai_integer = 10;
    // std::cout << "nilai_integer: " << data_kita.nilai_integer << std::endl;

    // data_kita.nilai_float = 5.5;
    // // data float diatas akan menimpa data integer
    // std::cout << "nilai_float : " << data_kita.nilai_float << std::endl;


    // -------------------------------------------

    PaketData paket;

    paket.rawData[0] = 'N';
    paket.rawData[1] = 'A';
    paket.rawData[2] = 'H';
    paket.rawData[3] = 'I';

    std::cout << "header : " << paket.parsed.header << std::endl;
    std::cout << "command : " << paket.parsed.command << std::endl;
    std::cout << "payload pertama : " << paket.parsed.payloadPertama << std::endl;
    std::cout << "payload kedua : " << paket.parsed.payloadKedua << std::endl;

    return 0;

}