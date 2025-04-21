#include<iostream>

int main(){
    // int array_kita[] = {100,200,300,400,500};
    // int* pointer_array_kita = array_kita;

    // std::cout << "pointer pertama adalah " << *pointer_array_kita << std::endl;

    // pointer_array_kita++;
    // std::cout << "ketika sudah di geser : " << *pointer_array_kita << std::endl;


    // pointer_array_kita += 2;
    // std::cout << "digeser 2 kali adalah : " << *pointer_array_kita << std::endl;

    // pointer_array_kita--;
    // std::cout << "balik lah: " << *pointer_array_kita << std::endl;

    int array_kita[] = {5,10,15,20,25};

    int* array_kita_elemen2 = &array_kita[1];
    int* array_kita_elemen5 = &array_kita[4];

    int jarak = array_kita_elemen2 - array_kita_elemen5;
    std::cout << " jarak antara array 2 dan 5 adalah : " << jarak << std::endl;
    
    char block_memori[] = {'A','B','C','D','E'};
    char  *pointer_blok_memori = block_memori;

    for (int i = 0; i < 5; i++){
        std::cout << "blok awal : "  << *(pointer_blok_memori + i) << std::endl;
    }

    std::cout << "setelahnya :  " << std::endl;
    *(pointer_blok_memori + 1) = 'Z';
    for (int i = 0; i < 5; i++){
        std::cout << "blok sekarang : "  << *(pointer_blok_memori + i) << std::endl;
    }


    return 0;
}