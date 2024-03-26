#include<iostream>

using namespace std;

struct student
{
    char mark;
    long num;
    float score;
};

union test
{
    char mark;
    long num;
    float score;

};

int main()
{
    cout<<"the size of student is "<<sizeof(student)<<endl;
    cout<<"the size of test is "<<sizeof(test)<<endl;
}