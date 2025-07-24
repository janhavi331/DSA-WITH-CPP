#include<iostream>
using namespace std;
int Nsum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n+Nsum(n-1);
}
int main()
{
    int n;
    cin>>n;
    int result=Nsum(n);
    cout<<result<<"\n";
return 0;
}