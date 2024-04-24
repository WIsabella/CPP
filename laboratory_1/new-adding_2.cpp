//翻转数字中当输入的不是数字时，增强程序的鲁棒性

#include<iostream>
using namespace std;

int main()
{
    int n,right_digit;
    cout<<"Enter the number:";
    if(cin >>n)
    {
        cout <<"The number in reverse order is ";
        do
        {
            right_digit =n%10;
            cout <<right_digit;
            n/=10;

        }while(n!=0);
        
    }
    else
    {
        cout<<"请输入正确的数字,请重试:"<<endl;
    }
    return 0;
    
    
}