#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=1;
    int orgn=n;
    while(n>0)
    {
        int lastdigit=n%10;
        sum=sum+pow(lastdigit,3);
        n=n/10;
    }
    if(sum==orgn)
    {
    cout<<"armstrong number!";
    }
    else{
        cout<<"not armstrong";
        
    }
return 0;
}