#include <iostream>
#include <string>
using namespace std;

int main() {
    string input_uang1;
    char input_uang2;
    double nilai_uang;

    cout << "Masukkan nilai uang: ";
    cin >> input_uang1;

    // Mengkonversi string menjadi double
    nilai_uang = stod(input_uang1);

    // Menentukan mata uang
    if(nilai_uang > 0 && nilai_uang < 999.999) { 
        cout << "Nilai uang yang dimasukan adalah " << nilai_uang << " ribu rupiah" << endl;
    } else{
        cout << nilai_uang << " Nilai uang yang dimasukan salah" << endl;
    }

    cout << "lanjut y/n ? ";
    
    while(cin >> input_uang2){
        if(input_uang2 == 'y'){
            cout << "Masukan nilai uang : ";
            cin >> input_uang1;
            nilai_uang = stod(input_uang1);

            if(nilai_uang > 0 && nilai_uang < 999.999) { 
                cout << "Nilai uang yang dimasukan adalah " << nilai_uang << " ribu rupiah" << endl;
            } else{
                cout << nilai_uang << " Nilai uang yang dimasukan salah" << endl;
            }
        } else{
            break;
        }
        cout << "lanjut y/n ? ";
    }
    return 0;
};
