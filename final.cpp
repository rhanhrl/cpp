#include <iostream>
using namespace std;
class baseClass {
public:
    virtual void perkenalan() final
    {
        cout<<"Hallo saya function dari class utama";
    
    }
};
class derivedClass: public baseClass{
public:
   void perkenalan() {
       cout<<"Hallo saya function dari class turunan";
   }
};
int main() {
    derivedClass a;
    a.perkenalan();

    return 0;
}