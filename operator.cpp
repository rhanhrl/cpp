#include <iostream>
using namespace std;

//dalam cpp terdapat operasi aritmatika seperti + - * / %
//adapun operasi assignment seperti =, +=, -=, *=, /=, %=, &=, |=, ^=, >>=, <<=
//operasi komparasi seperti ==, !=, <, >, <=, >=
//operasi logis yang digunakan untuk bool seperti &&, ||, !

int main(){
    int angka1 = 16;
    int angka2 = 2;

    int x = 15;
    x += 5;

    int y = 13;
    int z = 14;

    bool boolean = true;
    bool boolean2 = false;

    //penambahan
    cout << angka1 + angka2 << endl;
    //pengurangan
    cout << angka1 - angka2 << endl;
    //perkalian
    cout << angka1 * angka2 << endl;
    //pembagian
    cout << angka1 / angka2 << endl;
    //modulus
    cout << angka1 % angka2 << endl;
    // assign
    cout << x << endl;
    // komparasi
    cout << (y < z) << endl;
    // logical
    cout << (boolean && boolean2) << endl;

    return 0;
}