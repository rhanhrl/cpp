#include <iostream>
#include <string>
using namespace std;

// konstruktor adalah metode khusus yang dipanggil saat objek kelas dibuat
class tanaman{ //class
    public: //hak akses
        string nama; //attribute
        int umur;
        tanaman(string x, int y){ //konstruktor dengan parameter
            nama = x;
            umur = y;
        }
};

class hewan{
    public:
        string nama;
        string jenis;
        int umur;
        hewan(string a, string b, int c);
};

hewan::hewan(string a, string b, int c){
    nama = a;
    jenis = b;
    umur = c;
};

int main(){
    tanaman myobj("Melati", 1); //pemanggilan fungsi
    hewan myobj2("Harimau", "Omnivora", 2); 

    cout << "nama tanaman " << myobj.nama << " dengan umur " << myobj.umur << " tahun" << endl;
    cout << "nama hewan " << myobj2.nama << " jenis " << myobj2.jenis << " umur " << myobj2.umur << " tahun" << endl;
};