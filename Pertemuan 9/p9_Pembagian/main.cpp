#include <iostream>

using namespace std;

int pembagian(int a, int b) {
    if (a < b)
        return 0;
    else
        return 1 + pembagian(a - b, b);
}

int main() {
    int angka1, angka2;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    if (angka2 == 0) {
        cout << "Pembagian oleh nol tidak didefinisikan." << endl;
    } else {
        int hasil = pembagian(angka1, angka2);
        cout << "Hasil pembagian: " << hasil << endl;
    }

    return 0;
}
