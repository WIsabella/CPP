//��ת�����е�����Ĳ�������ʱ����ǿ�����³����

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
        cout<<"��������ȷ������,������:"<<endl;
    }
    return 0;
    
    
}