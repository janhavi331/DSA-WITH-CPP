#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the values of a,b,c:";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"a is max";
    }
    else if(b>a && b>c)
    {
        cout<<"b is max";
    }
    else
    {
        cout<<"c is max";
    }
return 0;
}