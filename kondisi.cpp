#include <iostream>
#include <string>
using namespace std;

// kondisi digunakan untuk mengecek suatu pernyataan apakah tepat atau tidak

/*
dalam kondisi c++ terdapat :
if >> digunakan untuk mengecek suatu kondisi apakah benar sebelum dijalankan
else if >> digunakan sebagai opsi laiinya jika ingin mengecek suatu kondisi sebelum dijalankan
else >> digunakan untuk kondisi yang salah
switch >> digunakan untuk banyak blok kode alternatif
*/

int main(){

    if (int a = 12 << a <= 11) {
        cout << "Bener dong";
    }
    else if (int a = 12 << a >= 11) {
        cout << "Bener nich";
    }
    else {
        cout << "Salah eh kamumah";
    }
    cout << endl;

    int angka = 12;
    string result = (angka <= 18) ? "Bener dong": "Bener nich";
    cout << result << endl;

    //latihan kondisi
    int b = 20;

    if (b > 30) {
        cout << "Bener dong";
    }
    else if (b < 30) {
        cout << "Bener nich";
    }
    else {
        cout << "Salah eh kamumah";
    }
    cout << endl;

    int angka2 = 13;
    string result2 = (angka2 >= 12) ? "Bener dong": "Bener nich";
    cout << result2 << endl;

    // switch
    int angka4 = 4;
    switch (angka4) {
        case 1:
        cout << "Monday";
        break;
        
        case 2:
        cout << "Tuesday";
        break;

        case 3:
        cout << "Wednesday";
        break;

        case 4:
        cout << "Thursday";
        break;

        case 5:
        cout << "Friday";
        break;

        case 6:
        cout << "Saturday";
        break;

        case 7:
        cout << "Sunday";
        break;
    }
};