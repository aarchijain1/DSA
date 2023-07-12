// in this we have to find whether the given element in a matrix exists or not
// intergers in each row and column are sorted in ascending order from left to right and top to bottom resp
// return true/false 
#include<iostream>
using namespace std;

int main(){
    int i,n ,j,m;
    cin>>n>>m;
    int mat[n][m];
    for ( i = 0; i < n; i++){
        for ( j = 0; j < m; j++){
            cin>>mat[i][j];
        }
    }
    int x,r=0,c=m-1;
    cin>>x;
    bool flag=false;
    while(r<n && c>=0){
        if(mat[r][c]==x)
        flag=true;
    }
    if(mat[r][c]>x)
    {c--;}
    else {r++;}
    if(flag){ cout<<"ele found";}
    else {cout<<"ele not found";}
    return 0;
}