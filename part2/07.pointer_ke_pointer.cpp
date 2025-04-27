#include<iostream>

void modifikasiNilai(int** pp){
    **pp = 100;
}

int main (){
    int x = 5;
    int* p = &x;
    int** pp = &p;

    std::cout << "nilai x " << x << std::endl;
    std::cout << "alamat dari x (&x) " << &x << std::endl;

    std::cout << "alamat dari p (alamat x ) " << p << std::endl;
    std::cout << "nilai p " << *p << std::endl;

    std::cout << "nilai dari pp (alamat si p) " << pp << std::endl;
    std::cout << "nilai yang ditunjuk dari si pp " << *pp << std::endl;
    std::cout << "nilai pp " << **pp << std::endl;

    // ---------------------

    std::cout << "nilai sebelum kita modifikasi adalah : " << x << std::endl;
    modifikasiNilai(pp);
    std::cout << "nilai yang sudah kita rubah dari double pointer: " << x << std::endl;



    // membuat matriks

    int baris = 3, kolom = 4;
    int **matrix = new int *[baris];
    
    for (int i =0; i < baris; ++i){
        matrix[i] = new int[baris];
    };

    for(int i = 0; i < baris;i++){
        for(int j = 0;j < kolom; ++j){
            matrix[i][j] = i * kolom + j;
        }
    }

    std::cout << "matriks adalah : " << std::endl;
    for(int i =0; i < baris; ++i){
        for(int j = 0;j < kolom; ++j){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for(int i = 0; i < baris; ++i){
        delete[] matrix[i];
    }
    delete [] matrix;


    return 0;
}
