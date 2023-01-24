#include <iostream>
#include <string>
using namespace std;

// array multidimensi adalah array dari array yang dimana terdapat array di dalam dalam array.



int main(){
    string array[2][4] = {
        {"Raihan", "Herlambang", "14", "12"}, //contoh array multidimensi
        {"12", "14", "Herlambang", "Raihan"}
    };
    array[0][1] = "Raihan Herlambang"; //merubah array multidimensi
    cout << array[0][1] << endl;
    return 0;

    string array2[2][2] = {
        {"Raihan", "Herlambang"},
        {"Herlambang", "Raihan"}
    };
    for(int i = 0; i < 2; i++){ // menggunakan for untuk mengetahui nilai nya secara berurutan
        for(int j = 0; j < 4; j++){
            cout << array2[i][j] << endl;
        }
    };

    //array multidimensi tiga dimensi

    /*
    int array2[2][4][2] = {
        {
            {12, 14, 16, 18},
            {20, 22, 24, 26}      
        },
        {
            {28, 30, 32, 34},
            {36, 38, 40, 42}
        }
    };
    cout << array2[0][1][1] << endl;
    return 0;
    */
};
