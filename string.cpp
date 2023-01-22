#include <iostream>
#include <string>
using namespace std;

// string adalah kumpulan karakter
// string concatenation adalah penggabungan string
// bisa juga menghitung panjang dalam string
// menggunakan indeks untuk memanggil atau merubah
int main(){
    string nama = "Raihan Herlambang";
    string namadepan = "Raihan";
    string namabelakang = " Herlambang";
    string namapanjang = namadepan + namabelakang;

    cout << "Halo perkenalkan, namaku " << nama << endl;
    cout << "Halo namaku " << namapanjang << endl;
    cout << namadepan.append(namabelakang) << endl; //menggunakan append dalam penggabungan
    cout << "Panjangnya adalah " << nama.length() << endl; //menghitung panjang menggunakan length atau size
    cout << "Indeks pertama adalah " <<  nama[0] << endl; //menggunakan indeks untuk memanggil
    
    string array = "rai";
    array[0] = 'R';
    cout << "Array = " << array << endl; //mengubah data string

    string namaorang;

    cout << "Siapa namamu ? " << endl;
    getline(cin, namaorang); // fungsi getline untuk menampilkan string secara lengkap dengan cin
    cout << "nama mu adalah " << namaorang;
};
