#include <iostream>
using namespace std;

int main() {
    double umur;
    char ulang;

do {
    cout << "Masukkan umur Anda: ";
    cin >> umur;

    if (umur >18) {
        cout << "Anda sudah dewasa" << endl;
    } else {
        cout << "Anda belum dewasa" << endl;
    }

    cout << "Apakah Anda ingin memasukkan umur lagi? (y/n): ";
    cin >> ulang;

} while (ulang == 'y' || ulang == 'Y');

    return 0;
}
