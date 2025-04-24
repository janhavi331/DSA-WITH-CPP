#include<iostream>
using namespace std;
void prime(int n,int a,int b)
{
   int i;
    for(int n=a;n<=b;n++)
{
    for( i=2;i<n;i++)
    {
       if(n%i==0)
       {
        break;
       }
      
    }
    if(i==n)
    {
        cout<<n<<endl;
    }
}
}
int main()
{
    int n,a,b;
    cout<<"enter the range to find prime number:";
    cin>>a>>b;
    prime(n,a,b);

   

return 0;
}