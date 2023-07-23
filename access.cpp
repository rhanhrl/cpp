#include <iostream>
using namespace std;

// access specifier atau hak akses yang menentukan kelas yang diakses

/*
public : dapat diakses dari luar kelas
private : tidak dapat diakses dari luar kelas
protected : tidak dapat diakses dari luar kelas namun bisa diakses dengan kelas yang diwariskan 
*/

class manusia{
    public: //public access
        string a;
    private: //private access
        string b;
};

int main(){
    manusia myobj;
    myobj.a = "raihan";
    // myobj.b = "herlambang"; //tidak bisa diakses karena private

    return 0;
};