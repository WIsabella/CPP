#include<iostream>
using namespace std;

void fun(char*a,char*b)
{
    int account=0;
    while(a[account]!='\0')
    {
        account++;
    }
    int j=0;
    while(b[j]!='\0')
    {
        a[account+j]=b[j];
        j++;
    }
    b[j]='\0';
}

int main()
{
    char a[100];
    char b[100];
    cin>>a>>b;
    fun(a,b);
    cout<<a<<endl;
}