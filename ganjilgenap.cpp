#include <iostream>
#include <string>
using namespace std;


int main(){
    string input1;
    char input2;

    cout << "masukan bilangan = ";
    cin >> input1;

    int num = stoi(input1);
    if(num % 2 == 0){
        cout << num << " adalah bilangan genap" << endl;
    } else {
        cout << num << " adalah bilangan ganjil" << endl;
    }

    cout << "lanjut y/n ? ";
    
    while(cin >> input2){
        if(input2 == 'y'){
            cout << "masukan bilangan = ";
            cin >> input1;

            int num = stoi(input1);
            if(num % 2 == 0){
                cout << num << " adalah bilangan genap" << endl;
            } else{
                cout << num << " adalah bilangan ganjil" << endl;
            } 
        } else {
            break;
        }
        cout << "lanjut y/n ? ";
    }
    return 0;
};