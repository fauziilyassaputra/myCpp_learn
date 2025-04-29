#include<iostream>
#include<string>

class SoftwareDeveloper{
    protected:
    std::string bahasa_pemograman;

    public:
    SoftwareDeveloper(std::string bp) : bahasa_pemograman(bp) {}

    void ngoding(){
        std::cout << "ngoding di bahasa: " << bahasa_pemograman << std::endl;
    }
};

class ProjectManager{
    protected:
    int jumlah_proejct;

    public:
    ProjectManager(int jp) : jumlah_proejct(jp) {}

    void manage_project(){
        std::cout << "manage project: " << jumlah_proejct << "  project" << std::endl;
    }
};

class Karyawan : public SoftwareDeveloper, public ProjectManager{
    private:
    std::string nama;

    public:
    Karyawan(std::string nk, std::string bp, int jp) : SoftwareDeveloper(bp), ProjectManager(jp), nama(nk){};

    void informasiKaryawan(){
        std::cout << "nama karyawan: " << nama  << std::endl;
        ngoding();
        manage_project();
    }

};

int main(){
    Karyawan karyawan("vivian", "C++", 5);
    karyawan.informasiKaryawan();
}
