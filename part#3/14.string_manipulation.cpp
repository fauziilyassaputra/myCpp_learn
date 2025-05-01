#include <cstddef>
#include <string>
#include<iostream>

int main(){
    std::string string_pertama = "makan malam";
    std::string string_kedua("makan siang");
    std::string string_ketiga;

    // std::cout << "masukkan string: ";
    // std::getline(std::cin, string_ketiga);

    std::cout << "string pertama adalah: " << string_pertama << std::endl;
    std::cout << "string kedua adalah: " << string_kedua << std::endl;
    std::cout << "string ketiga adalah: " << string_ketiga << std::endl;

    // --------------------------


    std::string nama_depan = "hoshimi";
    std::string nama_belakang = "miyabi";

    std::string nama_lengkap = nama_depan + " " + nama_belakang;

    nama_depan += " family";
    std::cout << "nama lengkap adalah: " << nama_lengkap << std::endl;
    std::cout << "nama tambahan: " << nama_depan << std::endl;

    std::cout<<std::endl;

    std::string nama_chief = "hoshimi miyabi";
    std::cout << "panjang dari string adalah: " << nama_chief.length() << std::endl;
    std::cout << "ukuran dari string ini adalah: " << nama_chief.size() << std::endl;
    std::cout << "karakter pertama: " << nama_chief[0] << std::endl;
    std::cout << "karakter terakhir: " << nama_chief.at(nama_chief.length() - 1) << std::endl;

    // ----------------------------
    std::string member = "asaba harumasa";
    std::string cek_nama_belakang = member.substr(6,8);

    std::cout << "nama belakang dari " << member << " adalah: " << cek_nama_belakang << std::endl;

    // ----------------------------
    std::string deputy = "tsukishiro yanagi deputy chief";
    size_t posisi = deputy.find("yanagi");

    if(posisi != std::string::npos){
        std::cout << "kata 'yanagi' di posisi: " << posisi << std::endl;
    } else{
        std::cout << "kata tidak ditemukan" << std::endl;
    }

    // ------------------
    std::string tukang_makan = "shoukaku is fighting";
    tukang_makan.replace(11,9, " eating");

    std::cout << "modifikasi string adalah: " << tukang_makan << std::endl;

    // -----------------
    std::string faksi = "HSO section 6";

    for(char c : faksi){
        std::cout << c << " ";
        // std::cout << c << std::endl;
    }
    std::cout << std::endl;

    // ----------------------
    std::string angka_string = "1234";
    int angka = std::stoi(angka_string);
    std::cout << "ubah string ke angka: "<< angka << std::endl;

    // --------------------
    int angka_pure = 678;
    std::string ubah_ke_string = std::to_string(angka_pure);
    std::cout << "ubah angka ke string: " << ubah_ke_string  + " angka string" << std::endl;

    return 0;
};
