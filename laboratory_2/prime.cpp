#include<iostream>
#include<cmath>

using namespace std;

int fun(int a);

int main()
{
    int m,n;
    cin>>m>>n;
    int a=0;
    double sum=0;
    for(int i=m;i<=n;i++)
    {
        a=i;
        sum+=fun(a)*sqrt(a);
    }
    cout<<"the sum is "<<sum<<endl;
}
int fun(int a)
{
    int flag=1;
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        return 0;
    }
    return 1;
}