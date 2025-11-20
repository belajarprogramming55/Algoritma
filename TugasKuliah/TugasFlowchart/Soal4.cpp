#include <iostream>
using namespace std;

int main() {
    char ulang;
    double angka1, angka2, hasil;

    do {
        cout << "Masukkan angka pertama: ";
        cin >> angka1;
        cout << "Masukkan angka kedua: ";
        cin >> angka2;

        hasil = angka1 + angka2;

        cout << "Hasil penjumlahan adalah: " << hasil << endl;
        cout << "Apakah Anda ingin menjumlahkan lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');
}