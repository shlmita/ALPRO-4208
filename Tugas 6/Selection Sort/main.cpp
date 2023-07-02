#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    vector<int> arr = {5, 2, 8, 12, 1, 6};

    selectionSort(arr);

    cout << "Hasil sorting Selection Sort: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}


//Time Complexity: O(n^2)
//Selection sort juga memiliki time complexity kuadratik karena membagi array menjadi dua bagian, yaitu bagian yang terurut dan bagian yang belum terurut.
//Pada setiap iterasi, selection sort mencari elemen terkecil (atau terbesar) dalam bagian belum terurut dan menukar posisinya dengan elemen pertama dalam bagian terurut.
//Dalam kasus terburuk, setiap iterasi memerlukan pencarian elemen minimum/maximum dalam bagian belum terurut.
//Jumlah operasi perbandingan dan pertukaran adalah sekitar n^2/2, di mana n adalah jumlah elemen dalam array.

//Space Complexity untuk ketiga metode selection sort adalah O(1).
//Metode tersebut hanya menggunakan variabel sederhana untuk memindahkan dan menukar elemen dalam array.
//Tidak ada penggunaan struktur data tambahan yang bergantung pada ukuran array.
