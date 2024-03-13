#include<iostream>

using namespace std;
float Convert(float TempFer);

int main()
{
    float TempFer;
    cin>>TempFer;
    cout<<Convert(TempFer)<<endl;


}

float Convert(float TempFer)
{
    float C=(TempFer-32.0)*5.0/9.0;
    return C;
    
}