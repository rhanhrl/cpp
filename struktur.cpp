#include <iostream>
#include <string>
using namespace std;

/* 
struktur digunakan dengan kata kunci struct, adalah untuk mengelompokan beberapa
variabel ke dalam satu tempat
*/

int main(){
    struct{ // mendeklarasikan variabel
        string nama; //member
        int angka; //member
    }myStruct; //struktur variabel

    myStruct.nama = "Raihan Herlambang";
    myStruct.angka = 14;

    cout << myStruct.nama << endl;
    cout << myStruct.angka << endl;

    cout << "\n";

    struct{
        string nama2;
        int angka2;
    }myStruct1, myStruct2, myStruct3; //menggunakan struktur variabel lebih dari 1

    myStruct3.nama2 = "Herlambang";
    myStruct2.angka2 = 12;

    cout << myStruct3.nama2 << endl;
    cout << myStruct2.angka2 << endl;

    cout << "\n";

    struct{
        string merk;
        string model;
        int tahun;
    } car1, car2;

    //mengisi dua struktur variabel mobil
    car1.merk = "Toyota";
    car1.model = "Supra";
    car1.tahun = 2002;

    car2.merk = "Nissan";
    car2.model = "GTR";
    car2.tahun = 2010;

    cout << "Merk1 = " << car1.merk << " Model = " << car1.model << " Tahun = " << car1.tahun << "\n";
    cout << "Merk2 = " << car2.merk << " Model = " << car2.model << " Tahun = " << car2.tahun << "\n";
    
    cout << "\n";

    // struktur bernama

    struct myShoes{
        string namasepatu;
        int size;
    };

    // membuat struktur
    myShoes shoes;
    shoes.namasepatu = "Adidas Gazelle II";
    shoes.size = 42;

    cout << shoes.namasepatu << endl;
    cout << shoes.size << endl;
};