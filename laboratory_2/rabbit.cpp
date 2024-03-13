#include <iostream>

using namespace std;

int fun(int n);

int main()
{
    int n;
    cin>>n;
    cout<<"there are "<<fun(n)<<" male rabbits"<<endl;
}
int fun(int n)
{

    if(n==1||n==2)
    return 1;
    else if(n==3)
    return 2;
    else
    return fun(n-1)+fun(n-2);
}