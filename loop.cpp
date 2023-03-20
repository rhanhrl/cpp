#include <iostream>
using namespace std;

// c++ mempunyai perulangan (loop) seperti for, while, do while

/*
perulangan digunakan untuk mengetahui suatu blok kode yang jika kondisinya benar makan dijalankan
*/

int main(){
    
    /*
    int a = 20;
    while (a < 30) {
        cout << "Bilangan " << a << endl;
        a++;
    }
    return 0;
    */


    for (int b = 20; b < 30; b = b + 1) {
        cout << b << endl;
    }

    int c = 30;

    while (c < 40){
        cout << c << endl;
        c++;
    }

    do {
        cout << c << endl;
        c++;
    }
    while (c < 50);
    return 0;

    // menggunakan break
    
    /*
    
    for (int d = 40; d < 50; d = d + 1) {
        if (d==44) {
            break;
        }
        cout << d << endl;
    }
    return 0;
    */

    // switch 
    
    int day = 3;
    switch(day){
        case 1:
        cout << "monday";
        break;

        case 2:
        cout << "tuesday";
        break;

        case 3:
        cout << "wednesday";
        break;

        case 4:
        cout << "thursday";
        break;

        case 5:
        cout << "friday";
        break;

        case 6:
        cout << "saturday";
        break;

        case 7:
        cout << "sunday";
        break;
    }
    
}