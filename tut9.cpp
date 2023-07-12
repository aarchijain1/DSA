// control structures:
// # basic control structures-
// 1)sequence structures-entry then action then exit
// 2)selection structures-entry then condition is checked t/f then action takes place and then finally exit (if else-if else / switch statements)
// 3)loop structures-entry then loop then condition is checked if t then action takes place then again loop and if f then action takes pace and then finally exit.

#include<iostream>
using namespace std;

int main(){
 int age;
    cout<< "Tell me your age"<<endl;
    cin>>age;


// --------------selection control statements----------

    // If else-if else ladder
    // if((age<18) && (age>0)){
    //     cout<<"you can not come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"you are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"you are not yet born"<<endl;
    // }
    // else{
    //     cout<<"you can come to the party"<<endl;
    // }

    // Switch Case statements
    switch (age)
    {
    case 18: 
        cout<<"You are 18"<<endl;
        break;
    case 22: 
        cout<<"You are 22"<<endl;
        break;
    case 2: 
        cout<<"You are 2"<<endl;
        break;

    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"Done with switch case";
     return 0;
     
}