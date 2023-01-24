#include <iostream>
using namespace std;

/*
referensi dalam c++ digunakan untuk variabel yang dimasukan ke dalam variabel referensi
*/

int main(){
    int angka = 14;
    int &angka2 = angka; // menggunakan operator &

    cout << angka << endl;
    cout << angka2 << endl;

    // alamat memori menggunakan &

    string nama = "Raihan";
    cout << &nama << endl;
}