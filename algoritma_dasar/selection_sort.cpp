#include <iostream>

void selectionSort(int arr[], int n){
    for(int i =0; i < n - 1; i++){
        int minIndex = i;
        // mencari elemen terkecil di sisa array
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        // tukar elemen pertama dari bagian yang belum terurut dengan elemen terkecil
        std::swap(arr[i],arr[minIndex]);
    }
}

int main() {
    // Write C++ code here
    int arr[] = {29,10,14,37,13};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    selectionSort(arr, n);
    
    std::cout << "Array setelah selection sort";
    for(int i =0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    
    return 0;
}
