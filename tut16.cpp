#include<iostream>
using namespace std;
int sum(int a ,int b){
        int c =a+b;
        return c;
    }

    void swap(int a , int b){       //  temp   a   b
        int temp = a;               //  4      4   5
        a=b;                        //  4      5   5   isme temp ko nhi cheda sirf a ki value change ki hai
        b=temp;                     //  4      5   4   isme a ko nhi cheda sirf b ki value change ki hai
    }

    // CALL BY REFERENCE USING POINTERS
    // the main point here is that when the call by pointer method is used it changes the actual values 
    // because addresses of actual values are sent to the function.
    void swapPointer(int* a , int* b){       //  temp   a   b
        int temp = *a;                       //  4      4   5
        *a=*b;                               //  4      5   5   
        *b=temp;                             //  4      5   4   
    }

    // CALL BR REFERENCE USING REFERENCE VARIABLES
    void swapReferenceVar(int &a, int &b){      //temp a b
    int temp = a;                               //4   4  5   
    a = b;                                      //4   5  5
    b = temp;                                   //4   5  4 
    //  return a;
}

int main(){
    int a=4 , b=5;
    cout<<"the sum of 4 and 5 is "<<sum(a,b)<<endl;
    cout<<"the value of a is "<<a<< " and the value of b is "<<b<< endl; 

    swap(a,b);
     cout<<"the value of a is "<<a<< " and the value of b is "<<b<< endl; 
    // swap nahi hoga kyoki swap a aur b jab kiya toh a aur b ki value copy ho gayi hai upar wale a aur b mai(8th line)

    // swapPointer(&a,&b);
    //  cout<<"the value of a is "<<a<< " and the value of b is "<<b<< endl; 
    //  yaha pr humne &a &b ka reference de diya ki iska pata lelo
    //  ab swap ho jayega kyoki pehle humne value change karva di dereference operator ki help se 
    // aur fir humne address print karva diya a aur b ka kyoki ab toh value change ho gayi hai na (call by reference)

     swapReferenceVar(a,b);
    //  swapReferenceVar(a,b)=766;
     cout<<"the value of a is "<<a<< " and the value of b is "<<b<< endl; 
    return 0;
}