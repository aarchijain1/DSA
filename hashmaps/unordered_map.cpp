#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    //creation
    unordered_map<string, int> m;   //<key , value>


    //insertion
    //1
    pair<string , int>p = make_pair("babbar" , 3);
    m.insert(p);
    //2
    pair<string , int>pair2("love" , 2);
    m.insert(pair2);
    //3
    m["mera"] = 2;


    //searching
    cout<<m["mera"]<<endl;
    cout<<m.at("babbar")<<endl;
    return 0;
}