#include <iostream>
using namespace std;

int main() {
    int angka;
    bool isGenap;
    
    cout << "Masukkan angka: ";
    cin >> angka;
    
    
    isGenap = (angka % 2 == 0);
    
    cout << "Apakah genap? " << boolalpha << isGenap << endl;
    
    return 0;
}