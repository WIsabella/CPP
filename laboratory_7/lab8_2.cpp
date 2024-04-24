#include<iostream>
using namespace std;

class Vehicle
{
    public:
    virtual void Run(){cout<<"vehicle is run"<<endl;}
    virtual void Stop(){cout<<"vehicle is stop"<<endl;}
};
class Motorcar:virtual public Vehicle
{
    public:
    virtual void Run(){cout<<"motorcar is run"<<endl;}
    virtual void Stop(){cout<<"motorcar is stop"<<endl;}
};
class Biocycle:virtual public Vehicle
{
    public:
    virtual void Run(){cout<<"biocycle is run"<<endl;}
    virtual void Stop(){cout<<"biocycle is stop"<<endl;}
};
class Motorcycle:virtual public Motorcar,public Biocycle
{
    public:
    virtual void Run(){cout<<"motorcycle is run"<<endl;}
    virtual void Stop(){cout<<"motorcycle is stop"<<endl;}
};

int main()
{
    Vehicle ve;
    Motorcar ca;
    Biocycle bi;
    Motorcycle cy;
    //ve.Run();
    //ca.Run();
    //bi.Run();
    //cy.Run();
    Vehicle *p;
    p=&ve;
    p-> Run();
    p-> Stop();
    p=&ca;
    p->Run();
    p->Stop();
    p=&bi;
    p->Run();
    p->Stop();
    p=&cy;
    p->Run();
    p->Stop();

}