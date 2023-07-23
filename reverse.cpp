#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
    char kata[100];
    int panjang, i;

    cout << "Masukkan sebuah kata atau kalimat: ";
    cin.getline(kata, 100);

    panjang = strlen(kata);

    // membalikkan string dengan loop
    for (i = 0; i < panjang / 2; i++) {
        char tmp = kata[i];
        kata[i] = kata[panjang - i - 1];
        kata[panjang - i - 1] = tmp;
    }

    cout << "Hasil pembalikan: " << kata << endl;

    // membalikkan kembali string dengan fungsi reverse()
    reverse(kata, kata + panjang);

    cout << "Hasil pengembalian: " << kata << endl;

    return 0;
};