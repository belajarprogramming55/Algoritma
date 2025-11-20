#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct Mahasiswa {
    string nim;
    string nama;
    string jurusan;
    float ipk;
};


void tampilData(Mahasiswa mhs) {
    cout << "\nData Mahasiswa:" << endl;
    cout << "NIM     : " << mhs.nim << endl;
    cout << "Nama    : " << mhs.nama << endl;
    cout << "Jurusan : " << mhs.jurusan << endl;
    cout << "IPK     : " << mhs.ipk << endl;
}

int main() {
    int jumlah;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlah;
    cin.ignore();

    vector<Mahasiswa> mhs(jumlah);
    
    for(int i = 0; i < jumlah; i++) {
        cout << "\nMasukkan data mahasiswa ke-" << i+1 << ":" << endl;
        cout << "Nama     : "; getline(cin, mhs[i].nama);
        cout << "NIM      : "; getline(cin, mhs[i].nim);
        cout << "Jurusan  : "; getline(cin, mhs[i].jurusan);
        cout << "IPK      : "; cin >> mhs[i].ipk;
        cin.ignore();
    }
    
    for(int i = 0; i < jumlah; i++) {
        cout << "\nData Mahasiswa ke-" << i+1;
        tampilData(mhs[i]);
    }
    
    return 0;
}