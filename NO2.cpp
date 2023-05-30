/*NAMA: DHEA TANIA SALSABILA HARAHAP
  NIM : 221401092
  LAB6 ADP
  "Program menampung data yang bisa melakukan CREATE READ UPDATE DELETE(CRUD) dan gunakan Fungsi"
  */
#include <iostream>
#include <vector>
using namespace std;

// Struktur data untuk entri
struct Entry {
    int id;
    string name;
};

// Vektor untuk menyimpan data
vector<Entry> data;

// Fungsi untuk membuat entri baru dalam data
void createEntry() {
    Entry entry;
    cout << "Masukkan ID: ";
    cin >> entry.id;
    cin.ignore(); // Membersihkan newline character di buffer
    cout << "Masukkan Nama: ";
    getline(cin, entry.name);

    data.push_back(entry);
    cout << "Data berhasil ditambahkan." << endl;
}

// Fungsi untuk membaca semua entri dalam data
void readAllEntries() {
    if (data.empty()) {
        cout << "Data kosong." << endl;
    } else {
        for (const auto& entry : data) {
            cout << "ID: " << entry.id << ", Nama: " << entry.name << endl;
        }
    }
}

// Fungsi untuk memperbarui entri dengan ID tertentu dalam data
void updateEntry() {
    int id;
    cout << "Masukkan ID entri yang akan diperbarui: ";
    cin >> id;

    for (auto& entry : data) {
        if (entry.id == id) {
            cin.ignore(); // Membersihkan newline character di buffer
            cout << "Masukkan Nama baru: ";
            getline(cin, entry.name);
            cout << "Data berhasil diperbarui." << endl;
            return;
        }
    }

    cout << "Entri tidak ditemukan." << endl;
}

// Fungsi untuk menghapus entri dengan ID tertentu dari data
void deleteEntry() {
    int id;
    cout << "Masukkan ID entri yang akan dihapus: ";
    cin >> id;

    for (auto it = data.begin(); it != data.end(); ++it) {
        if (it->id == id) {
            data.erase(it);
            cout << "Data berhasil dihapus." << endl;
            return;
        }
    }

    cout << "Entri tidak ditemukan." << endl;
}

int main() {
    system("CLS");
    int choice;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Tampilkan Data" << endl;
        cout << "3. Perbarui Data" << endl;
        cout << "4. Hapus Data" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih opsi: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createEntry();
                break;
            case 2:
                readAllEntries();
                break;
            case 3:
                updateEntry();
                break;
            case 4:
                deleteEntry();
                break;
            case 5:
                cout << "Terima kasih. Program selesai." << endl;
                return 0;
            default:
                cout << "Opsi tidak valid. Silakan coba lagi." << endl;
        }

        cout << endl;
    }

    return 0;
}