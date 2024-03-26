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
    Complex c1(5,8);  //�ø���5+8i��ʼ��c1
    Complex c2 = 6.7; //��ʵ��6.7��ʼ��c2
    c1.add(c2);       //��c1��c2��ӣ����������c1��
    c1.show();        //��c1�������ʱ�Ľ��Ӧ����11.7+8i��
}
