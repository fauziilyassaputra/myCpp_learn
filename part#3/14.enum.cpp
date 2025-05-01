#include<iostream>

enum Warna{
    Merah,
    Hijau,
    Biru,
};

// ------------------

enum Hari {
    Senin = 1,
    Selasa,
    Rabu = 15,
    Kamis // hasilnya 16
};

enum class Hewan{
    Srigala,
    Gajah,
    Beruang
};

enum Gelas{
    Gelas_wine = 200,
    Gelas_minum = 300,
    Gelas_kopi = 230,
};

enum Lampu{
    Off,
    On
};

void printLampu(Lampu Lampu){
    if (Lampu == On){
        std::cout << "lampunya hidup" << std::endl;
    } else{
        std::cout << "lampunya mati" << std::endl;
    }
}

int main() {
    Warna warnaSaya = Hijau;
    std::cout << "warna dari hijau adalah: " << warnaSaya << std::endl;

    if(warnaSaya == Hijau){
        std::cout << "warnanya sama hijau" << std::endl;
    } else{
        std::cout << "warnanya tidak sama hijau" << std::endl;
    }

    // ---------------------------

    Hari hariSaya = Kamis;
    std::cout << "nilai dari hari kamis adalah: " << hariSaya << std::endl;

    // ----------------------

    Hewan hewan_peliharaan_saya = Hewan::Srigala;

    if(hewan_peliharaan_saya == Hewan::Srigala){
        std::cout << "peliharaan saya adalah srigala" << std::endl;
    }

    // -------------------------
    Gelas ukuran_gelas = Gelas_kopi;

    std::cout << "ukuran dari gelas kopi adalah " << static_cast<int>(Gelas_kopi) << " ml" << std::endl;

    // -----------------------
    Lampu lampuSaya = On;
    printLampu(lampuSaya);


    return 0;
}
