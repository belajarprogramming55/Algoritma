#include <iostream>
#include <vector>
#include <limits>
using namespace std;

void printArray(int arr[], int start, int end) {
    for(int i = start; i <= end; i++) {
        cout << arr[i];
        if(i < end) cout << " ";
    }
    cout << endl;
}

void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    
    vector<int> L(n1), R(n2);
    
    
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    
    
    i = 0;
    j = 0;
    k = left;
    
    while (i < n1 && j < n2) {
        if (L[i] >= R[j]) {  // di ubah dari <= menjadi >=
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
        cout << "Merge Sort pada indeks " << left << " hingga " << right << ": ";
        printArray(arr, left, right);
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    while (!(cin >> n) || n <= 0) {
        cout << "Masukkan jumlah elemen yang valid (>0): ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<int> arr(n);
    cout << "Masukkan " << n << " elemen (pisah dengan spasi atau baris baru): ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Array awal: ";
    printArray(arr.data(), 0, n - 1);

    cout << "Proses Merge Sort:" << endl;
    mergeSort(arr.data(), 0, n - 1);

    cout << "\nArray setelah sorting: ";
    printArray(arr.data(), 0, n - 1);

    return 0;
}