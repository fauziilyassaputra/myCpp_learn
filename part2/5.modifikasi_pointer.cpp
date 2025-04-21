#include<iostream>

union Datakita{
    int angka_integer;
    float angka_desimal;
    char* karakterPointer;
};


union my_array{
    int arrayBulat[5];
    float nilai_desimal;
};

int main(){
    // int angka_pertama = 20, angka_kedua = 30;
    // int *pointer_angka_pertama = &angka_pertama;
    // std::cout << "sebelum data dimodif : " << *pointer_angka_pertama << std::endl;

    // *pointer_angka_pertama = 50;
    // std::cout << "setelah data dimodif : " << *pointer_angka_pertama << std::endl;

    // pointer_angka_pertama = &angka_kedua;
    // std::cout << "nilai pointer dari pointer pertama adalah : " << *pointer_angka_pertama << std::endl;
    Datakita datakita;
    datakita.angka_integer = 25;
    std::cout << "nilai integer sekarang adalah  : " << datakita.angka_integer<< std::endl;

    float* pointer_nilai_desimal = reinterpret_cast<float*>(&datakita);
    *pointer_nilai_desimal = 3.14f;
    std::cout << "nilai float dari desimal adalah : " << datakita.angka_desimal << std::endl;

    char kata[] = "wello apa kabar ?";
    datakita.karakterPointer = kata;
    std::cout << "kata mutiara sebelum di modifikasi : " << datakita.karakterPointer << std::endl;

    *datakita.karakterPointer = 'H';
    std::cout << "kata telah dirubah : " << datakita.karakterPointer << std::endl;


    my_array my_array;

    my_array.arrayBulat[0] = 10;
    my_array.arrayBulat[1] = 20;
    my_array.arrayBulat[2] = 30;
    my_array.arrayBulat[3] = 40;
    my_array.arrayBulat[4] = 50;

    int* pointer_array = my_array.arrayBulat;
    for (int i = 0; i < 5 ; i++){
        std::cout << *(pointer_array + i) << " ";
    }
    return 0;

}
