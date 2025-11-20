// BubbleDanInsertionSort.cpp
#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& v) {
    system("cls");
    for (size_t i = 0; i < v.size(); ++i) {
        if (i) cout << " ";
        cout << v[i];
    }
    cout << "\n";
}

vector<int> bubbleSort(vector<int> a, long long &comparisons, long long &swaps) {
    comparisons = 0;
    swaps = 0;
    int n = (int)a.size();
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; ++j) {
            ++comparisons; // comparing a[j] and a[j+1]
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
                ++swaps;
                swapped = true;
            }
        }
        if (!swapped) break; // array already sorted
    }
    return a;
}

vector<int> insertionSort(vector<int> a, long long &comparisons, long long &moves) {
    comparisons = 0;
    moves = 0; // counts element moves (shifts) and final placement of key when it moves
    int n = (int)a.size();
    for (int i = 1; i < n; ++i) {
        int key = a[i];
        int j = i - 1;
        bool moved = false;
        while (j >= 0) {
            ++comparisons; // evaluating a[j] > key
            if (a[j] > key) {
                a[j+1] = a[j]; // shift right
                ++moves;
                --j;
                moved = true;
            } else {
                break;
            }
        }
        a[j+1] = key;
        if (moved) ++moves; // placing key (count if it actually moved)
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << "Masukkan jumlah elemen: ";
    int n;
    if (!(cin >> n) || n < 0) {
        cout << "Input tidak valid.\n";
        return 1;
    }

    vector<int> data(n);
    cout << "Masukkan " << n << " angka (integer), dipisah spasi atau newline:\n";
    for (int i = 0; i < n; ++i) cin >> data[i];

    cout << "\nData sebelum diurutkan:\n";
    printVector(data);

    // Bubble Sort
    long long bubbleComparisons = 0, bubbleSwaps = 0;
    vector<int> bubbleSorted = bubbleSort(data, bubbleComparisons, bubbleSwaps);
    cout << "\nHasil Bubble Sort (ascending):\n";
    printVector(bubbleSorted);
    cout << "Jumlah perbandingan (comparisons): " << bubbleComparisons << "\n";
    cout << "Jumlah pertukaran (swaps): " << bubbleSwaps << "\n";

    // Insertion Sort
    long long insComparisons = 0, insMoves = 0;
    vector<int> insSorted = insertionSort(data, insComparisons, insMoves);
    cout << "\nHasil Insertion Sort (ascending):\n";
    printVector(insSorted);
    cout << "Jumlah perbandingan (comparisons): " << insComparisons << "\n";
    cout << "Jumlah pergeseran/penempatan elemen (moves): " << insMoves << "\n";

    // Validasi dan kesimpulan sederhana
    bool same = (bubbleSorted == insSorted);
    cout << "\nValidasi: ";
    if (same) cout << "Kedua algoritma menghasilkan urutan yang sama.\n";
    else cout << "Hasil berbeda! (Ada kesalahan pada implementasi)\n";

    cout << "Perbandingan performa sederhana:\n";
    if (bubbleComparisons < insComparisons) cout << "- Bubble Sort melakukan lebih sedikit perbandingan.\n";
    else if (bubbleComparisons > insComparisons) cout << "- Insertion Sort melakukan lebih sedikit perbandingan.\n";
    else cout << "- Kedua algoritma melakukan jumlah perbandingan sama.\n";

    if (bubbleSwaps < insMoves) cout << "- Bubble Sort melakukan lebih sedikit swap/move.\n";
    else if (bubbleSwaps > insMoves) cout << "- Insertion Sort melakukan lebih sedikit swap/move.\n";
    else cout << "- Kedua algoritma melakukan jumlah swap/move sama.\n";

    cout << "\nKesimpulan singkat:\n";
    cout << "Kinerja relatif tergantung pada susunan input. Secara umum, Insertion Sort cenderung lebih efisien\n";
    cout << "jika data hampir terurut (lebih sedikit perbandingan/moves), sedangkan Bubble Sort biasanya lebih lambat\n";
    cout << "pada input acak. Lihat jumlah perbandingan dan moves di atas untuk menentukan mana yang lebih baik pada data ini.\n";

    return 0;
}