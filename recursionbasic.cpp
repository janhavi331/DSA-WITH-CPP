#include<iostream>
using namespace std;
void printnum(int n)
{
    if(n==1)
    {
        cout<<1;
        return;
    }
    cout<<n<<"\n";
    printnum(n-1);//recursion (function call itself)
}
int main()
{

     int n=10;
     printnum(n);
return 0;
}