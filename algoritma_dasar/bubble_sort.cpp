#include <iostream>

void bubbleSort(int arr[], int n){
  // loop untuk seluruh elemen kecuali elemen terakhir
    for(int i =0; i < n -1; i++){
      // loop untuk membandingkan pasangan elemen
        for(int j =0;j < n - i - 1;j++){
            if(arr[j] > arr[j + 1]){
              // tukar jika elemen saat ini lebih besar dari elemen berikutnya
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    // Write C++ code here
    int arr[] = {64,34,25,12,22,11,90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    bubbleSort(arr, n);
    
    std::cout << "array setelah bubble sort: ";
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    
    return 0;
}
