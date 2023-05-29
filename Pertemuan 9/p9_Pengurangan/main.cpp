#include <iostream>

using namespace std;

int pengurangan(int a, int b) {
    if (b == 0)
        return a;
    else
        return pengurangan(a - 1, b - 1);
}

int main() {
    int angka1, angka2;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    int hasil = pengurangan(angka1, angka2);
    cout << "Hasil pengurangan: " << hasil << endl;

    return 0;
}
