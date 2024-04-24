#include<iostream>
using namespace std;
class BaseClass
{
public:
    BaseClass(){cout<<"struct a BaseClass!"<<endl;number++;GetNumber();};
    ~BaseClass(){cout<<"delete a BaseClass"<<endl;number--;GetNumber();};
    void GetNumber(){cout<<number<<endl;}
private:
    int Number;
    static int number;
};
int BaseClass::number=0;

class DerivedClass:public BaseClass
{
public:
    DerivedClass()
    {
        cout<<"struct a DerivedClass"<<endl;
        GetNumber();
    }
    ~DerivedClass(){cout<<"delete a DerivedClass"<<endl;GetNumber();};
private:
};
int main()
{
    DerivedClass d;
}