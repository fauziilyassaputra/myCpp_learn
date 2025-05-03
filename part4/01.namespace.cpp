#include<iostream>
#include<string>

namespace Operasimatematika {
int pertambahan(int a, int b) {return a + b ;}

int pengurangan(int a, int b) {return a - b;}
}

namespace OperasiString {
void print(const std::string &pesan) {std::cout << pesan << std::endl;}
}

// -------------

namespace PanggilNamaDepanDanBelakang {
void print(std::string nama_depan,std::string nama_belakang) {
    std::cout << "welcome " << nama_depan << " " << nama_belakang << std::endl;
}
}

// ---------------------
//  namespace bersarang
namespace Perusahaan {
namespace HumanResourse {
    void informasi_karyawan(){
        std::cout << "ini adalah informasi karyawan dari namespace humanresource" << std::endl;
    }
}
namespace Programmer {
void informasi_project(){
    std::cout << "ini adalah informasi projek dari namespace programmer";
}
}
}



int main(){
    int hasil = Operasimatematika::pertambahan(10, 5);
    std::cout << "hasil pertambahannya adalah: " << hasil << std::endl;

    OperasiString::print("hello");

    // ----------------------
    namespace PNDDB = PanggilNamaDepanDanBelakang;
    PNDDB::print("vivian", "banshee");

    // -----------------

    Perusahaan::HumanResourse::informasi_karyawan();
    Perusahaan::Programmer::informasi_project();

    return 0;
}
