
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    string namaDepan, namaBelakang;
    char lagi;

    do {
        cout << "Masukkan nama depan: ";
        getline(cin, namaDepan);

        cout << "Masukkan nama belakang: ";
        getline(cin, namaBelakang);

        string hasil = "Halo, " + namaDepan + " " + namaBelakang + "! Selamat belajar algoritma.";
        cout << hasil << endl << endl;

        cout << "Ulangi? (y/n): ";
        cin >> lagi;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // bersihkan newline sebelum getline berikutnya
        cout << endl;
    } while (lagi == 'y' || lagi == 'Y');

    return 0;
}