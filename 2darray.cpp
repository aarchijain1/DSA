#include<iostream>
using namespace std;

int main(){
    int i,n ,j,m;
    cin>>n>>m;
    int arr[n][m];
    for ( i = 0; i < n; i++)
    {
        /* code */
        for ( j = 0; j < m; j++)
        {
            /* code */
            cin>>arr[i][j];
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        /* code */
        for ( j = 0; j < m; j++)
        {
            /* code */
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // SEARCHING AN ELEMENT IN 2-D ARRAY
    int x;
    cin>>x;
    bool flag = false;
    for(int i=0; i<n;i++){
        for(int j=0; j<m;j++){
            if(arr[i][j]==x){
            cout<<i<<" "<<j<<endl;
            }
            flag =true;
        }
    }
    if(flag){
        cout<<"ele found"<<endl;
    }
    else{
        cout<<"ele not found"<<endl;
    }
    
    
    return 0;
}