#include<iostream>
using namespace std;
void fibbo(int n)
{
    int t1=0;
    int t2=1;
    int nxtterm;
    for(int i=1;i<=n;i++)
    {
        cout<<t1<<endl;
        nxtterm=t1+t2;
        t1=t2;
        t2=nxtterm;
    }
    
}
int main()
{
    int n;
    cin>>n;
    fibbo(n);
return 0;
}