#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
	string nama;
	string nim;
	float nilai;
};

int main() {
	Mahasiswa m;
	m.nama = "Kola Penyu";
	m.nim  = "20210801027";
	m.nilai = 88.5f;

	
	cout << "Nama : " << m.nama << endl;
	cout << "NIM  : " << m.nim << endl;
	cout << "Nilai: " << m.nilai << endl;

	return 0;
}

