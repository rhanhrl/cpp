#include <iostream>
#include <string>
using namespace std;

string ones[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
string teens[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
string tens[] = {"", "sepuluh", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};
string tenss[] = {"", "seribu", "dua ribu", "tiga ribu", "empat ribu", "lima ribu", "enam ribu", "tujuh ribu", "delapan ribu", "sembilan ribu"};
string tensss[] = {"", "sejuta", "dua juta", "tiga juta", "empat juta", "lima juta", "enam juta", "tujuh juta", "delapan juta", "sembilan juta", "sepuluh juta"};
string thousands[] = {"", "ribu", "juta", "milyar", "triliun"};

string convert(int n) {
    if (n < 0) {
        return "minus " + convert(-n);
    }
    if (n < 10) {
        return ones[n];
    }
    if (n < 20) {
        return teens[n - 10];
    }
    if (n < 100) {
        return tens[n / 10] + " " + ones[n % 10];
    }
    if (n < 1000) {
        return ones[n / 100] + " ratus " + convert(n % 100);
    }
    if (n < 10000){
        return tenss[n / 1000] + " " + convert(n % 1000);
    }
    if (n < 10000000){
        return tensss[n / 1000000] + " " + convert(n % 1000000);
    }
    for (int i = 0; i < 4; i++) {
        if (n < 1000 * (1 << (10 * (i + 1)))) {
            return convert(n / (1 << (10 * i))) + " " + thousands[i] + " " + convert(n % (1 << (10 * i)));
        }
    }
    return "error";
};

int main() {
    int n;
    cout << "Masukkan nilai mata uang (dalam ribu rupiah): ";
    cin >> n;
    cout << convert(n) << "rupiah" << endl;
    return 0;
};