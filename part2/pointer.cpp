#include <iostream>
#include <string>


struct Orang {
    std::string nama;
    int umur;
};


int main (){
    // int ---------------------------------
    int angka = 10;
    int* pointer_angka = &angka; // pointer_angka menyimpan alamat dari angka

    std::cout << "nilai dari variable angka : " << angka << std::endl;
    std::cout << "alamat memori dari variable angka : " << &angka << std::endl;

    std::cout << "nilai yang ditunjuk oleh si pointer angka tadi adalah : " << *pointer_angka << std::endl;
    std::cout << "alamat memori dari pointer_angka :" << pointer_angka << std::endl;

    *pointer_angka = 67;
    std::cout << "nilai dari variable angka setelah diubah melalui pointer : " << angka << std::endl;


    // float ---------------------------------

    float nilai_y =  4.5;
    float* nilai_pointer_y = &nilai_y;

    std::cout << "nilai y: " << nilai_y << std::endl;
    std::cout << "alamat memori dari y: " << &nilai_y << std::endl;
    std::cout << "pointer dari nilai pointer menyimpan alamat: " << nilai_pointer_y << std::endl;


    // int -----------------------------------

    int array[] = {1,2,3,4,5};
    int* pointer_array = array;

    std::cout << "alamat memori dari array adalah : " << array << std::endl;
    // std::cout << "alamat memori dari pointer array adalah : " << pointer_array << std::endl;

    for(int i = 0; i < 5; i++){
        std::cout << "elemen arr[" << i << "] = " << *(pointer_array + i)  << std::endl;
    }

    // struck  ----------------------
    Orang orang = {"anby demara", 19};
    Orang* pointer_orang =  &orang;

    std::cout << "nama : " << orang.nama << std::endl;
    std::cout << "umur : " << orang.umur << std::endl;

    pointer_orang->umur = 20;
    std::cout << "umur setelah diubah: " << orang.umur << std::endl;
    return 0;
}