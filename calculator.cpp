#include<iostream>

using namespace std;

int main()
{
    char c='\0';
    double a=0.0,b=0.0;
    cout<<"������ʹ�õļ��㷽��(+-*/): "<<endl;
    cin>>c;
    getchar();
    cout<<"��ֱ�����Ҫ�����������(ע���Ⱥ�)"<<endl;
    cin>>a>>b;
    if(c=='+')
    {
        cout <<"a + b = "<< a+b <<endl;
    }
    else if(c=='-')
    {
        cout <<"a - b = "<< a-b <<endl;
    }
    else if(c=='*')
    {
        cout <<"a * b = "<<a*b<<endl;
    }
    else if(c=='/')
    {
        if(b!=0)
        cout <<"a / b = "<<a/b<<endl;
        else
        cout<<"����,��������Ϊ0"<<endl;
    }
    else
    cout<<"��Ч����"<<endl;

}