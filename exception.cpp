#include <iostream>
#include <string>
using namespace std;

// exception atau pengecualian

/*
try -> menentukan blok kode yang akan diuji kesalahannya
throw -> melontarkan pengecualian saat masalah terdeteksi
catch -> menentukan blok kode yang akan dieksekusi jika terjadi pada try
*/


int main(){
    try{ // menentukan blok kode yang akan diuji
        int age = 15; // menetapkan variabel dengan nilai yang akan diuji
        if(age >= 16){ // menggunakan if untuk mengecek nilai yang akan diuji
            cout << "akses diterima" << endl;
        } else{
            throw(age); // jika salah maka throw memiliki fungsi sebagai pelontar pengecualian
        }
    }

    catch(int myage){ // catch digunakan untuk menentukan blok kode yang telah diuji pda try
        cout << "akses berhasil" << endl;
        cout << "umur = " << myage << " tahun" << endl;
    }
};
