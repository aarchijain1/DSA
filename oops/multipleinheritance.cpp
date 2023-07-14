#include <iostream>
using namespace std;
    class Animal{

    public:
        int age;
        int weight;

    public:
        void bark(){
            cout << "barking " << endl;
        }
    };
    class human{
    public:
        string color;

    public:
        void speak(){
            cout << "speaking" << endl;
        }
    };

    class children : public Animal, public human{

    };
int main()
{
 children c1;
 cout<<c1.age<<endl;
 c1.bark();
 c1.speak();
    return 0;
}