#include <iostream>
#include <string>
using namespace std;

// array adalah suatu kumpulan data yang terdiri dari banyak data berupa list atau index

int main(){
    // membuat array
    string array[3] = {"Raihan", "Herlambang", "Desember"};
    cout << array[0] << endl; //mengakses array
    cout << array[1] << endl;
    cout << array[2] << endl;

    cout << "\n";

    int array2[2] = {12, 13};
    array2[1] = 14; //mengubah data array
    cout << array2[0] << endl;
    cout << array2[1] << endl;

    cout << "\n";
    // menggunakan for

    string array3[4] = {"January", "February", "March", "April"};
    for(int i=0; i < 4; i++){
        //cout << array3[i] << endl;
        cout << i << "=" << array3[i] << endl;
    }
    /*
    for(int i : array3 ){
        //cout << array3[i] << endl;
        cout << i << endl;
    }
    menggunakan for depan
    */
}