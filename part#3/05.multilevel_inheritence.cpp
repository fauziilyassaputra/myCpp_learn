#include<iostream>
#include<string>

class MakhlukHidup{
    protected:
    std::string nama;

    public:
    MakhlukHidup(std::string n) : nama(n) {};

    void bernapas(){
        std::cout << nama << "  bernapas" << std::endl;
    }
};

class Mamalia : public MakhlukHidup{
    public:
    Mamalia(std::string n) : MakhlukHidup(n) {}

    void caraBerkembangBiak(){
        std::cout << "mamalia berkembang biak dengan melahirkan" << std::endl;
    }
};

class Paus : public Mamalia{
    public:
    Paus(std::string n) : Mamalia(n) {}
    void bersuara(){
        std::cout << nama << " berbicara dengan suara sonar" << std::endl;
    }
};

int main(){
    Paus pausKita("nekomata");
    pausKita.bersuara();
    pausKita.caraBerkembangBiak();
    pausKita.bernapas();

    return 0;
}
