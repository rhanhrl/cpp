#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// fstream adalah library dari c++ untuk membuat untuk bekerja dengan file
/*
ofstream -> untuk membuat dan menulis kepada file
ifstream -> untuk membaca suatu file
fstream -> gabungan fungsi ofstream dan ifstream
*/
int main(){
    // membuat dan membuka sebuah teks file
    ofstream myfile("Hai.txt");

    // menulis kepada suatu file
    myfile << "It's available";

    // keluar dari program
    myfile.close();

    // membuat text
    string mytext;

    // membaca file
    ifstream myread("filename.txt");

    // menggunakan while dengan getline() untuk membaca file dari baris ke baris
    while (getline (mytext, myread)){
        cout << mytext;
    }

    // keluar dari program
    myread.close();
};