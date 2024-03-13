#include<iostream>

using namespace std;

int fib(int n);

int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;

}

int fib(int n)
{
    if(n==1||n==2)
    return 1;
    else if(n>2)
    return fib(n-1)+fib(n-2);
}