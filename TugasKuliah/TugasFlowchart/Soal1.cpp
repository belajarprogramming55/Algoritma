#include <iostream>
using namespace std;

int main() {
    int bilangan;
    char gorengan;
do {
    cout << "Masukkan bilangan: ";

    if (bilangan % 2 == 0) {
        cout << "Bilangan Genap" << endl;
    } else {
        cout << "Bilangan Ganjil" << endl;
    }

     cout << "Ulangi (y/n)? ";
     cin >> gorengan;
} while (gorengan == 'y' || gorengan == 'Y');
    
    return 0;
}
