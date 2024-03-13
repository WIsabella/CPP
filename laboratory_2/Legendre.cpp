#include<iostream>

using namespace std;

double fun(int n,int x);

int main()
{
    int n,x;
    cin>>n>>x;
    cout<<fun(n,x)<<endl;
}

double fun(int n,int x)
{
    if(n==0)
    return 1;
    else if(n==1)
    return x;
    else if(n>1)
    return ((2*n-1)*x*fun(n-1,x)-(n-1)*fun(n-2,x))/(double)n;

}