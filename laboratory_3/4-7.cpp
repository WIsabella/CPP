//4_7.cpp
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student
{	//ѧ����Ϣ�ṹ��
    int num;		//ѧ��
    string name;	//�������ַ������󣬽��ڵ�6����ϸ����
    char sex;		//�Ա�
    int age;		//����
    private:
    int grade;
    void ShowGrade(){};
};

int main() {
    Student stu = { 97001, "Lin Lin", 'F', 19 };
    cout << "Num:  " << stu.num << endl;
    cout << "Name: " << stu.name << endl;
    cout << "Sex:  " << stu.sex << endl;
    cout << "Age:  " << stu.age << endl;
    return 0;
}
