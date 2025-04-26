// Online C++ compiler to run C++ program online
#include <iostream>

void insertionSort(int arr[], int n){
    for (int i = 1; i < n;i++){
        int key = arr[i];
        int j = i - 1;
        // geser elemen yang lebih besar ke kanan
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    // Write C++ code here
    int arr[] = {12,11,13,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    insertionSort(arr, n);
    
    std::cout << "array setelah insertion sort : ";
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }

    return 0;
}
