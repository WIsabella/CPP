#include<iostream>
#include<cstring>
using namespace std;

class Employee
{
public:
	Employee(char name1[40], char address1[40], char city1[40], char zip1[40])
	{
		strcpy(name, name1);
		strcpy(address, address1);
		strcpy(city, city1);
		strcpy(zip, zip1);
		cout << "construct a employee" << endl;
	}
    Employee(){};
	~Employee(){cout<<"delete a employee"<<endl;};
	void Display()
	{
		cout << "the name is " << name << endl;
		cout << "the address is " << address << endl;
		cout << "the city is " << city << endl;
		cout << "the zip is " << zip << endl;
	}
	void Change_name(char name2[40])
	{
		strcpy(name, name2);
	}
private:
	char name[40];
	char address[40];
	char city[40];
	char zip[40];
};

int main()
{
    Employee *emp=new Employee[5]
    {
        {"wjl","1","Jinan","123"},
        {"mhx","2","Qingdao","234"},
        {"zsk","3","Weifang","345"},
        {"zxy","4","Yantai","456"},
        {"zyj","5","Beijing","567"}
    };
    for(int i=0;i<5;i++)
    {
        
        emp[i].Display();
    }
    delete []emp;
}