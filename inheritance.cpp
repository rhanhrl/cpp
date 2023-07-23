#include <iostream>
#include <string>
using namespace std;

/*
inheritance adalah pewarisan attribute dan method dari sebuah kelas,
inheritance mempunyai 2 pewarisan :
1. derived class(kelas turunan atau anak) -> kelas yang mewarisi kelas lain.
2. base class (kelas dasar atau induk)-> kelas yang diwarisi
*/

//base class
class engine{
    public:
        string brand = "Toyota";
        void strip(){
            cout << "- ";
        }
};

//derived class
class car : public engine{
    public:
        string name = "Supra";
};

// multilevel inheritance
class manusia{
    public:
        string nama = "Raihan Herlambang";
        void sayhi(){
            cout << "HAI";
        }
};

class orang1 : public manusia{

};

class orang2: public orang1{

};

// multiple inheritance
class myclass{
    public:
        void hai1(){
            cout << "haloooo";
        }
};

class myclass2{
    public:
        void hai2(){
            cout << "holaaaa";
        }
};

class myclass3 : public myclass, public myclass2{

};

int main(){
    car obj;
    obj.strip();

    cout << "Mobil 1 : " << obj.brand << " " << obj.name << endl;

    orang2 obj2;
    obj2.sayhi();
    cout << "\n";

    myclass3 obj3;
    obj3.hai2();
    return 0;
};