//  there are 2 types of header files 
// 1)system header files:it comws with the compiler .eg. #include <iostream>
// 2)user defined header files: it is written by the programmer eg. this.h but it will produce an error if this.h is not present in the directory 

#include<iostream>
using namespace std;

int main(){
    int a=4,b=5;
    cout<<"operators in c++:"<<endl;
    cout<<"arithmetic operators:"<<endl; 
// arithmetic operator
cout<<"the value of a+b is:"<<a+b<<endl;
cout<<"the value of a-b is:"<<a-b<<endl;
cout<<"the value of a*b is:"<<a*b<<endl;
cout<<"the value of a/b is:"<<a/b<<endl;
cout<<"the value of a++ is:"<<a++<<endl;
cout<<"the value of a-- is:"<<a--<<endl;
cout<<"the value of ++a is:"<<++a<<endl;
cout<<"the value of --a is:"<<--a<<endl;

// assignment operators:used to assign values to variables
// int a=3,b=9;
// char d='d';




// relational operator/comparision operator: ==, !=, >, <, >=
// logical operator:&&(and), ||(or), !(not)
   return 0;
}
// https://en.cppreference.com/w/cpp/header