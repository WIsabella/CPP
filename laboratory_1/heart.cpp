#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    float y=1.3,x=-1.2;
    while(y>=-1.1)
    {
        while(x<=1.2)
        {
            if(pow((x*x+y*y-1.0),3)-x*x*y*y*y<=0.0)
            {
                cout<<'*';
            }
            else 
            cout<<' ';
            x+=0.025;
        }
        cout<<endl;
        y-=0.06;
    }

   return 0;
}