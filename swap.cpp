#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the first no.:";
    cin>>a;
    cout<<"enter the second no.:";
    cin>>b;
    cout<<"before swaping:"<<a<<"\t"<<b<<"\n";
    c=a;
    a=b;
    b=c;
    cout<<"after swaping:"<<a<<"\t"<<b;
    return 0;

}