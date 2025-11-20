#include <iostream>
using namespace std;


enum Akun {
    DOSEN = 1,
    MAHASISWA = 2
};

int main() {
    int pilihan;
    
    cout << "Pilih jenis akun:\n";
    cout << "1. Dosen\n";
    cout << "2. Mahasiswa\n";
    cout << "Masukkan pilihan (1-2): ";
    cin >> pilihan;

    // Konversi pilihan ke enum Akun
    Akun jenisAkun = static_cast<Akun>(pilihan);

    // Menampilkan hasil pilihan
    cout << "Anda memilih akun: ";
    switch (jenisAkun) {
        case DOSEN:
            cout << "Dosen" << endl;
            break;
        case MAHASISWA:
            cout << "Mahasiswa" << endl;
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
    }

    return 0;
}