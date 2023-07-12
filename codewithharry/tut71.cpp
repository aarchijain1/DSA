#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
    
int main()
{
    int ele;
    int size;
    vector<int> vec1;
    cout<<"enter the size "<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << "enter an element to vector";
        cin >> ele;
        vec1.push_back(ele);
    }
    // vec1.pop_back();
display(vec1);
vector<int>:: iterator iter = vec1.begin();
vec1.insert(iter,50, 566);
display(vec1);

    return 0;
}