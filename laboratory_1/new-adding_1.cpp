//��do -while��д������Ȼ��1-100���ۼӺ�
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