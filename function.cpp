#include <iostream>
#include <string>
using namespace std;
    // fungsi
    void fungsi(){
        cout << "fungsi terpanggil" << endl;
    }

    void fungsi2(){
        cout << "fungsi berhasil" << endl;
    }

    void fungsi3(){
        cout << "fungsi selesai" << endl;
    }

    // fungsi dengan parameter

    void fungsi4(string nama){
        cout << nama << endl;
    }

    // default parameter
    void fungsi5(string negara = "indonesia"){
        cout << negara << endl;
    }

    // multiple parameter
    void fungsi6(string nama, int umur){
        cout << nama << " " << umur << " tahun" << endl;
    }

    // return values
    int fungsi7(int x, int y, int z){
        return x + y + z;
    }

    // pass by reference
    void swapnum(int &x, int &y){
        int z = x;
        x = y;
        y = z;
    }

    // pas by array
    void myFunction(int myNumber[5]) {
        for (int i=0; i < 5; i++){
            cout << myNumber[i] << '\n';
        }
    }

    // function overloading
    int func1(int x, int y){
        return x + y;
    }
    double func2(double x, double y){
        return x + y;
    }

    // rekursif
    int rekursif(int re){
        if(re == 1){
            return 1;
        } else {
            return re * rekursif(re -1);
        }
    }



int main(){
    fungsi();
    fungsi2();
    fungsi3();

    fungsi4("raihan herlambang");
    fungsi5("malaysia");
    fungsi5();
    fungsi5("timur leste");

    fungsi6("raihan herlambang", 20);
    fungsi6("raihan", 19);
    fungsi6("herlambang", 18);

    cout << fungsi7(10,20,30) << endl;

    int firstnum = 10;
    int secondnum = 20;

    cout << "before swap : " << '\n';
    cout << firstnum << secondnum << '\n';

    // memanggil fungsi
    swapnum(firstnum, secondnum);

    cout << "after swap : " << '\n';
    cout << firstnum << secondnum << '\n';

    int myNumber[5] = {10, 20, 30, 40, 50};
    myFunction(myNumber);

    return 0;

    //function overloading
    int mynum1 = func1(2,3);
    double mynum2 = func2(2.3, 3.2);
    cout << mynum1 << endl;
    cout << mynum2 << endl;


    //rekursif
    int re;
    cout << "masukan bilangan ? ";
    cin >> re;
    cout << "hasilnya adalah " << re << rekursif(re - 1) << endl;
    return 0;
}