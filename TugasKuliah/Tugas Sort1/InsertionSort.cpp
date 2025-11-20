#include <iostream>
#include <vector>

using namespace std;
void insertionSort(vector<int>& arr, int& comparisons) {
    system("cls");
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            comparisons++;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n = 10; // Number of elements
    vector<int> data(n);
    
    // Input data from user
    cout << "Masukkan " << n << " angka integer:\n";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    // Display data before sorting
    cout << "Data sebelum diurutkan:\n";
    for (int num : data) {
        cout << num << " ";
    }
    cout << endl;

    int comparisons = 0;
    insertionSort(data, comparisons);

    // Display sorted data
    cout << "Data setelah diurutkan (ascending):\n";
    for (int num : data) {
        cout << num << " ";
    }
    cout << endl;

    // Display number of comparisons
    cout << "Jumlah langkah/perbandingan: " << comparisons << endl;

    return 0;
}