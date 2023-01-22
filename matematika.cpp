#include <iostream>
#include <cmath>
using namespace std;
// terdapat fungsi matematika di dalam c++
// salah satunya min dan max


int main(){
    int angka;
    int angka2;

    cout << "Masukan angka : ";
    cin >> angka;
    cout << "Masukan angka ke 2 : ";
    cin >> angka2;
    cout << "Nilai max nya adalah " << max(angka, angka2) << endl;
    cout << "Nilai min nya adalah " << min(angka, angka2) << endl;
};