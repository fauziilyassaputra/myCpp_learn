#include <iostream>

int binarySearch(int arr[], int left, int right, int x){
    while(left <= right){
        int mid = left + (right - left) / 2; //hitung index tengah untuk menghindari overflow
        
        // jika elemen tengah adalah elemen yang dicari
        if(arr[mid] == x){
            return mid;
        }
        if(arr[mid] < x){
            return mid + 1;
        } else{
            right = mid - 1;
        }
        
    }
    return -1; 
}

int main() {
    int arr[] = {2,4,6,8,12,34,65};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 12;
    
    int result =binarySearch(arr,0,n - 1,x);
    
    if(result != -1){
        std::cout << "elemen ditemukan pada index ke: " << result << std::endl;
    }else{
        std::cout << "elemen tidak ditemukan" << std::endl;
    }
   
    return 0;
}
