#include<iostream>
#include <cstdlib>
using namespace std;

enum GameStatus { WIN, LOSE, PLAYING }status;

class Dice
{
    public:
    void Play()
    {
        int sum=RollDice();
        int myPoint;
        switch (sum)
       {
           case 7:   //�������Ϊ7��11��Ϊʤ,״̬ΪWIN
           case 11:
               status = WIN;
               break;
           case 2:   //����Ϊ2��3��12��Ϊ��,״̬ΪLOSE
           case 3:
           case 12:
               status = LOSE;
               break;
           default:   //�������,��Ϸ���޽��,״̬ΪPLAYING,���µ���,Ϊ��һ����׼��
               status = PLAYING;
               myPoint = sum;
               cout << "point is " << myPoint << endl;
               break;
        }
    
       while (status == PLAYING)
       { //ֻҪ״̬��ΪPLAYING,�ͼ���������һ��
           sum = RollDice();
           if (sum == myPoint)    //ĳ�ֵĺ������ڵ�����ȡʤ,״̬��ΪWIN
               status = WIN;
           else if (sum == 7)    //���ֺ���Ϊ7��Ϊ��,״̬��ΪLOSE
               status = LOSE;
       }
       if (status == WIN)
           cout << "player wins" << endl;
       else
           cout << "player loses" << endl;
    }
    void SetSeed()
    {
       cout << "Please enter an unsigned integer: ";
       cin >> seed;//�������������
       srand(seed);//�����Ӵ��ݸ�rand()
    }
    Dice(){};
    ~Dice(){};

    private:
    int RollDice()
    {
       int die1 = 1 + rand() % 6;
       int die2 = 1 + rand() % 6;
       int sum = die1 + die2;
       cout << "player rolled " << die1 << " + " << die2 << " = " << sum << endl;
       return sum;
    }
    int die;
    unsigned seed;

};

int main()
{
    Dice dice;
    dice.SetSeed();
    dice.Play();
}