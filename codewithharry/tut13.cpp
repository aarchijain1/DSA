#include<iostream>
using namespace std;

int main(){
    // array example
    // eg1
    int marks[4]={23,45,56,89}; //contigious merory allocation 
    // eg2
    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

// You can change the value of an array
    marks[2] = 455;
    cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    //printing value of marks using for loop 
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<marks[i]<<endl;
    // }

     //printing value of marks using while loop 
    //  int i=0;
    // while (i<4)
    // {
    //     cout<<marks[i]<<endl;
    //     i++;
    // }

    // printing value of marks using do while
    // int i=0;
    // do  
    // {
    //      cout<<marks[i]<<endl;
    //     i++;
    // } while (i<4);

    
    // pointer arithmetic
    // new address= current address + i * size of data type
    // new add= p+i
    // current add=p

    // POINTERS AND ARRAYS
    int* p=marks;
    cout<<"the value of *p is "<<*p<<endl;
    cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"the value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}