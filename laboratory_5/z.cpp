#include<iostream>
#include<cassert>
using namespace std;

class Point
{
public:
    Point():x(0),y(0)
    {
        cout<<"Default Constructor called"<<endl;
    }
    Point(int x,int y):x(x),y(y)
    {
        cout<<"Constructor called"<<endl;
    }
    ~Point(){cout<<"Destructor called"<<endl;}
    int getX() const{return x;}
    int getY() const{return y;}
    void move(int newX,int newY)
    {
        x=newX;
        y=newY;
    }
private:
    int x,y;

};

class ArrayOfPoints
{
public:
    ArrayOfPoints(int size):size(size)
    {
        points=new Point[size];
    }
    ~ArrayOfPoints()
    {
        cout<<"Deleting..."<<endl;
        delete[ ]points;
    }
    ArrayOfPoints(const ArrayOfPoints &v);
    Point &element(int index)
    {       
        assert(index>=0&&index<size); 
        return points[index];
    }
private:
    Point*points;
    int size;
};

ArrayOfPoints::ArrayOfPoints(const ArrayOfPoints& v)
{
    size=v.size;
    points=new Point[size];
    for(int i=0;i<size;i++)
    {
        points[i]=v.points[i];
    }
}
int main()
{
    Point* ptr1=new Point;
    delete ptr1;
    ptr1=new Point(1,2);
    delete ptr1;
    return 0;
}