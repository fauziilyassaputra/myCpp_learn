#include <iostream>

void print_ukuran_array(int array_kita[]){
    std::cout << "ukuran dari array di dalam fungsi adalah: " << sizeof(array_kita) << " bytes" << std::endl;
}

int main(){
    std::cout << "ukuran dari si char: " << sizeof(char) << " byte" << std::endl;
    std::cout << "ukuran dari si char: " << sizeof(int) << " byte" << std::endl;
    std::cout << "ukuran dari si char: " << sizeof(float) << " byte" << std::endl;
    std::cout << "ukuran dari si char: " << sizeof(double) << " byte" << std::endl;
    std::cout << std::endl;

    int array_kita[10];
    std::cout << "ukuran dari array[10] ini adalah: " << sizeof(array_kita) << " byte" << std::endl;
    std::cout << "ukuran dari array[10] ini adalah: " << sizeof(array_kita[0]) << " byte" << std::endl;

    // --------------
    print_ukuran_array(array_kita);


    return 0;
}
