#include<iostream>

using namespace std;

int fun(int n);

int main()
{
    int amount =0;
    cin>>amount;
    int numb[amount]={0};
    float sum=0.0;
    float flag=0.0;
    for(int i=0;i<amount;i++)
    {
        cin>>numb[i];
        if(fun(numb[i])==1)
        {
            sum+=numb[i];
            flag+=1.0;
        }
        
    }
    cout <<"the ave is "<<(sum/flag)<<endl;
}
int fun(int n)
{
    if(n>0) return 1;
    else if(n<0) return -1;
    else return 0;
}