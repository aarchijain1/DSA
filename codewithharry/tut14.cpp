#include <iostream>
using namespace std;

// structure- user defined data type which is already available and we can use it when diff data tyes are present
typedef struct employe
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep;

// union- union is similar to structure but provides better memory management then structures.  Unions use shared memory so only 1 variable can be used at a time.
union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};

int main()
{
     enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<(m1==2);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner; 
    // union
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car<<endl;

    // structure
    ep harry;
    struct employe shubham;
    struct employe rohanDas;
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;

    cout << "The value is " << harry.eId << endl;
    cout << "The value is " << harry.favChar << endl;
    cout << "The value is " << harry.salary << endl;

    return 0;
}