#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arr = {5, 2, 8, 12, 1, 6};

    insertionSort(arr);

    cout << "Hasil sorting Insertion Sort: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}



//Time Complexity: O(n^2)
//Insertion sort memiliki time complexity kuadratik karena membagi array menjadi dua bagian, yaitu bagian yang terurut dan bagian yang belum terurut.
//Pada setiap iterasi, insertion sort mengambil satu elemen dari bagian belum terurut dan memasukkannya ke posisi yang tepat dalam bagian terurut.
//Dalam kasus terburuk, jika array awalnya terurut secara terbalik, setiap elemen harus dipindahkan ke posisi awal melalui iterasi terpisah.
//Jumlah operasi perbandingan dan pergeseran adalah sekitar n^2/2, di mana n adalah jumlah elemen dalam array.

//Space Complexity untuk ketiga metode insertion sort adalah O(1).
//Metode tersebut hanya menggunakan variabel sederhana untuk memindahkan dan menukar elemen dalam array.
//Tidak ada penggunaan struktur data tambahan yang bergantung pada ukuran array.
