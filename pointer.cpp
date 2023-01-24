#include <iostream>
#include <string>
using namespace std;

//pointer digunakan untuk menyimpan alamat memori dengan menggunakan *

int main(){
    string food = "Ramen";
    string &food2 = food;
    string* ptr = &food; //pointer

    cout << &food << endl;
    cout << ptr << endl;

    //deferensi pointer digunakan untuk mendapatkan alamat dan value memori
    int number = 14;
    int* ptr2 = &number; //deferensi

    cout << *ptr2 << endl;

    //memodifikasi pointer

    double Float = 14.12;
    double* ptr3 = &Float;

    cout << *ptr3 << endl;

    *ptr3 = 12.14; //modify

    cout << *ptr3 << endl;
}