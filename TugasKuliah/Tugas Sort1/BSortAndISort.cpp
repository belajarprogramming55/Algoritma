#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk menampilkan array
void tampilArray(const vector<int>& arr) {
    system("cls");
    for (size_t i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Bubble Sort
int bubbleSort(vector<int>& arr) {
    int langkah = 0;
    int n = static_cast<int>(arr.size());
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            langkah++; // setiap perbandingan dihitung
            if (arr[j] > arr[j + 1]) {
                // Tukar elemen
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return langkah;
}

// Insertion Sort
int insertionSort(vector<int>& arr) {
    int langkah = 0;
    int n = static_cast<int>(arr.size());
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0) {
            langkah++; // perbandingan dihitung setiap kali loop berjalan
            if (arr[j] > key)
                arr[j + 1] = arr[j];
            else
                break;
            j--;
        }
        arr[j + 1] = key;
    }
    return langkah;
}

int main() {
    int n;

    cout << "Masukkan jumlah data: ";
    cin >> n;
    vector<int> data(n);

    cout << "Masukkan " << n << " angka integer:\n";
    for (int i = 0; i < n; i++)
        cin >> data[i];

    // Simpan salinan array untuk setiap metode
    vector<int> arrBubble = data;
    vector<int> arrInsertion = data;

    cout << "\nData sebelum diurutkan: ";
    tampilArray(data);

    // Bubble Sort
    int langkahBubble = bubbleSort(arrBubble);
    cout << "\nHasil Bubble Sort (ascending): ";
    tampilArray(arrBubble);
    cout << "Jumlah langkah/perbandingan: " << langkahBubble << endl;

    // Insertion Sort
    int langkahInsertion = insertionSort(arrInsertion);
    cout << "\nHasil Insertion Sort (ascending): ";
    tampilArray(arrInsertion);
    cout << "Jumlah langkah/perbandingan: " << langkahInsertion << endl;

    // Kesimpulan sederhana
    cout << "\n=== KESIMPULAN ===\n";
    if (langkahBubble > langkahInsertion)
        cout << "Insertion Sort lebih efisien dari Bubble Sort pada data ini.\n";
    else if (langkahBubble < langkahInsertion)
        cout << "Bubble Sort lebih efisien dari Insertion Sort pada data ini.\n";
    else
        cout << "Keduanya memiliki efisiensi yang sama pada data ini.\n";

    return 0;
}