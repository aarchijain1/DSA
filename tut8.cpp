#include<iostream>
#include<iomanip>
using namespace std;

// int c = 45;
int main(){
    // int a = 34; 
    // cout<<"The value of a was: "<<a;
    // a = 45; 
    // cout<<"The value of a is: "<<a;
    // Constants in C++
    // const int a = 3;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45; // You will get an error because a is a constant
    // cout<<"The value of a is: "<<a<<endl;
    

    // Manipulators in C++
    // int a =3, b=78, c=1233;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;

// ------------------knowing more about setw() manipulators---------------------------
// int n;
// cin>>n;
// for(int i=1; i<=n; i++){
//     for(int j=1;j<=i;j++){
//         cout<<setw(4)<<"*";
//     }
//     cout<<endl;
// }
// output
//    *
//    *   *
//    *   *   *
//    *   *   *   *

// -------------------------------------------

// for(int i=1; i<=n; i++){
//     for(int j=1;j<=i;j++){
//         cout<<setw(6)<<"*";
//     }
//     cout<<endl;
// }
// output
//      *
//      *     *
//      *     *     *
//      *     *     *     *







// Operator Precedence
    int a =3, b=4;
    // int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;
    return 0;
// https://en.cppreference.com/w/cpp/language/operator_precedence
 return 0;
}
