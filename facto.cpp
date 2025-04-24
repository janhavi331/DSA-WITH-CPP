#include<iostream>
using namespace std;
void facto(int n)
{
    int fact=1;
    for(int i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<fact;
}
int main()
{
    int n;
    cin>>n;
    facto(n);
return 0;
}