#include <iostream>
#include <array>

using namespace std;

//penjumlahan 2 bilangan
int tambah(int x, int y)
{
    int hasil = x + y;

    return hasil;
}

//pengurangan 2 bilangan
void kurang(int x, int y)
{
    cout << x - y << endl;
}

//total value elemen dalam array
int total(array<int, 4>z)
{
    int hasil = z[0] + z[1] + z[2] + z[3];
    return hasil;
}

//rata-rata elemen array
void rata(array<int, 4> c)
{
    float rat = 0.0;
    int bagi = 0;
    // Menjumlahkan elemen array
    for(int i=0; i<4; i++)
    {
        bagi += c[i];
    }
    // Menghitung rata-rata array
    rat = (float) bagi / 4;

    // Menampilkan hasil
    cout << "4. Hasil rata-rata dari [ ";
    for(int i=0; i<4; i++)
    {
        cout << c[i] << " ";
    }
    cout <<"] adalah " << rat << endl;
}


int main()
{
    int x,y;
    cout << "Masukan nilai x = ";
    cin >> x;
    cout << "Masukan nilai y = ";
    cin >> y;
    cout << endl;
    //penjumlahan 2 bilangan
    cout << "1. Hasil dari penjumlahan " << x << " + " << y <<" adalah " << tambah(x,y) << endl;

    //pengurangan 2 bilangan
    cout << "2. Hasil dari pengurangan " << x << " - " << y <<" adalah ";
    kurang(x,y);

    //total value elemen dalam array
    array<int, 4> elemen = {8,3,9,16};
    cout << "3. Hasil dari total [ 8 3 9 16 ] adalah " << total(elemen) << endl;

    //rata-rata elemen array
    array<int, 4>c = {9,3,8,7};
    rata(c);

    return 0;
}