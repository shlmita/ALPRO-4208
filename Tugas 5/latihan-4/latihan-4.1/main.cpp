#include <iostream>

using namespace std;

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
    Mahasiswa mahasiswa[4];

    strcpy(mahasiswa[0].nim, "A11.2020.01234");
    strcpy(mahasiswa[0].nama, "Andi");
    strcpy(mahasiswa[0].jurusan, "Broadcasting");
    mahasiswa[0].tahunLulus = 2023;

    strcpy(mahasiswa[1].nim, "A11.2010.01234");
    strcpy(mahasiswa[1].nama, "Budi");
    strcpy(mahasiswa[1].jurusan, "Sistem Informasi");
    mahasiswa[1].tahunLulus = 2013;

    strcpy(mahasiswa[2].nim, "A11.2000.01234");
    strcpy(mahasiswa[2].nama, "Ali");
    strcpy(mahasiswa[2].jurusan, "DKV");
    mahasiswa[2].tahunLulus = 2003;

    strcpy(mahasiswa[3].nim, "A11.1990.01234");
    strcpy(mahasiswa[3].nama, "Siti");
    strcpy(mahasiswa[3].jurusan, "Kesehatan");
    mahasiswa[3].tahunLulus = 1993;

    for (int i = 0; i < 4; i++) {
        cout << "Data Mahasiswa " << i+1 << ":" << endl;
        cout << "NIM: " << mahasiswa[i].nim << endl;
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "Jurusan: " << mahasiswa[i].jurusan << endl;
        cout << "Tahun Lulus: " << mahasiswa[i].tahunLulus << endl;
        cout << endl;
    }

    return 0;
}
