#include <iostream>
using namespace std;

int main() {
    char ulang;
    double panjang, lebar, luas;

do {
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;

    
    luas = panjang * lebar;

    
    cout << "Luas persegi panjang adalah: " << luas << endl;
    cout << "Apakah Anda ingin menghitung lagi? (y/n): ";
    cin >> ulang;

} while (ulang == 'y' || ulang == 'Y');
    
    return 0;
}

    