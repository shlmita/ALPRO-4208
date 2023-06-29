#include <iostream>

using namespace std;

enum Aktivitas {
  Makan = 1,
  Tidur = 2,
  Belajar = 3,
  Bermain = 4
};

int main() {
  Aktivitas aktivitasHariIni;

  cout << "Pilih aktivitas yang Anda lakukan hari ini:\n";
  cout << "1. Makan\n";
  cout << "2. Tidur\n";
  cout << "3. Belajar\n";
  cout << "4. Bermain\n";

  int pilihan;
  cout << "Masukkan pilihan Anda (1-4): ";
  cin >> pilihan;

  switch (pilihan) {
    case 1:
      aktivitasHariIni = Makan;
      break;
    case 2:
      aktivitasHariIni = Tidur;
      break;
    case 3:
      aktivitasHariIni = Belajar;
      break;
    case 4:
      aktivitasHariIni = Bermain;
      break;
    default:
      cout << "Pilihan tidak valid!";
      return 0;
  }

  cout << "Aktivitas hari ini: ";

  switch (aktivitasHariIni) {
    case Makan:
      cout << "Makan";
      break;
    case Tidur:
      cout << "Tidur";
      break;
    case Belajar:
      cout << "Belajar";
      break;
    case Bermain:
      cout << "Bermain";
      break;
  }

  return 0;
}
