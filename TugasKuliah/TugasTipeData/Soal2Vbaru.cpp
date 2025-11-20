#include <iostream>
#include <string>

using namespace std;

int main() {
    int a;
    int b;
    int c;
    float d;
    double hasil;

    cout << "===============================================" << endl;
    cout << "     Program Operasi Aritmatika Sederhana" << endl;
    cout << "===============================================" << endl;
    
    cout << "silakkan pilih mau operasi apa?" << endl;
    cout << "pertambahan" << endl;
    cout << "pengurangan" << endl;
    cout << "perkalian" << endl;
    cout << "pembagian" << endl;

    cout << "masukkan pilihan : ";
    cin >> a;

    if(a == 1){
        cout << "masukkan bilangan bulat pertama : ";
        cin >> b;
        cout << "masukkan bilangan kedua : ";
        cin >> c;
        cout << "masukkan bilangan desimal : ";
        cin >> d;
        hasil = b + c + d;
        cout << "hasilnya adalah : " << hasil << endl;
    } else if(a == 2){
        cout << "masukkan bilangan pertama : ";
        cin >> b;
        cout << "masukkan bilangan kedua : ";
        cin >> c;
        cout << "masukkan bilangan desimal : ";
        cin >> d;
        hasil = b - c - d;
        cout << "hasilnya adalah : " << hasil << endl;
    } else if(a == 3){
        cout << "masukkan bilangan pertama : ";
        cin >> b;
        cout << "masukkan bilangan kedua : ";
        cin >> c;
        cout << "masukkan bilangan desimal : ";
        cin >> d;
        hasil = b * c * d;
        cout << "hasilnya adalah : " << hasil << endl;
    } else if(a == 4){
        cout << "masukkan bilangan pertama : ";
        cin >> b;
        cout << "masukkan bilangan kedua : ";
        cin >> c;
        cout << "masukkan bilangan desimal : ";
        cin >> d;
        hasil = b / c / d;
        cout << "hasilnya adalah : " << hasil << endl;
    } else {
        cout << "pilihan tidak ada" << endl;
    }

}