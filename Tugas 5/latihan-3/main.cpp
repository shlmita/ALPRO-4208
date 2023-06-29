#include <iostream>

using namespace std;

typedef struct {
    double panjang;
    double lebar;
} PersegiPanjang;

typedef struct {
    double jariJari;
} Lingkaran;

typedef struct {
    double jariJari;
    double tinggi;
} Kerucut;

typedef struct {
    double jariJari;
} Bola;

double luasPersegiPanjang(PersegiPanjang& pp) {
    return pp.panjang * pp.lebar;
}

double luasLingkaran(Lingkaran& lingkaran) {
    return 22.0 / 7.0 * lingkaran.jariJari * lingkaran.jariJari;
}

double volumeKerucut(Kerucut& kerucut) {
    return 1.0 / 3.0 * 3.14159 * kerucut.jariJari * kerucut.jariJari * kerucut.tinggi;
}

double volumeBola(Bola& bola) {
    return 4.0 / 3.0 * 3.14159 * bola.jariJari * bola.jariJari * bola.jariJari;
}

int main() {
    PersegiPanjang pp{5.0, 3.0};
    Lingkaran lingkaran{4.0};
    Kerucut kerucut{3.0, 6.0};
    Bola bola{2.0};

    double hasilLuasPersegiPanjang = luasPersegiPanjang(pp);
    double hasilLuasLingkaran = luasLingkaran(lingkaran);
    double hasilVolumeKerucut = volumeKerucut(kerucut);
    double hasilVolumeBola = volumeBola(bola);

    cout << "Luas Persegi Panjang: " << hasilLuasPersegiPanjang << endl;
    cout << "Luas Lingkaran: " << hasilLuasLingkaran << endl;
    cout << "Volume Kerucut: " << hasilVolumeKerucut << endl;
    cout << "Volume Bola: " << hasilVolumeBola << endl;

    return 0;
}
