#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;       // pointer ke array yang menyimpan data
    int capacity;   // ukuran maksimal stack
    int top;        // indeks elemen teratas

public:
    // Konstruktor: alokasikan array dengan kapasitas yang ditentukan
    Stack(int maxCapacity) {
        capacity = maxCapacity;
        arr = new int[capacity];
        top = -1;   // artinya stack awalnya kosong
    }

    // Destructor: untuk membebaskan memori
    ~Stack() {
        delete[] arr;
    }

    // Operasi Push: menambahkan elemen ke puncak stack
    void push(int value) {
        if (top == capacity - 1) {
            // stack sudah penuh
            cout << "Stack penuh! Tidak bisa menambahkan elemen.\n";
        } else {
            top++;
            arr[top] = value;
            cout << "Berhasil push: " << value << "\n";
        }
    }

    // Operasi Pop: menghapus elemen dari puncak stack dan mengembalikannya
    int pop() {
        if (isEmpty()) {
            cout << "Stack kosong! Tidak ada elemen untuk di-pop.\n";
            return -1;  // bisa dikembalikan nilai sentinel (asumsi stack menyimpan bilangan non-negatif) 
        } else {
            int value = arr[top];
            top--;
            cout << "Berhasil pop: " << value << "\n";
            return value;
        }
    }

    // Operasi Peek: melihat elemen paling atas tanpa menghapusnya
    int peek() const {
        if (isEmpty()) {
            cout << "Stack kosong! Tidak ada elemen untuk di-peek.\n";
            return -1;
        } else {
            return arr[top];
        }
    }

    // Operasi IsEmpty: cek apakah stack kosong
    bool isEmpty() const {
        return (top == -1);
    }

    // Operasi Size: mengembalikan jumlah elemen saat ini di stack
    int size() const {
        return top + 1;  // karena top = -1 bila kosong, maka size = 0
    }
};

int main() {
    int kapasitas;
    cout << "Masukkan kapasitas maksimal stack: ";
    cin >> kapasitas;

    Stack stack(kapasitas);

    int pilihan;
    do {
        cout << "\n===== MENU STACK =====\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. IsEmpty\n";
        cout << "5. Size\n";
        cout << "6. Exit\n";
        cout << "Pilih operasi: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                int nilai;
                cout << "Masukkan nilai untuk push: ";
                cin >> nilai;
                stack.push(nilai);
                break;
            }
            case 2: {
                stack.pop();
                break;
            }
            case 3: {
                int topValue = stack.peek();
                if (!stack.isEmpty()) {
                    cout << "Elemen paling atas (peek): " << topValue << "\n";
                }
                break;
            }
            case 4: {
                if (stack.isEmpty()) {
                    cout << "Stack kosong.\n";
                } else {
                    cout << "Stack tidak kosong.\n";
                }
                break;
            }
            case 5: {
                cout << "Ukuran stack: " << stack.size() << "\n";
                break;
            }
            case 6: {
                cout << "Keluar dari program.\n";
                break;
            }
            default: {
                cout << "Pilihan tidak valid. Silakan ulangi.\n";
                break;
            }
        }
    } while (pilihan != 6);

    return 0;
}
