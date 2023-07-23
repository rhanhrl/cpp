#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char kata[100];
    int i, j, panjang;
    bool palindrom = true;
    
    cout << "masukan kata atau kalimat: ";
    cin.getline(kata, 100);
    
    panjang = strlen(kata);
    
    for (i = 0, j = panjang - 1; i < panjang / 2; i++, j--) {
        if (kata[i] != kata[j]) {
            palindrom = false;
            break;
        }
    }
    
    if (palindrom) {
        cout << kata << " adalah palindrom" << endl;
    } else {
        cout << kata << " bukan palindrom" << endl;
    }
    
    return 0;
};