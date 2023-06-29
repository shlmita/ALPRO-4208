#include <iostream>
#include <cstring>

using namespace std;

typedef struct {
    char nim[15];
    char nama[50];
    char jurusan[50];
    int tahunLulus;
} Mahasiswa;

int main() {
    int numMahasiswa;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> numMahasiswa;

    Mahasiswa* mahasiswa = new Mahasiswa[numMahasiswa];

    for (int i = 0; i < numMahasiswa; i++) {
        cout << "Data Mahasiswa " << i+1 << ":" << endl;
        cout << "NIM: ";
        cin >> mahasiswa[i].nim;
        cout << "Nama: ";
        cin >> mahasiswa[i].nama;
        cout << "Jurusan: ";
        cin >> mahasiswa[i].jurusan;
        cout << "Tahun Lulus: ";
        cin >> mahasiswa[i].tahunLulus;
        cout << endl;
    }

    for (int i = 0; i < numMahasiswa; i++) {
        cout << "Data Mahasiswa " << i+1 << ":" << endl;
        cout << "NIM: " << mahasiswa[i].nim << endl;
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "Jurusan: " << mahasiswa[i].jurusan << endl;
        cout << "Tahun Lulus: " << mahasiswa[i].tahunLulus << endl;
        cout << endl;
    }

    delete[] mahasiswa;

    return 0;
}
