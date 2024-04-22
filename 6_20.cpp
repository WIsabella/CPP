#include <iostream>
using namespace std;

class SimpleCircle
{
public:
	SimpleCircle();
	SimpleCircle(int);
	SimpleCircle(const SimpleCircle &);
	~SimpleCircle() {}
    //SimpleCircle &operator = (const SimpleCircle &rhs);
	
	//void setRadius(int);
	int getRadius() const;
	SimpleCircle operator=(const SimpleCircle& rhs)
	{
		*itsRadius = rhs.getRadius();
		return SimpleCircle(*itsRadius);
	}
	
private:
	int *itsRadius;
};

SimpleCircle::SimpleCircle()
{
	itsRadius = new int(5);
}

SimpleCircle::SimpleCircle(int radius)
{
	itsRadius = new int(radius);
}

SimpleCircle::SimpleCircle(const SimpleCircle & rhs)
{
	int val = rhs.getRadius();
	itsRadius = new int(val);
}

int SimpleCircle::getRadius() const
{
	return *itsRadius;
}
//SimpleCircle &SimpleCircle::operator=(const SimpleCircle &rhs)
//{
//    if (this == &rhs) // 检查自赋值
//        return *this;
//    // 释放当前对象的内容
//    delete itsRadius;
//    // 深拷贝rhs的内容
//    itsRadius = new int(*rhs.itsRadius);
//    return *this;
//}
int main()
{
	//SimpleCircle CircleOne, CircleTwo(9); 
	//cout << "CircleOne: " << CircleOne.getRadius() << endl;
	//cout << "CircleTwo: " << CircleTwo.getRadius() << endl;
    //CircleOne = CircleTwo = 2;
    //cout << "CircleOne: " << CircleOne.getRadius() << endl;
    //cout << "CircleTwo: " << CircleTwo.getRadius() << endl;
	SimpleCircle Circle0(100),t0,t1;
	t0=t1=Circle0;
	cout<<"t0 "<<t0.getRadius()<<endl;
	cout<<"t1 "<<t1.getRadius()<<endl;
	return 0;
}
