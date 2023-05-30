/*NAMA: DHEA TANIA SALSABILA HARAHAP
  NIM : 221401092
  LAB6 ADP
  "Program yang menggunakan Fungsi untuk menghitung nilai total Element Sebuah Array"
  */
#include <iostream>
using namespace std;


// Fungsi untuk menghitung total 
int hitungTotal(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    system("CLS");
    const int size = 7;
    int arr[size];

    cout << "Input " << size << " angka:\n";
    for (int i = 0; i < size; i++) {
        cout << "Angka ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    int total = hitungTotal(arr, size);
    cout << "Total elemen dalam array: " << total << endl;

    return 0;
}