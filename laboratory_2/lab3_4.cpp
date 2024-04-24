#include<iostream>

using namespace std;

int pow(int ,int );

int main()
{
    int x=0,y=0;
    cin>>x>>y;
    cout<<pow(x,y)<<endl;

}

int pow(int x,int y)
{
    int a=x;
    for(int i=0;i<y-1;i++)
    {
        x*=a;
    }
    return x;
}