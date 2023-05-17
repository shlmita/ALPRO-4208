#include <iostream>

using namespace std;

void nilaiTerkecil(int A[], int n)
{
    int terkecil_ganjil = -1;
    int index_ganjil;
    bool ganjil = false;

    int terkecil_genap = -1;
    int index_genap;
    bool genap = false;

    for(int i = 0; i < n; i++){
        if(A[i] % 2 != 0){
            if(!ganjil || A[i] < terkecil_ganjil){
                terkecil_ganjil = A[i];
                index_ganjil = i;
                ganjil = true;
            }
        } else {
            if(!genap || A[i] < terkecil_genap){
                terkecil_genap = A[i];
                index_genap = i;
                genap = true;
            }
        }
    }

    if(ganjil){
        cout << "Nilai terkecil ganjil " << terkecil_ganjil << " terdapat pada index ke-" << index_ganjil << endl;
    } else {
        cout << "Tidak ada angka ganjil di array" << endl;
    }

    if(genap){
        cout << "Nilai terkecil genap " << terkecil_genap << " terdapat pada index ke-" << index_genap << endl;
    } else {
        cout << "Tidak ada angka genap di array" << endl;
    }
}

int main()
{
    int A[] = {6, 7, 4, 3, 2};
    int n = sizeof(A) / sizeof(A[0]);

    nilaiTerkecil(A, n);

    return 0;
}
