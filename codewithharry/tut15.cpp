#include <iostream>
using namespace std;

// Function prototype

// type function-name(arguments);
// int sum(int a ,int b);  //--acceptable
// int sum(int a , b);  //-- not acceptable
int sum(int, int); //--acceptable
// void g(void); //--acceptable
void g(); //--acceptable


int main()
{
    int num1, num2;
    // num1 and num2 are actual parameters
    cout << "enter value of num1" << endl;
    cin >> num1;
    cout << "enter value of num2" << endl;
    cin >> num2;
    cout << "the sum is " << sum(num1, num2)<<endl;;
     g();
    return 0;
   
}
int sum(int a, int b)
{
    // a and b will be taking values from actual parameters num1 and num2 and are called formal parameters
    int c = a + b;
    return c;
}
void g(){
    cout<<"hello good morning!";
}