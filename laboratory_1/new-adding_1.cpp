//用do -while改写计算自然数1-100的累加和
#include<iostream>
using namespace std;
int main()
{
    int i=1,sum=0;
    do
    {
        sum+=i;
        i++;

    }while(i!=101);
    cout <<"sum = "<< sum<<endl;
    return 0;

}