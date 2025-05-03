#include<iostream>
#include<string>

// template <typename T>
template <typename T>
T tambah(T a, T b){
    return a + b;
}

// --------------
template <typename T>
class Kotak{
    private:
    T value;
    public:
    Kotak(T nilai) : value(nilai) {}

    void setting_nilai(T nilai){
        value = nilai;
    }
    T ambilValue()  const {
        return value;
    }
};

// ----------------
template <typename T1, typename T2>
class  Pair{
    private:
    T1 pertama;
    T2 kedua;
    public:
    Pair(T1 p, T2 k) : pertama(p), kedua(k) {}

    void tampilkan() const {
        std::cout << "nilai pertama " << pertama << std::endl;
        std::cout << "nilai kedua "   << kedua << std::endl;
    }

};

// ----------------------------
// template special
template<typename T> class Printer{
    public:
    void print(T pesan) {std::cout << "generik: " << pesan << std::endl;}
};

template <>
class Printer<char> {
    public:
    void print(char pesan){
        std::cout << "Char: " << pesan << " (ASCII: " << int(pesan) << ")"  << std::endl;
    }
};



int main(){
    std::cout  <<  "pertambahan dengan integer: " << tambah(10, 5) << std::endl;
    std::cout  <<  "pertambahan dengan double: " << tambah(10.5, 2.7) << std::endl;
    std::cout  <<  "menggabungkan string: " << tambah(std::string("von "), std::string("lycaon")) << std::endl;

    // ----------------

    Kotak<int> kotak_tipe_integer(32);
    std::cout << "integer di kotak: " << kotak_tipe_integer.ambilValue() << std::endl;

    Kotak<double> kotak_tipe_double(23.50);
    std::cout << "double di kotak: " << kotak_tipe_double.ambilValue() << std::endl;

    // -----------------
    Pair<int, double> pair_pertama(10,15.5);
    pair_pertama.tampilkan();

    Pair<std::string, int> pair_kedua("hoshimi", 21);
    pair_kedua.tampilkan();

    // -------------------
    Printer<int> integer_pointer;
    integer_pointer.print(123);

    Printer<char> char_pointer;
    char_pointer.print('6');


    return 0;
    
}
