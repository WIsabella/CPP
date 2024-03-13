#include<iostream>

using namespace std;

int main()
{
    char c='\0';
    double a=0.0,b=0.0;
    cout<<"请输入使用的计算方法(+-*/): "<<endl;
    cin>>c;
    getchar();
    cout<<"请分别输入要计算的两个数(注意先后)"<<endl;
    cin>>a>>b;

    //使用 if 语句实现
    //if(c=='+')
    //{
    //    cout <<"a + b = "<< a+b <<endl;
    //}
    //else if(c=='-')
    //{
    //    cout <<"a - b = "<< a-b <<endl;
    //}
    //else if(c=='*')
    //{
    //    cout <<"a * b = "<<a*b<<endl;
    //}
    //else if(c=='/')
    //{
    //    if(b!=0)
    //    cout <<"a / b = "<<a/b<<endl;
    //    else
    //    cout<<"错误,除数不能为0"<<endl;
    //}
    //else
    //cout<<"无效输入"<<endl;

    //使用switch语句实现
    switch(c)
    {
        case '+':
        cout <<"a + b = "<< a+b <<endl;
        break;

        case '-':
        cout <<"a - b = "<< a-b <<endl;
        break;

        case '*':
        cout <<"a * b = "<<a*b<<endl;
        break;

        case '/':
        if(b!=0)
        cout <<"a / b = "<<a/b<<endl;
        else
        cout<<"错误,除数不能为0"<<endl;
        break;

        default:
        cout<<"无效输入"<<endl;

    }

}