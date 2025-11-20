#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

// Fungsi untuk menggabungkan dua subarray
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    
    vector<int> L(n1);
    vector<int> R(n2);
    
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    
    
    i = 0;
    j = 0;
    k = left;
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        
        merge(arr, left, mid, right);
    }
}

int main() {
    const int SIZE = 10;
    int numbers[SIZE];
    
    // untuk membuat nomor random
    srand(time(0));
    
    // menciptakan 10 nomor random
    cout << "Bilangan sebelum diurutkan:" << endl;
    for (int i = 0; i < SIZE; i++) {
        numbers[i] = rand() % 100 + 1;  // ciptakan nomor antara 1-100
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    // menggunakan merge sort untuk mengurutkan
    mergeSort(numbers, 0, SIZE - 1);
    
    // untuk menampilkan hasil pengurutan
    cout << "\nBilangan setelah diurutkan:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    return 0;
}