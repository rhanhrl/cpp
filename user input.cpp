#include <iostream>
using namespace std;

// sesudah cout, fungsi cin untuk menginput data user

int main(){
    int test;
    cout << "Masukan umur : ";
    cin >> test;
    cout << "Umur anda : " << test << endl;

    // membuat kalkulator sederhana
    int a, b;
    int sum1;
    cout << "Masukan angka : ";
    cin >> a;
    cout << "Masukan angka ke 2 : ";
    cin >> b;
    sum1 = a + b;
    cout << "Didapatkan hasil : " << sum1 << endl;
};
