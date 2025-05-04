#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    auto angka = 42;
    auto bilangan_pi = 3.14;

    std::cout << "nilai dari angka adalah: " << angka << std::endl;
    std::cout << "nilai dari bilangan pi adalah: " << bilangan_pi << std::endl;


    // --------------------

    std::vector<int> vektor = {1,2,3,4,5};

    //  auto aslinya =  std::vektor<int>::iterator
    for(auto it = vektor.begin(); it != vektor.end(); ++it){
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::vector<int> vektor_kita = {10,20,30,40,50};

    // asli auto adalah std::vector<int>::iterator
    auto maks_elemen = std::max_element(vektor_kita.begin(), vektor_kita.end());
    std::cout << "maks elemennya adalah: " << *maks_elemen << std::endl;

    auto hasil = [](int a, int b){return a + b;};
    std::cout << "hasil dari pertambahan 5 + 20 adalah " << hasil(5,20) << std::endl;


    // -------------
    std::vector<int> vektor_kita_2 = {12,13,14,15,16};

    for (auto elemennya : vektor_kita){
        std::cout << elemennya << " ";
    }
    std::cout << std::endl;

    return 0;
}
