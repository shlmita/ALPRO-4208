#include <iostream>

using namespace std;

int perkalian(int a, int b) {
    if (b == 0)
        return 0;
    else
        return a + perkalian(a, b - 1);
}

int main() {
    int angka1, angka2;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    int hasil = perkalian(angka1, angka2);
    cout << "Hasil perkalian: " << hasil << endl;

    return 0;
}
