/*polymorphism means many forms ie a quantity which exists in many forms.
for eg- father -he is a son ,a man ,a husband,etc.

2 types-
1)compile time/static - function overloading(1 function with same name)
               - operator overloading
2)run time/dynamic -method overriding 

*/
#include<iostream>
using namespace std;
 class a{
    public:
    void sayhello(){
        cout<<"hello aarchi"<<endl;
    }
     int sayhello(char name) {
        cout << "Hello aarchi" << endl;
        return 1;
    }
     void sayhello(string name){
        cout<<"hello"<< name<<endl;
    }
 };
 class B {
    public:
    int a;
    int b;

    public: 
    int add() {
        return a+b;
    }
    void operator +(B &obj1){
        int value1= this->a;
        int value2= obj1.a;
        cout<<"output"<< value2-value1<<endl;
    }
 };

int main(){
B obj1 , obj2;
obj1.a=4;
obj2.a=7;
obj1+ obj2;

    //  a obj1;
    //  obj1.sayhello("hi");
    return 0;
}