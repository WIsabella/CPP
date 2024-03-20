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
           case 7:   //如果和数为7或11则为胜,状态为WIN
           case 11:
               status = WIN;
               break;
           case 2:   //和数为2、3或12则为负,状态为LOSE
           case 3:
           case 12:
               status = LOSE;
               break;
           default:   //其它情况,游戏尚无结果,状态为PLAYING,记下点数,为下一轮做准备
               status = PLAYING;
               myPoint = sum;
               cout << "point is " << myPoint << endl;
               break;
        }
    
       while (status == PLAYING)
       { //只要状态仍为PLAYING,就继续进行下一轮
           sum = RollDice();
           if (sum == myPoint)    //某轮的和数等于点数则取胜,状态置为WIN
               status = WIN;
           else if (sum == 7)    //出现和数为7则为负,状态置为LOSE
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
       cin >> seed;//输入随机数种子
       srand(seed);//将种子传递给rand()
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