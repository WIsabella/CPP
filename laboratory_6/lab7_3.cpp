#include<iostream>
using namespace std;
class Vehicle
{
public:
    void Run(){cout<<"vehicle is run"<<endl;};
    void Stop(){cout<<"vehicle is stop"<<endl;};
private:
    int MaxSpeed;
    int Weight; 
};
class Bicycle:virtual public Vehicle
{
public:

private:
    int Height;
};
class Motorcar:virtual public Vehicle
{
public:

private:
    int SeatNum;
};

class Motorcycle:public Bicycle,public Motorcar
{
    public:
};

int main()
{
    Motorcycle m;
    m.Run();
    m.Stop();
}