#include <iostream>
#include <string>
using namespace std;

// Classes 
class Car{
    public:
        string brand;
        Car(string name){brand=name;}
        void display(){
            cout<<"Car brand: "<<brand;
        }
};

class School{
    public:
        int totalStudents;
        // Parametrized constructor 
        School(int x){
            totalStudents = x;
        }
        // Copy constructor
        School(School& a){
            totalStudents = a.totalStudents;
        }
};
// Demonstrating the move constructor
class MyClass{
    private:
        int b;
    public:
        MyClass(int &&a):b(move(a)){
            cout<<"Move constructor called"<<endl;
        }
        void display(){
            cout<<b<<endl;
        }
};
// Encapsulation
class Programmer{
    private:
        string name;
        int age;
    public:
        // Getters
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        //Setters
        void setName(string newName){
            name = newName;
        }
        void setAge(int newAge){
            age = newAge;
        }

};
class Test{
    int x;
    int y;
    // 
    public:
        Test(){
            cout<<"Constructor called"<<endl;
        }
        ~Test(){
            cout<<"Destructor called";
        }
};

int main(){
//     // cout<<"Hello World"<<endl;
//     // string str = "GeeksforGeeks";
//     // cout<<str.substr(0,6)<<endl;
//     // return 0;
//     int var = 10;
//     // declare pointer and point it to the variable
//     int* ptr = &var;
//     cout<<"Value in var: "<<var<<endl;
//     cout<<"Address in var: "<<&var<<endl;
//     cout<<"Value stored in pointer: "<<ptr<<endl;
//     cout<<"Value pointed to by pointer: "<<*ptr<<endl;
//      int x = 42;
//     void* ptr1 = &x;
//     cout<<"The stored value in the void pointer is: "<<*(static_cast<int*>(ptr1))<<endl;

//        Car car1("BMW");
//    //car1.brand = "Bosch";
//    car1.display();
//     return 0;
//     // Void pointer
// Programmer prog;
// prog.setName("Ing. Seth");
// cout<<"Your name is: "<<prog.getName();
Test t;
return 0;
}