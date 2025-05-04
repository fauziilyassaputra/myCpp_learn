#include <functional>
#include <iostream>
#include <thread>
#include <chrono>
#include<string>
#include<vector>

// void tampilin(){
//     std::cout << "ini adalah threading" << std::endl;
// }

void tampilin(int waktu, const std::string &pesan){
    for (int i = 0; i < waktu; ++i){
        std::cout << pesan << std::endl;
    }
}

void delay_tampilan(){
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "ngeprint setelah dua detik";
}

void kalkulasi_per_thread(const std::vector<int>& vec, int start, int end, int& hasil){
    hasil = 0;
    for (int i = start; i < end; ++i){
        hasil += vec[i];
    }
}

int main(){
    // std::thread t(tampilin);

    // t.join();
    // std::cout << "hello ini dari main thread" << std::endl;

    std::thread thread_kita(tampilin,5, "ini kata dari threading");
    thread_kita.join();

    std::thread thread_anonimus_fungsi([](){
        std::cout << "ini adalah output dari fungsi anonimus" << std::endl;
    });
    thread_anonimus_fungsi.join();


    std::thread thread_delay(delay_tampilan);
    thread_delay.join();

    std::cout << std::endl;


    std::vector<int> vec(10000, 1);
    int hasil =0, hasil2 = 0;
    std::thread vektor_thread(kalkulasi_per_thread,std::cref(vec), 0, vec.size() / 2, std::ref(hasil));
    std::thread vektor_thread_2(kalkulasi_per_thread,std::cref(vec), 0, vec.size() / 2, std::ref(hasil2));

    vektor_thread.join();
    vektor_thread_2.join();

    int hasil_semua = hasil + hasil2;
    std::cout << "hasilnya adalah: " << hasil_semua << std::endl;



    return 0;
}
