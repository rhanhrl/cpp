#include <iostream>

using namespace std;

int main()
{
   int bil1, bil2, fpb; /* mendeklarasikan tiga variabel integer: bil1 dan bil2 untuk menyimpan 
                           dua bilangan yang akan dicari FPB-nya, dan fpb untuk menyimpan nilai FPB. */
   cout << "Masukkan dua bilangan: "; // proses input
   cin >> bil1 >> bil2; // memasukan nilai kepada bil1 dan bil2
   
   for(int i = 1; i <= bil1 && i <= bil2; i++ // memeriksa apakah bilangan faktor yang dicari fpb dengan %
   )
   {
      if(bil1 % i == 0 && bil2 % i == 0)
      {
         fpb = i; //jika bilangan termasuk faktor dari kedua bilangan akan disimpan di fpb
      }
   }
   
   cout << "FPB dari " << bil1 << " dan " << bil2 << " adalah " << fpb << endl; // program menunjukan fpb yang dicari
   
   return 0; // program selesai
}
