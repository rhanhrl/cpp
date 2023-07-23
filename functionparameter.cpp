#include <iostream>
#include <string>
using namespace std;


// parameter / argumen
void myFunction(string name){
    cout << "hai " << name << endl;
}

// default parameter
void myFunction1(string country = "switzerland"){
    cout << "anda tinggal di negara " << country << endl;
}

int main(){
    string nama;
    string negara;
    string namabarang;
    string satuan;
    cout << "masukan nama ? ";
    cin >> nama;
    cout << "masukan negara ? ";
    cin >> negara;
    myFunction(nama);
    myFunction1(negara);

    return 0;
}