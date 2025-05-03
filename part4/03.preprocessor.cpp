// #include -> menyertakan file header
// #define -> mendefinisikan makro
// #undef -> menghapus definisi makro
// #ifdef , #ifndef , #if , #else , #elif, #endif
// #pragma
// #error #warning


#include <iostream>
#define PI 3.14159
#define Kotak(x) ((x) * (x))
// #undef Kotak
#define DEBUG_MODE
#define VERSIAPLIKASI 2


int main(){
    std::cout << "nilai dari pi adalah " << PI << std::endl;

    int nilai = 5;
    std::cout << "luas dari sisi kotak adalah: "<< Kotak(nilai) << std::endl;

    // ---------------------------------
    #ifdef DEBUG_MODE
    std::cout <<  "mode dibug telah diaktifkan" << std::endl;
    #else 
    std::cout << "mode debug tidak diaktifkan" << std::endl;
    #endif

    // ----------------------------
    #if VERSIAPLIKASI == 1
        std::cout << "versi aplikasi v1 diaktifkan" << std::endl;
    #elif VERSIAPLIKASI == 2
        std::cout << "versi  aplikasi v2 diaktifkan" << std::endl;
    #elif VERSIAPLIKASI == 3
        std::cout <<  "versi aplikasi v3 diaktifkan" << std::endl;
    #endif


    // -----------------------
    


    return 0;
}
