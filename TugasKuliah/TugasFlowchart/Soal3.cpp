#include <iostream>
using namespace std;

int main() {
    double nilai;
    char ulang;

do {
    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >60) {
        cout << "Lulus" << endl;
    } else {
        cout << "Tidak lulus" << endl;
        cout << "Apakah ingin menghitung lagi? (y/n): ";
        cin >> ulang;
    }

} while (ulang == 'y' || ulang == 'Y');

    return 0;
}