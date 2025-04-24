#include<iostream>
using namespace std;
int main()
{
    double principle=10000;
    double rate=2,time=3;
    double A=principle*((pow((1+rate/100),time)));
    double CI=A-principle;
    cout<<"the compound interest is:"<<CI;
    return 0;


}