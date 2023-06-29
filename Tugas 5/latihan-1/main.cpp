#include <iostream>

using namespace std;

typedef struct pPanjang
{
    int panjang;
    int lebar;
} persegiPanjang;

typedef struct lingkaran
{
    int jari_jari;
} Lingkaran;

typedef struct kerucut {
    float phi;
    int jari_jari;
    int tinggi;
} Kerucut;

typedef struct bola {
    float phi;
    int jari_jari;
} Bola;

int main()
{
    // persegi panjang
    persegiPanjang PP;
    PP.panjang = 7;
    PP.lebar = 3;
    int luas_persegi_panjang = PP.panjang * PP.lebar;

    cout << "Luas Persegi Panjang: " << luas_persegi_panjang << endl;


    // lingkaran
    Lingkaran lingkaran;
    lingkaran.jari_jari = 7;
    float luas_lingkaran = 22.0 / 7.0 * lingkaran.jari_jari * lingkaran.jari_jari;

    cout << "Luas Lingkaran: " << luas_lingkaran << endl;


    // kerucut
    Kerucut kerucut;
    kerucut.phi = 3.14;
    kerucut.jari_jari = 4;
    kerucut.tinggi = 6;
    float volume_kerucut = 1.0 / 3.0 * kerucut.phi * kerucut.jari_jari * kerucut.jari_jari * kerucut.tinggi;

    cout << "Volume Kerucut: " << volume_kerucut << endl;


    // bola
    Bola bola;
    bola.phi = 3.14;
    bola.jari_jari = 5;
    float volume_bola = 4.0 / 3.0 * bola.phi * bola.jari_jari * bola.jari_jari * bola.jari_jari;

    cout << "Volume Bola: " << volume_bola << endl;

    return 0;
}
