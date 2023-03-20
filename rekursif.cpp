#include <iostream>

using namespace std;

/* membuat fungsi factorial sebagai parameter input 
dan mengembalikan sebuah integer
*/

int factorial(int n) {
  if (n == 1) { //pengecekan apakah input 1 atau tidak
    return 1;
  } else {
    return n * factorial(n-1); // mengalikan inputnya dengan hasil faktorial dikurangi 1
  }
}

int main() {
  int n;
  cout << "Masukkan bilangan: "; // proses input dengan memasukan bilangan yang di inginkan
  cin >> n; // memasukan nilai kepada variable n sebagai parameter input
  cout << "Faktorial dari " << n << " adalah " << factorial(n) << endl; // program akhir faktorial berdasarkan input
  return 0; // tanda program berakhir dengan tidak mengembalikan nilai
}