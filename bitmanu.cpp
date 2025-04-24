#include<iostream>
using namespace std;
int getbit(int n,int pos)
{
    return(n & (1<<pos)!=0);
}
int setbit(int n,int pos)
{
    return(n|(1<<pos));
}
int clearbit(int n,int pos)
{
    int conv=~(1<<pos);
    return(n&conv);
}
int main()
{
    cout<<getbit(5,2)<<endl;
   cout<<setbit(5,1)<<endl;
   cout<<clearbit(5,2)<<endl;
return 0;
}