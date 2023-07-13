#include<iostream>
using namespace std;

class student{
    private:
    // data members
    string name;
    int age;
    int height;

    // function
    int getage(){
        return this->age;
    }
};

int main(){
    // object creation
    student first;
    cout<<"sab sahi hai"<<endl;
    return 0;
}