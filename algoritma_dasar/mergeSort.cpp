#include <iostream>

void merge(int arr[], int left, int mid, int right){
    int i,j,k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    // Buat array sementara untuk menampung kedua bagian
    int L[n1], R[n2];
    
    // salin data ke array sementara L[]
    for(i = 0; i < n1; i++){
        L[i] = arr[left + i];
    }
    // Salin data ke array sementara R[]
    for(j =0; j < n2; j++){
        R[j] = arr[mid + 1 + j];
    }
    // Gabungkan array L[] dan R[] ke dalam arr[left...right]
    i = 0; //indeks awal untuk L[]
    j = 0; //indeks awal untuk R[]
    k = left;  // indeks  awal untuk arr[]
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            std::cout << L[i] << std::endl;
            i++;
        } else{
            arr[k] = R[j];
            std::cout << R[j] << std::endl;
            j++;
        }
        k++;
    }
    
    // salin sisa elemen L[], jika ada
    while( i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    // salin sisa elemen R[], jika ada
    while(i < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
    
}

void mergeSort(int arr[], int left, int right){
    if(left < right){
        // cari titik tengah untuk membagi array, gunakan rumus yang aman dari overflow
        int mid = left + (right - left) / 2;
        
        // sort subarray kiri
        mergeSort(arr, left, mid);
        // sort subarray kanan
        mergeSort(arr, mid +1, right);
        // gabungkan kedua subarray yang sudah terurut
        merge(arr, left, mid,right);
    }
}

int main() {
    int arr[]   = {12,11,13,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    mergeSort(arr,0,n-1);
    
    std::cout << "sorted array (merge sort) : ";
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    

    return 0;
}
