#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    double num3;
    
    // Input bilangan
    cout << "Masukkan bilangan bulat pertama: ";
    cin >> num1;
    cout << "Masukkan bilangan bulat kedua: ";
    cin >> num2;
    cout << "Masukkan bilangan desimal: ";
    cin >> num3;
    
    // kalkulasi semuanya
    double sum = num1 + num2 + num3;
    double difference = num1 - num2 - num3;
    double product = num1 * num2 * num3;
    double quotient = (double)num1 / num2 / num3;
    
    // menunjukkan hasil
    cout << "\nHasil penjumlahan: " << sum << endl;
    cout << "Hasil pengurangan: " << difference << endl;
    cout << "Hasil perkalian: " << product << endl;
    cout << "Hasil pembagian: " << quotient << endl;
    
    return 0;
}