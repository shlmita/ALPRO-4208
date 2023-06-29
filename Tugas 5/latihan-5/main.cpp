#include <iostream>
#include <cstring>

using namespace std;

typedef struct {
    char merk[50];
    char type[50];
    int tahun;
    char harga[20];
} Sepeda;

int main() {
    Sepeda data;
    Sepeda *pdata = &data;

    strcpy(pdata->merk, "Polygon");
    strcpy(pdata->type, "Sepeda Gunung");
    pdata->tahun = 2013;
    strcpy(pdata->harga, "2.000.000");

    cout << "Merk: " << pdata->merk << endl;
    cout << "Type: " << pdata->type << endl;
    cout << "Tahun: " << pdata->tahun << endl;
    cout << "Harga: " << pdata->harga << endl;

    return 0;
}
