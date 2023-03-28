#include <iostream>

using namespace std;

bool isEven(int x) {
    if(x % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

bool isOdd(int x) {
    if(x % 2 != 0) {
        return true;
    } else {
        return false;
    }
}

bool isFactor(int x, int f) {
  if(x % f == 0) {
    return true;
  } else {
    return false;
  }
}

int sumEven(int a[]) {
  int sum = 0;
  for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
    if(a[i] % 2 == 0) {
      sum += a[i];
    }
  }
  return sum;
}

int sumOdd(int a[], int n) {
  int sum = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] % 2 != 0) {
      sum += a[i];
    }
  }
  return sum;
}

int maxN(int a[], int n) {
  int max = a[0];
  for(int i = 1; i < n; i++) {
    if(a[i] > max) {
      max = a[i];
    }
  }
  return max;
}

int minN(int a[], int n) {
  int min = a[0];
  for(int i = 1; i < n; i++) {
    if(a[i] < min) {
      min = a[i];
    }
  }
  return min;
}

int MaxArray(int a[], int n) {
  int max = a[0];
  for(int i = 1; i < n; i++) {
    if(a[i] > max) {
      max = a[i];
    }
  }
  return max;
}

int MinArray(int a[], int n) {
  int min = a[0];
  for(int i = 1; i < n; i++) {
    if(a[i] < min) {
      min = a[i];
    }
  }
  return min;
}

bool isFound(int x, int a[], int n) {
  for(int i = 0; i < n; i++) {
    if(a[i] == x) {
      return true;
    }
  }
  return false;
}

void swapN(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

int main()
{
    //isEven
    cout << "Bool isEven(int x)" << endl;
    int bil1;
    cout << "Masukkan sebuah bilangan: ";
    cin >> bil1;

    if(isEven(bil1)) {
        cout << "Bilangan " << bil1 << " adalah bilangan genap" << endl;
    } else {
        cout << "Bilangan " << bil1 << " adalah bilangan ganjil" << endl;
    }
    cout << endl;


    //---------------------------------------------------------------------
    //isOdd
    cout << "Bool isOdd(int x)" << endl;
    int bil2;
    cout << "Masukkan sebuah bilangan: ";
    cin >> bil2;

    if(isOdd(bil2)) {
        cout << "Bilangan " << bil2 << " adalah bilangan ganjil" << endl;
    } else {
        cout << "Bilangan " << bil2 << " adalah bilangan genap" << endl;
    }
    cout << endl;


    //---------------------------------------------------------------------
    //isFactor
    cout << "Bool isFactor(int x, int f)" << endl;
    int bil3, bilf;
    cout << "Masukkan sebuah bilangan: ";
    cin >> bil3;
    cout << "Masukkan sebuah faktor: ";
    cin >> bilf;

    if(isFactor(bil3, bilf)) {
        cout << bilf << " adalah faktor dari " << bil3 << endl;
    } else {
        cout << bilf << " bukan faktor dari " << bil3 << endl;
    }
    cout << endl;


    //---------------------------------------------------------------------
    //sumEven
    int arr[5];
    cout << "Masukkan 5 bilangan bulat: " << endl;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int evenSum = sumEven(arr);
    cout << "Jumlah seluruh bilangan genap dalam array adalah: " << evenSum << endl;
    cout << endl;


    //---------------------------------------------------------------------
    //sumOdd
    cout << "Int sumOdd" << endl;
    cout << "Bilangan Array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}" << endl;
    int ar2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size2 = sizeof(ar2)/sizeof(ar2[0]);
    int hasil2 = sumOdd(ar2, size2);
    cout << "Jumlah elemen ganjil pada array adalah: " << hasil2 << endl;
    cout << endl;

    //---------------------------------------------------------------------
    //maxN
    cout << "Int maxN" << endl;
    cout << "Bilangan Array = {1, 4, 2, 7, 3, 9, 8, 5, 6}" << endl;
    int ar3[] = {1, 4, 2, 7, 3, 9, 8, 5, 6};
    int size3 = sizeof(ar3)/sizeof(ar3[0]);
    int hasil3 = maxN(ar3, size3);
    cout << "Nilai maksimum pada array adalah: " << hasil3 << endl;
    cout << endl;


    //---------------------------------------------------------------------
    //minN
    cout << "Int minN" << endl;
    cout << "Bilangan Array = {1, 4, 2, 7, 3, 9, 8, 5, 6}" << endl;
    int ar4[] = {1, 4, 2, 7, 3, 9, 8, 5, 6};
    int size4 = sizeof(ar4)/sizeof(ar4[0]);
    int hasil4 = minN(ar4, size4);
    cout << "Nilai minimum pada array adalah: " << hasil4 << endl;
    cout << endl;


    //---------------------------------------------------------------------
    //MaxArray
    cout << "Int MaxArray" << endl;
    cout << "Bilangan Array = {1, 4, 2, 7, 3, 9, 8, 5, 6}" << endl;
    int ar5[] = {1, 4, 2, 7, 3, 9, 8, 5, 6};
    int size5 = sizeof(ar5)/sizeof(ar5[0]);
    int hasil5 = MaxArray(ar5, size5);
    cout << "Nilai maksimum pada array adalah: " << hasil5 << endl;
    cout << endl;


    //---------------------------------------------------------------------
    //MinArray
    cout << "Int MinArray" << endl;
    cout << "Bilangan Array = {1, 4, 2, 7, 3, 9, 8, 5, 6}" << endl;
    int ar6[] = {1, 4, 2, 7, 3, 9, 8, 5, 6};
    int size6 = sizeof(ar6)/sizeof(ar6[0]);
    int hasil6 = MinArray(ar6, size6);
    cout << "Nilai minimum pada array adalah: " << hasil6 << endl;
    cout << endl;


    //---------------------------------------------------------------------
    //isFound
    cout << "Bool isFound(int x, int a[])" << endl;
    cout << "Bilangan Array = {1, 4, 2, 7, 3, 9, 8, 5, 6}" << endl;
    int ar7[] = {1, 4, 2, 7, 3, 9, 8, 5, 6};
    int size7 = sizeof(ar7)/sizeof(ar7[0]);
    int x = 7;
    bool hasil7 = isFound(x, ar7, size7);
    if(hasil7) {
        cout << "Nilai " << x << " ditemukan pada array." << endl;
    } else {
        cout << "Nilai " << x << " tidak ditemukan pada array." << endl;
    }
    cout << endl;


    //---------------------------------------------------------------------
    //swapN
    cout << "Void swapN(int a, int b)" << endl;
    int a = 5;
    int b = 10;
    cout << "Sebelum swap:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    swapN(a, b);
    cout << "Setelah swap:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << endl;


    return 0;
}
