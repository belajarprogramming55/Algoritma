#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;
struct Mahasiswa {
    string nama;
    string nim;
    double ipk;
};

int main() {
    const int N = 3;
    Mahasiswa mhs[N];

    cout << "Masukkan data " << N << " mahasiswa:\n";
    for (int i = 0; i < N; ++i) {
        cout << "\nMahasiswa " << (i + 1) << '\n';
        cout << "Nama : ";
        getline(cin, mhs[i].nama);
        if (mhs[i].nama.empty()) { 
            getline(cin, mhs[i].nama);
        }
        cout << "NIM  : ";
        getline(cin, mhs[i].nim);
        cout << "IPK  : ";
        while (!(cin >> mhs[i].ipk)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "IPK tidak valid. Masukkan angka: ";
        }
        //buang baris
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    
    cout << "\nDaftar Mahasiswa:\n";
    cout << left
              << setw(4)  << "No"
              << setw(30) << "Nama"
              << setw(16) << "NIM"
              << setw(6)  << "IPK" << '\n';
    cout << string(56, '-') << '\n';

    for (int i = 0; i < N; ++i) {
        cout << left
                  << setw(4)  << (i + 1)
                  << setw(30) << mhs[i].nama
                  << setw(16) << mhs[i].nim
                  << fixed << setprecision(2) << mhs[i].ipk
                  << '\n';
    }

    return 0;
}