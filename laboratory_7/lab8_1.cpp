#include<iostream>

using namespace std;
class Point
{
    public:
    Point(int x,int y):_x(x),_y(y){};
    Point(Point*point):_x(point->_x),_y(point->_y){};

    void Show(){cout<<_x<<" "<<_y<<endl;}

    ~Point(){};
    
    Point& operator++(){++this->_x;++this->_y;return *this;};
    Point& operator--(){--this->_x;--this->_y;return *this;};;

    Point operator++(int){Point temp(*this);++(*this);return temp;}
    Point operator--(int){Point temp(*this);--(*this);return temp;}

    private:
    int _x;
    int _y;
};

int main()
{
    Point p1(1,2);
    p1++.Show();
    (++p1).Show();

}