#include<iostream>
using namespace std;
int  fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    
    return n*fact(n-1);

}
int main()
{
    int n;
    int result =fact(5);
    cout<<result<<" ";

return 0;
}