#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

int main() {
    vector<int> arr = {5, 2, 8, 12, 1, 6};

    bubbleSort(arr);

    cout << "Hasil sorting Bubble Sort: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}



//Time Complexity: O(n^2)
//Bubble sort memiliki time complexity kuadratik karena membandingkan dan menukar elemen-elemen secara berpasangan hingga array terurut.
//Dalam kasus terburuk, jika array awalnya terurut secara terbalik, setiap elemen harus dipindahkan ke posisi akhir melalui iterasi terpisah.
//Jumlah operasi perbandingan dan pertukaran adalah sekitar n^2/2, di mana n adalah jumlah elemen dalam array.


//Space Complexity untuk ketiga metode bubble sort adalah O(1).
//Metode tersebut hanya menggunakan variabel sederhana untuk memindahkan dan menukar elemen dalam array.
//Tidak ada penggunaan struktur data tambahan yang bergantung pada ukuran array.
