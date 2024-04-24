#include<iostream>

using namespace std;

enum WordLen{b32,b64};
enum CoreNumb{C1,C2,C4};
enum Hyper{Yes,No};

struct CPU
{
    unsigned int Frequency:1;
    unsigned int Wordlen:1;
    unsigned int CoreNumb:1;
    enum Hyper hyper:1;
}cpu;

int main()
{

    cout<<"the size of CPU is "<<sizeof(cpu)<<endl;
}