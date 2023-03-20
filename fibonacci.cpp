#include <iostream>

using namespace std;

int main(){  // variabel n digunakan 
   int n, a = 0, b = 1, c; //variabel n untuk menyimpan jumlah bilangan fibonacci yang dihasilkan
   cout << "Masukkan jumlah bilangan yang dinginkan : "; //proses input
   cin >> n;
   cout << "Hasil fibonacci: ";
   for(int i = 1; i <= n; i++) 
   {
      cout << a << " "; 
      c = a + b; //menentukan bilangan dalam fibonacci dengan a dan b disimpan di c
      a = b; //menggeser a dan b dengan b ke a
      b = c; // b ke c
   }
   return 0; //program selesai
}