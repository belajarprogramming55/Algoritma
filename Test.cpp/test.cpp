#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    const int MAX_MOBIL = 100;
    string merk[MAX_MOBIL], model[MAX_MOBIL];
    int tahun[MAX_MOBIL];
    double harga[MAX_MOBIL];
    int jumlah = 0;
    int pilihan;

    do {
        cout << "\n===== SHOWROOM MOBIL =====\n";
        cout << "1. Tambah Data Mobil\n";
        cout << "2. Tampilkan Data Mobil\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu (1-3): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                if (jumlah >= MAX_MOBIL) {
                    cout << "Data mobil sudah penuh!\n";
                } else {
                    cout << "\nMasukkan data mobil ke-" << jumlah + 1 << endl;
                    cout << "Merk  : ";
                    cin >> merk[jumlah];
                    cout << "Model : ";
                    cin >> model[jumlah];
                    cout << "Tahun : ";
                    cin >> tahun[jumlah];
                    cout << "Harga : ";
                    cin >> harga[jumlah];

                    jumlah++;
                    cout << "Data mobil berhasil ditambahkan!\n";
                }
                break;

            case 2:
                if (jumlah == 0) {
                    cout << "\nBelum ada data mobil.\n";
                } else {
                    cout << "\n===== DAFTAR MOBIL =====\n";
                    cout << left
                         << setw(5)  << "No"
                         << setw(15) << "Merk"
                         << setw(15) << "Model"
                         << setw(10) << "Tahun"
                         << setw(15) << "Harga\n";
                    cout << fixed << setprecision(0);

                    cout << "\nNo | Merek         | Model        | Tahun | Harga\n";
                    cout << "------------------------------------------------------------\n";

                    for (int i = 0; i < jumlah; i++) {
                        cout << left
                             << setw(5)  << i + 1
                             << setw(15) << merk[i]
                             << setw(15) << model[i]
                             << setw(10) << tahun[i]
                             << setw(15) << harga[i] << endl;
                    }
                }
                break;

            case 3:
                cout << "\nTerima kasih telah menggunakan program showroom mobil.\n";
                break;

            default:
                cout << "\nPilihan tidak valid!\n";
        }

    } while (pilihan != 3);

    return 0;
}
