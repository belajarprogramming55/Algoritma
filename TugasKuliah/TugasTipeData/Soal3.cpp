// File: Soal3.cpp
#include <iostream>

using namespace std;
int main() {
    char ch;
    cout << "Masukkan satu huruf: ";
    cin >> ch;
    cout << "Kode ASCII dari " << ch << " adalah " << static_cast<int>(ch) << '\n';
    return 0;
}