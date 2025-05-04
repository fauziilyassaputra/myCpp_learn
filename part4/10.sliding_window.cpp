#include <iostream>
#include <climits>

int max_hasil_subarray(int arr[], int n, int k){
    int maks_hasil = INT_MIN, window_hasil = 0;

    for(int i = 0; i < k; i++){
        window_hasil += arr[i];
    }

    for(int i = k; i < n; i++){
        window_hasil += arr[i] - arr[i  - k];
        maks_hasil = std::max(maks_hasil, window_hasil);
    }
    return maks_hasil;
}

int main() {
    int arr[] = {2,1,5,1,4,3,2,7};
    int k = 3, n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "maks dari subarray dari size " << k << " adalah: " << max_hasil_subarray(arr, n, k) << std::endl;
    return 0;
}
