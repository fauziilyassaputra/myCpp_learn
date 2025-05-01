// <ctime> <chrono>
// 
// time_t: 1 januari (1970)
// std::time() time_t
// std::localtime()
// std::ascitime()
// std::strftime()

#include<iostream>
#include<ctime>
#include<chrono>

int main(){
    time_t tanggalSekarang = time(0);
    std::tm* waktuLokal = localtime(&tanggalSekarang);
    std::cout << "waktu sekarang adalah: " << asctime(waktuLokal);

    std::cout << "tahun " << 1900 + waktuLokal->tm_year << std::endl;
    std::cout << "bulan " << 1 + waktuLokal-> tm_mon << std::endl;
    std::cout << "hari " << waktuLokal->tm_mday << std::endl;
    std::cout << "jam " << waktuLokal->tm_hour << std::endl;
    std::cout << "menit " << waktuLokal->tm_min << std::endl;
    std::cout << "detik " << waktuLokal->tm_sec << std::endl;

    char bufferKata[80];
    std::strftime(bufferKata, 80, "%d-%m-%y %H:%M:%S", waktuLokal);
    std::cout << "tanggal yang sudah diformat: " << bufferKata << std::endl;

    // --------------------------
    std::chrono::system_clock::time_point sekarang = std::chrono::system_clock::now();

    time_t time_now = std::chrono::system_clock::to_time_t(sekarang);
    std::cout << "waktu sekarang adalah: " <<  std::ctime(&time_now)<< std::endl;


}
