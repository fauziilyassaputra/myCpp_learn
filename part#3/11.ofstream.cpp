// 1.deklarasi dan membuka file .open()
// 2. mode operasi dari file
//  -ios::out (default)
//  -ios::app
//  -ios::trunc
//  -ios::binary
// 3. penulisan data ke file << cout
// 4.menutup .close()

// 1. ofstream
// 2. buka .open()
// 3. tulis data
// 4. close()

#include<iostream>
#include<fstream>
#include<fstream>

class Product{
    private:
    std::string nama;
    double harga;
    int jumlah;

    public:
    Product(std::string nama, double harga, int jumlah) : nama(nama), harga(harga), jumlah(jumlah) {};

    void simpanKeFile(const std::string &filename){
        std::ofstream outFile(filename, std::ios::app);
        if(outFile.is_open()) {
            outFile << "nama_produk: " << nama << " harga: " << harga << "jumlah: " << jumlah << std::endl;
            outFile.close();
            std::cout << "data produk berhasil disimpan!" << std::endl;
        } else{
            std::cout << "data gagal disimpan !" << std::endl;
        }
    }

    void informasiProduct(){
        std::cout << "nama: " << nama << std::endl;
        std::cout << "harga: " << harga << std::endl;
        std::cout << "jumlah barang: " << jumlah << std::endl;
    }
};

int main(){
    Product laptop("ROG flow", 2000.00, 4);
    Product monitor("ROG monitor", 300.00, 12);

    std::string filename = "katalog_produk.txt";
    laptop.simpanKeFile(filename);
    monitor.simpanKeFile(filename);

    laptop.informasiProduct();
    monitor.informasiProduct();

    return 0;
}
