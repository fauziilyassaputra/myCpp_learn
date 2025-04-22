#include<iostream>

int main(){
    int baris = 3, kolom = 3;
    int** matrix = new int*[baris];

    for(int i = 0; i < baris;++i){  
        matrix[i] = new int[kolom];
    }

    for(int i = 0;i < baris;++i){
        for(int j = 0; j < kolom;++j){
            matrix[i][j] = i * kolom + j + 1;
        }
    }

    std::cout << "matrixnya adalah :" << std::endl;
    for(int i = 0; i < baris;++i){
        for(int j = 0; j < kolom;++j){
            std::cout << matrix[i][j] << "  ";
        }
        std::cout << std::endl;
    }


    for(int i = 0; i < baris; ++i){
        delete[] matrix[i];
    }
    delete [] matrix;



    return 0;
}
