#include <iostream>
#include <string>
using namespace std;


struct Mahasiswa {
    string nama;
    float nilai_akhir;
};

int main() {
    Mahasiswa mhs[5];
    float total = 0;
    
    cout << "=== Input Data Mahasiswa ===" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "\nMahasiswa ke-" << i+1 << endl;
        cout << "Nama: ";
        getline(cin, mhs[i].nama);
        cout << "Nilai Akhir: ";
        cin >> mhs[i].nilai_akhir;
        cin.ignore(); 

        total += mhs[i].nilai_akhir;
    }
    
    float rata_rata = total / 5;
    cout << "\n=== Hasil Perhitungan ===" << endl;
    cout << "Rata-rata nilai kelas: " << rata_rata << endl;
    
    return 0;
}