#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int target = 12;

    int result = binarySearch(arr, target);

    if (result == -1) {
        cout << "Target tidak ditemukan!" << endl;
    }
    else {
        cout << "Target berada di index ke: " << result << endl;
    }
    return 0;
}



//Time Complexity: O(log n)
//Binary search memiliki time complexity logaritmik karena setiap langkah membagi ukuran array menjadi dua.
//Pada setiap iterasi, ukuran array yang perlu diperiksa berkurang menjadi setengah ukuran array sebelumnya.
//Oleh karena itu, dengan setiap iterasi, binary search dapat mengeliminasi setengah elemen yang tersisa untuk diperiksa.
//Sehingga, waktu yang diperlukan untuk menemukan elemen dalam binary search tumbuh secara logaritmik dengan ukuran array.

//Space Complexity untuk binary search adalah O(1).
//Metode tersebut tidak menggunakan struktur data tambahan yang bergantung pada ukuran array.
//Metode tersebut hanya menggunakan beberapa variabel sederhana untuk menyimpan indeks dan elemen sementara.
