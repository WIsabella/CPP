
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(int argc,char * argv[])
{
    if(argc!=2)
    {
        cerr<<"argc is not 2"<<endl;
        return 1;
    }
    ofstream outputFile(argv[1]);

    if(!outputFile.is_open())
    {
        cerr<<"Unable to open file"<<argv[1]<<endl;
    }
    cout<<"Please enter text to write to file ("<<argv[1]<<")"<<endl;
    cout << "Please enter 'quit' to finish." << endl;

    string line;
    while(getline(cin,line))
    {
        if(line=="quit")
        {
            break;
        }
        outputFile<<line<<endl;
    }
    outputFile.close();
    cout<<"Data written to file"<<argv[1]<<" successfully."<<endl;
    return 0;
}

