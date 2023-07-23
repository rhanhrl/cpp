#include <iostream>
#include <string>
using namespace std;

//class merupakan wadah untuk menampung suatu data
//object dibuat dari sebuah class

class myclass{ //class
    public: //hak akses
        string nama; //attribute
        int umur;
};

class car{
    public:
        string merk;
        string nama;
        int tahun;
};

int main(){
    myclass myobject; // inisiasi class
    myclass myobject2;

    myobject.nama = "Raihan"; // penambahan data
    myobject.umur = 20;

    myobject2.nama = "Herlambang";
    myobject2.umur = 21;

    car myobject3;
    myobject3.merk = "Toyota";
    myobject3.nama = "Supra";
    myobject3.tahun = 2002;

    struct{
        string nama;
        int nim;
        string jurusan;
    }mahasiswa; //struktur

    mahasiswa.nama = "Raihan Herlambang"; //penambahan data struktur
    mahasiswa.nim = 2130511005;
    mahasiswa.jurusan = "Teknik Informatika";


    cout << "Nama Saya " << myobject.nama << endl;
    cout << "Umur Saya " << myobject.umur << " tahun" << endl;
    cout << "\n";
    cout << "Nama Saya " << myobject2.nama << endl;
    cout << "Umur Saya " << myobject2.umur << " tahun" << endl;
    cout << "\n";
    cout << "Nama mahasiswa " << mahasiswa.nama << endl;
    cout << "Nim mahasiswa " << mahasiswa.nim << endl;
    cout << "Jurusan mahasiswa " << mahasiswa.jurusan << endl;
    cout << "\n";
    cout << "Merk mobil " << myobject3.merk << endl;
    cout << "Nama mobil " << myobject3.nama << endl;
    cout << "Tahun mobil " << myobject3.tahun << endl;
    cout << "\n";

    return 0; //program selesai
};