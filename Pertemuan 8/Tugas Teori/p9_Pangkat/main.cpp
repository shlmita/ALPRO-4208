#include <iostream>

using namespace std;

int pangkat(int A, int B) {
    if (B == 0)
        return 1;
    else
        return A * pangkat(A, B - 1);
}

int main() {
    int A, B;
    cout << "Masukkan angka : ";
    cin >> A;
    cout << "Masukkan pangkat: ";
    cin >> B;

    if (B < 0) {
        cout << "Eksponen harus non-negatif." << endl;
    } else {
        int hasil = pangkat(A, B);
        cout << "Hasil pangkat: " << hasil << endl;
    }

    return 0;
}
