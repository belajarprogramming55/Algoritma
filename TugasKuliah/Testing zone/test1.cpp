#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
using namespace std;

const int MAX_ITEMS = 100;

struct Item {
    string nama;
    int jumlah;
    float harga;
};

int main() {
    Item transaksi[MAX_ITEMS];
    int jmlBarang = 0;
    float totalHarga = 0;
    bool adaDiskon = false;
    char lanjut;
    
    cout << "=== SISTEM KASIR MINI ===" << endl;
    
    // Input data barang
    do {
        cout << "\nBarang ke-" << jmlBarang + 1 << endl;
        if(jmlBarang > 0) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Nama barang   : ";
        getline(cin, transaksi[jmlBarang].nama);
        cout << "Jumlah        : ";
        cin >> transaksi[jmlBarang].jumlah;
        cout << "Harga satuan  : Rp ";
        cin >> transaksi[jmlBarang].harga;
        
        totalHarga += (transaksi[jmlBarang].jumlah * transaksi[jmlBarang].harga);
        jmlBarang++;
        
        cout << "\nMasih ada barang lain? (y/n): ";
        cin >> lanjut;
    } while ((lanjut == 'y' || lanjut == 'Y') && jmlBarang < MAX_ITEMS);
    
    // Cek diskon (misal: diskon 10% jika total harga pembelian > 100000)
    if(totalHarga > 100000) {
        adaDiskon = true;
        totalHarga = totalHarga * 0.9; // Diskon 10%
    }
    
    // Output struk
    cout << fixed << setprecision(0); // Menambahkan ini untuk format angka
    cout << "\n=== STRUK PEMBELIAN ===" << endl;
    for(int i = 0; i < jmlBarang; i++) {
        cout << transaksi[i].nama << " x" << transaksi[i].jumlah 
             << " = Rp " << transaksi[i].jumlah * transaksi[i].harga << endl;
    }
    cout << "-----------------------" << endl;
    cout << "Status Diskon : " << (adaDiskon ? "Ya (10%)" : "Tidak") << endl;
    cout << "Total Harga   : Rp " << totalHarga << endl;
    
    return 0;
}