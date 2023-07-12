#include<iostream>
#include<vector>
using namespace std;

void printVec(vector<int> v){
    cout<<"size:"<< v.size()<<endl;
    for (int i = 0; i < v.size(); ++i)
    {
        /* code */
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    // pair
    
    // pair<int,string> p;
    // // p= make_pair(1,"abcd");
    // p={1,"abcd"};
    // pair<int,string> &p1=p;
    // p1.first=3;
    // cout<<p.first <<" and " << p.second<<endl;
    // int a[]={1,2,3};
    // int b[]={2,3,4};
    // pair<int,int> p_array[3];
    // p_array[0]={1,2};
    // p_array[1]={2,3};
    // p_array[2]={3,4};
    // swap(p_array[0],p_array[2]);
    // for (int i = 0; i < 3; i++)
    // {
    //     /* code */
    //     cout<<p_array[i].first<<""<< p_array[i].second<<endl;
    // }
    
// vector

vector<int> v(5);
// size input
int n;
cin>>n;
for (int i = 0; i < n; ++i)
{
    /* code */
    int x;
    cin>>x;
    printVec(v);
    v.push_back(x);
}

printVec(v);


}