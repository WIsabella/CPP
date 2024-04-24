#include<iostream>

using namespace std;

void maxl(int x1,int x2);
void maxl(int x1,int x2,int x3);
void maxl(double x1,double x2);
void maxl(double x1,double x2,double x3);

int main()
{
    int flag=0;
    cout<<"two intergers,put in 1"<<endl;
    cout<<"three intergers,put in 2"<<endl;
    cout<<"two floats,put in 3"<<endl;
    cout<<"three floats,put in 4"<<endl;
    cin>>flag;
    int a,b,c;
    float x,y,z;
    switch(flag)
    {
        case 1:
        cin>>a>>b;
        maxl(a,b);
        break;

        case 2:
        cin>>a>>b>>c;
        maxl(a,b,c);
        break;

        case 3:

        cin>>x>>y;
        maxl(x,y);
        break;

        case 4:

        cin>>x>>y>>z;
        maxl(x,y,z);
        break;

        
    }

}
void maxl(int x1,int x2)
{
    int a=x1>x2?x1:x2;
    cout <<"the max is "<<a<<endl;
}

void maxl(int x1,int x2,int x3)
{
    int a=x1>x2?(x1>x3?x1:x3):(x2>x3?x2:x3);
    cout <<"the max is "<<a<<endl;
}

void maxl(double x1,double x2)
{
    float a=x1>x2?x1:x2;
    cout <<"the max is "<<a<<endl;
}
void maxl(double x1,double x2,double x3)
{
    float a=x1>x2?(x1>x3?x1:x3):(x2>x3?x2:x3);
    cout <<"the max is "<<a<<endl;
}