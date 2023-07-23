#include <iostream>
#include <string>
using namespace std;

/*
enkapsulasi adalah suatu penyelasaian untuk memastikan data sensitif disembunyikan
dari pengguna, yang dalam pemecahan dilakukan dalam satu wadah.
*/

class pekerja{ //class
    private: //private access pengguna
        string name; //attribute
        string job;
        int salary;
    public: //public access pengguna
        void setName(string a){ //fungsi set untuk menetapkan nilai
            name = a;
        }
        string getName(){ //fungsi get untuk mengambil nilai
            return name;
        }
        void setJob(string b){
            job = b;
        }
        string getJob(){
            return job;
        }
        void setSalary(int c){
            salary = c;
        }
        int getSalary(){
            return salary;
        }
};

int main(){
    pekerja obj;
    obj.setName("Raihan Herlambang");
    obj.setJob("Front End Developer");
    obj.setSalary(5000000);

    cout << "Name   : " << obj.getName() << endl;
    cout << "Job    : " << obj.getJob() << endl;
    cout << "Salary : " << obj.getSalary() << endl;
};