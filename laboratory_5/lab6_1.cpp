#include<iostream>

using namespace std;

void fun(int a[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=i;j<3;j++)
        {
            int t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }
}

int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    fun(a);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}