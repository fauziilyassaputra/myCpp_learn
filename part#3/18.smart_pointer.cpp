//  C++11
// 
// RAII (resource acquisition is initialization)
// std::unique_ptr -> ekslusif
// std::shared_ptr -> ekslusif
// std::weak_ptr -> referensi

#include <iostream>
#include <memory>

class Siswa{
    public:
    std::string nama;

    Siswa(std::string nama) : nama(nama){
        std::cout << "nama pelajar ditambahkan info: " << nama << std::endl;
    }

    ~Siswa(){
        std::cout << "info dihapus yaitu adalah: " << nama << std::endl;
    }

    void tampilkan(){
        std::cout << "nama siswa adalah: " << nama << std::endl;
    }
};

// ----------------------

class Node{
    public:
    std::string nama;
    std::shared_ptr<Node> next;
    std::weak_ptr<Node> previous;

    Node(std::string nama) : nama(nama) {
        std::cout << "node sudah dibuat " << nama << std::endl;
    }
    ~Node(){
        std::cout << "node dari " << nama << "sudah dihancurkan "<< std::endl;
    }
};

int main(){
    std::unique_ptr<Siswa> siswa_pertama = std::make_unique<Siswa>("Qingyi");
    siswa_pertama->tampilkan();

    std::unique_ptr<Siswa> siswa_kedua = std::move(siswa_pertama);

    if(siswa_pertama == nullptr){
        std::cout << "siswa pertama null dipindah ke siswa kedua" << std::endl;
    }

    siswa_kedua->tampilkan();

    // -----------------

    std::shared_ptr<Siswa> siswa_ketiga = std::make_shared<Siswa>("jane doe");
    {
    std::shared_ptr<Siswa> siswa_keempat = siswa_ketiga;
    std::cout << "pembagian shared pointer adalah : " << siswa_ketiga.use_count() << std::endl;
    siswa_ketiga->tampilkan();
    }
    std::cout << "hasil dari shared count sekarang adalah: " << siswa_ketiga.use_count() << std::endl;


    // -------------------
    std::shared_ptr<Node> node_pertama = std::make_shared<Node>("node pertama");
    std::shared_ptr<Node> node_kedua = std::make_unique<Node>("node kedua");

    node_pertama-> next = node_kedua;
    node_kedua-> previous = node_pertama;

    return 0;

}
