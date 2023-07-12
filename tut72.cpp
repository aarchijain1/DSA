#include <iostream>
#include <list>
using namespace std;

// METHOD 2
void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        /* code */
        cout << *it<<" " ;
    }
    cout<<endl;
}

int main()
{
    list<int> list1;    // list of 0 lenght
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);

    // removing elements from the list
    //list1.pop_front();
    // list1.pop_back();
    list1.remove(9);
    display(list1);

    list<int> list2(3); // emplty list of size 3
    list<int>::iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=6;
    iter++;
    *iter=9;
    iter++;
    display(list2);





    // METHOD 1
    // list<int> :: iterator iter;
    // iter=list1.begin();
    // cout<<*iter<<endl;
    // iter++;
    // cout<< *iter<<endl;
    //  iter++;
    // cout<< *iter<<endl;
    //  iter++;
    // cout<< *iter<<endl;

    return 0;
}