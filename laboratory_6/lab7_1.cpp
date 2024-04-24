#include<iostream>

using namespace std;

class Animal
{
public:
    int age;
private:

};

class Dog:public Animal
{
public:
    void SetAge(int age)
    {
        this->age=age;
    }
    void ShowAge(){cout<<age<<endl;}
private:
};

int main()
{
    Dog d;
    d.SetAge(5);
    d.ShowAge();

}