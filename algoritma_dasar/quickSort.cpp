#include <iostream>

// fungsi untuk mempartisi array dan menentukan posisi pivot yang benar
int partition(int arr[], int low, int high){
    // pilih pivot sebagai elemen paling kanan
    int pivot = arr[high];
    int i = low - 1; 
    
    // lakukan iterasi dari indeks low sampai high-1
    for(int j = low; j < high; j++){
        // jika elemen saat ini lebih kecil atau sama dengan pivot, tukar dengan elemen di posisi i+1
        if(arr[j] <= pivot){
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    // tempatkan pivot pada posisi yang tepat
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[],int low, int high){
    if(low < high){
        // p adalah indeks pertisi, array p sudah berada pada posisi yang benar
        int p = partition(arr,low,high);
        // terapkan quick sort pada subarray di kiri pivot
        quickSort(arr, low, p - 1);
        // terapkan quick sort pada subarray di kanan pivot
        quickSort(arr, p + 1, high);
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1 ,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    quickSort(arr,0,n - 1);
    
    std::cout << "sorted array (Quick sort) :  " <<std::endl;
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }

    return 0;
}
