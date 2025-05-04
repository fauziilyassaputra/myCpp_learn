#include<iostream>
#include<csignal>
#include<cstdlib> // exit()

void sinyal_handler(int angka_sinyal){
    std::cout << "sinyal interrupt " << angka_sinyal << " diterima" << std::endl;
    // std::cout << "membersihkan proses " << std::endl;
    std::exit(angka_sinyal);
}



int main() {
    // std::signal(SIGINT, sinyal_handler);
    // std::cout << "gunakan perintah ctrl + c untuk trigger si SIGINT" << std::endl;

    // std::signal(SIGINT, sinyal_handler);
    // std::cout << "ngeraise SIGTERM sinyal" << std::endl;
    // std::raise(SIGTERM);
    // std::cout << "program tetap berjalan setelah sinyal handling" << std::endl;

    // while (true) {}


    std::signal(SIGFPE, sinyal_handler);
    int a = 10, b = 0;
    std::cout << "uji coba bagikan angka 10 dan 0" << std::endl;
    int hasil = a / b;
    
    std::cout << hasil << std::endl;

    
    return 0;
}
