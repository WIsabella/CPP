#include<iostream>

using namespace std;
enum Sex{male=0,female};

class Date
{
    public:
    void ShowDate(){cout<<"the birthday is "<<year<<" year "<<month<<" month "<<day<<" day "<<endl;}
    void SetDate(unsigned year0,unsigned short month0,unsigned short day0)
    {
        year=year0;
        month=month0;
        day=day0;
        cout<<"set a date!"<<endl;
    }
    Date(unsigned short year0,unsigned short month0,unsigned short day0)
    {
        year=year0;
        month=month0;
        day=day0;
        cout<<"struct a date!"<<endl;
    }
    Date(){};
    ~Date(){cout<<"delete a date!"<<endl;};

    private:
    unsigned short year;
    unsigned short month;
    unsigned short day;
};
class People
{
    public:
    People(int number0,Sex sex0,Date birthday0,int id0)
    {
        number=number0;
        sex=sex0;
        date=birthday0;
        id=id0;
        cout<<"struct a people!"<<endl;
    };
    People(People &people0)
    {
        number=people0.number;
        sex=people0.sex;
        date=people0.date;
        id=people0.id;
        cout<<"copy a people !"<<endl;
    }
    ~People(){cout<<"delete a people !"<<endl;};

    void ShowBirthday(){date.ShowDate();};
    void ShowNumber(){cout<<"the number is "<<number<<endl;};
    void ShowSex(){cout<<"the sex is "<<sex<<endl;}
    void ShowId(){cout<<"the id is "<<id<<endl;}

    void SetBirthday(int year0,int month0,int day0){date.SetDate(year0,month0,day0);cout<<"set a birthday!"<<endl;}
    void SetId(int id0){id=id0;cout<<"set a id!"<<endl;};
    void SetSex(Sex sex0){sex=sex0;cout<<"set a sex !"<<endl;};
    void SetNumber(int number0){number=number0;cout<<"set a number!"<<endl;};

    private:
    int number;
    Sex sex;
    Date date;
    unsigned long long id;
};




int main()
{
    Date birthday(2004,10,13);
    People people1(18,male,birthday,130092);
    People people2(people1);
    people2.SetBirthday(2005,1,1);
    people2.ShowBirthday();
}