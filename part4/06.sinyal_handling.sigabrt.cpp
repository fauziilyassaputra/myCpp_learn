#include<iostream>
#include <csignal>
#include<cstdlib>
#include<cassert>

void sinyal_handler(int nilai_sinyal){
    std::cout << "informasi sinyal " << nilai_sinyal << std::endl;
    std::exit(nilai_sinyal);
}

int main(){
    // std::cout << "program dijalankan " << std::endl;
    // std::cout << "kayaknya program gk jelas... abort programnya" << std::endl;
    // std::abort();
    // std::cout << "ini proses yang jalan..." << std::endl;

    // std::signal(SIGABRT, sinyal_handler);
    // std::cout << "jalanin program" << std::endl;
    // std::cout << "simulasi error!" << std::endl;
    // std::abort();
    // std::cout << "line ini tidak akan di eksekusi" << std::endl;

    int x = 5;

    std::cout <<  "check assert" << std::endl;
    assert(x == 10);
    std::cout << "apakah dijalankan?" << std::endl;


    return 0;
}
