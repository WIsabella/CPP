#include<iostream>

using namespace std;

class Complex
{

    public:
    Complex(float re1,float im1):Re(re1),Im(im1){};
    Complex(float re1):Re(re1){};
    ~Complex(){};
    void add(Complex c2){Re+=c2.Re;Im+=c2.Im;}
    void show(){cout<<Re<<"+"<<Im<<"i"<<endl;}
    private:
    float Re;
    float Im;

};
int main()
{
    Complex c1(5,8);  //用复数5+8i初始化c1
    Complex c2 = 6.7; //用实数6.7初始化c2
    c1.add(c2);       //将c1与c2相加，结果保存在c1中
    c1.show();        //将c1输出（这时的结果应该是11.7+8i）
}
