#include<iostream>
using namespace std;

 int add(int a , int b){
return a+b;
 }
int add(int a, int b, int c){
    return a+b+c;
}

// Calculate the volume of a cylinder
int volume(double r, int h){
    return(3.14 * r *r *h);
}
// Calculate the volume of a cube
int volume(int a){
    return (a * a * a);
}

// Rectangular box
int volume (int l, int b, int h){
    return (l*b*h);
}
int main(){
    cout<<add(3,6)<<endl;
    cout<<add(3,6,7)<<endl;
    cout<<volume(3, 7, 6)<<endl;
    cout<<volume(3, 6)<<endl;
    cout<<volume(3)<<endl;
    return 0;
}