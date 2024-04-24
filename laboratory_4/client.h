#ifndef CLIENT_NAME
#define CLIENT_NAME

#include<iostream>
#include<string>

class CLIENT
{
    public:
    static void ChangeServerName(char s1);
    CLIENT();
    ~CLIENT();
    
    static char ShowName();
    static int ShowNum();

    private:
    static  char ServerName;
    static int ClientNum;
};

using namespace std;

#endif