#include"client.h"

void CLIENT::ChangeServerName(char s1)
{
    ServerName=s1;
}
CLIENT::CLIENT(){ClientNum++;};
CLIENT::~CLIENT(){};
char CLIENT::ShowName(){return ServerName;};

int CLIENT::ShowNum(){return ClientNum;};

int CLIENT::ClientNum=0;
char CLIENT::ServerName='6';