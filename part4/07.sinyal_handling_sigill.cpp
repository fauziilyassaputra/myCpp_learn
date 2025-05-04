#include<iostream>
#include<csignal>
#include<cstdlib>

void sinyal_handler(int nilai_sinyal){
    std::cerr << std::endl << "informasi sinyal" << nilai_sinyal << std::endl;
    std::exit(nilai_sinyal);
}

int main(){
    std::signal(SIGILL, sinyal_handler);

    std::cout <<  "program berjalan, coba test instruksi ilegal" << std::endl;

    // typedef void (*FuncPtr)();
    // FuncPtr function_invalid = reinterpret_cast<FuncPtr>(0x1);
    // function_invalid();

    asm("ud2");
    std::cout << "program tidak berjalan" << std::endl;

    return 0;
}
