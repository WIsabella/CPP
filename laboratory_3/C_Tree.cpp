#include<iostream>

using namespace std;

class Tree
{
    public:
    void grow(int years){ages+=years;};
    void age(){cout<<"The age of this tree is "<<ages<<endl;};
    Tree(int years)
    {
        ages=years;
    }

    private:
    int ages;

};




    int main()
{
    Tree t(12);
    t.age();
    t.grow(4);
    t.age();
    return 0;
}