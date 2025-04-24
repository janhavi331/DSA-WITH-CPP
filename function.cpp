#include<iostream>
using namespace std;

class abc
{
    public:
    int x=10;
    void myfun();
    void sample();
    

};
void abc::myfun()
    {
        cout<<"hello world";
    }
void abc::sample()
    {
        cout<<"\nsample function()";
    }
int main()
{
    abc A1;
    
    A1.myfun();
    A1.sample();
    cout<<"\nx is:"<<A1.x;
    
    return 0;
}