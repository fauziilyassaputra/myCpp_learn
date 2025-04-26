#include <iostream>

int linearSearch(int arr[], int n, int x){
    for(int i = 0; i < n;i++){
        if(arr[i] == x){
            return i; // mengembalikan index jika ditemukan
        }
    }
    return -1; //mengembalikan -1 jika elemen tidak ditemukan
}

int main() {
    int arr[] = {10,23,45,70,11,42};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 45;
    
    int index = linearSearch(arr, n , x);
    
    if(index !=  -1){
        std::cout << "elemen ditemukan pada index " << index << std::endl;
    }else{
        std::cout << "elemen tidak ditemukan" << std::endl;
    }
   
    return 0;
}
