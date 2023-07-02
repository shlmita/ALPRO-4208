#include <iostream>
#include <vector>

using namespace std;

// Linear Search function
int linearSearch(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }
    }

    // Return -1 if the target is not found
    return -1;
}

int main() {
    vector<int> arr = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int target = 12;

    int result = linearSearch(arr, target);

    if (result == -1) {
        cout << "Target tidak ditemukan!" << endl;
    }
    else {
        cout << "Target berada di index ke: " << result << endl;
    }

    return 0;
}



//Time Complexity: O(n)
//Linear search memiliki time complexity linier karena setiap elemen dalam array harus diperiksa secara berurutan.
//Jika elemen target berada di akhir array atau tidak ada dalam array, linear search akan memeriksa semua elemen.


//Space Complexity untuk linear search) adalah O(1).
//Metode tersebut tidak menggunakan struktur data tambahan yang bergantung pada ukuran array.
//Metode tersebut hanya menggunakan beberapa variabel sederhana untuk menyimpan indeks dan elemen sementara.
