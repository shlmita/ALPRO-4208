#include <iostream>

using namespace std;

int penjumlahanRekursif(int n) {
    if (n == 0)
        return 0;
    else
        return n + penjumlahanRekursif(n - 1);
}

int main() {
    int angka = 6;
    int hasil = penjumlahanRekursif(angka);
    cout << "Penjumlahan dari bilangan faktorial 6! yaitu " << hasil << endl;

    return 0;
}
