/*NAMA: DHEA TANIA SALSABILA HARAHAP
  NIM : 221401092
  LAB6 ADP
  "PROGRAM STRUCT"
  */

#include <iostream>
using namespace std;
struct data_tanggal
{
    int tahun;
    int bulan;
    int tanggal;

};
struct data_jenis
{
    char warna_bulu[10];
    char ras[20];
    char nama[25];
    data_tanggal lahir;

};

int main()
{
    data_jenis kucing;

    kucing.lahir.tahun=2022;
    kucing.lahir.bulan=01;
    kucing.lahir.tanggal=03;
    cin>>kucing.nama;
    cin>>kucing.warna_bulu;
    system("cls");
    cout<<kucing.nama<<endl;
    cout<<kucing.warna_bulu<<endl;

    cout<<kucing.lahir.tahun<<kucing.lahir.bulan<<kucing.lahir.tanggal;
    cout<<endl;
    system("pause");
}

