#include <iostream>
#include <string>
using namespace std;

//polimorfisme memiliki arti banyak bentuk

// kelas induk
class animal{
    public:
        void animalsound(){
            cout << "huuaaa";
        }
};


// kelas turunan
class tiger:public animal{
    public:
        void animalsound(){
            cout << "rawwrrr";
        }
};

class cat:public animal{
    public:
        void animalsound(){
            cout << "meowww";
        }
};

int main(){
    animal binatang;
    tiger macan;
    cat kucing;

    binatang.animalsound();
    cout << "\n";
    macan.animalsound();
    cout << "\n";
    kucing.animalsound();
};