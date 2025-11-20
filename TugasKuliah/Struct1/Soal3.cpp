#include <iostream>
#include <string>

using namespace std;

struct Alamat {
    string kota;
    string provinsi;
};

struct Mahasiswa {
    string nama;
    string nim;
    Alamat alamat;
};

int main() {
    Mahasiswa m;
    m.nama = "Kaisar Wu Kong";
    m.nim = "20200801069";
    m.alamat.kota = "Bandung";
    m.alamat.provinsi = "Jawa Barat";

    cout << "Nama: " << m.nama << '\n';
    cout << "NIM: " << m.nim << '\n';
    cout << "Kota: " << m.alamat.kota << '\n';
    cout << "Provinsi: " << m.alamat.provinsi << '\n';

    return 0;
}