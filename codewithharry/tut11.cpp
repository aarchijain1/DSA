#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
        // for (int i = 0; i < 40; i++)
    // {
    //     /* code */
    //     if(i==2){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if(i==2){
            continue;
        }
        cout<<setw(3)<<i;
    }

    // output 2 is missing matlab voh wali iteration ko skip karva ke aage bad jayega
    // 0  1  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39
  return 0;  
} 
