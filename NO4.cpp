/*NAMA: DHEA TANIA SALSABILA HARAHAP
  NIM : 221401092
  LAB6 ADP
  "PROGRAM PERBAIKAN NO.4"
  */
#include <iostream>
using namespace std;

int tambah(int a, int b, int c) {
    return a + b + c;
}

int main() {
    system("CLS");
    cout << "Hello, world!" << endl;


    if (true) {
        cout << "Ini blok if" << endl;
    } else {
        cout << "Ini blok else" << endl;
    }


    int x = 5;
    cout << "Nilai x: " << x << endl;


    int hasil = tambah(3, 4, 5);
    cout << "Hasil penjumlahan: " << hasil << endl;


    switch (x) {
        case 5: 
            cout << "Nilai x adalah 5" << endl;
            break;
        default:
            cout << "Nilai x bukan 5" << endl;
    }

    int* ptr;
    ptr = new int;
    *ptr = 10;

    int y = 5;
    int* nullPtr = nullptr;
    nullPtr = &y;

    delete nullPtr;

    int* dynamicPtr = new int;
    *dynamicPtr = 7;
    delete dynamicPtr;
    dynamicPtr = nullptr;

    int arr[5];
    int* arrPtr = arr;
    arrPtr[4] = 10;

    return 0;
}