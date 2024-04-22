//employee.h
#define _CRT_SECURE_NO_WARNINGS
#pragma once
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
	~Employee() {};
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

//main.cpp
#define _CRT_SECURE_NO_WARNINGS
//#include"employee.h"
int main()
{
	char name1[40]="wjl";
	char address1[40]="Shandong";
	char city1[40]="Qingdao";
	char zip1[40] = "262616";

	Employee s(name1,address1,city1,zip1);
	s.Display();
	char name3[40] = "zxy";
	s.Change_name(name3);
	s.Display();

}