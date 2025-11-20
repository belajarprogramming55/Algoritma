#include <iostream>
using namespace std;

int main () {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 10;

    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            cout << "Elemen ditemukan di indeks: " << mid << endl;
            return 0;
        }
        if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << "Elemen tidak ditemukan" << endl;
    return 0;
}