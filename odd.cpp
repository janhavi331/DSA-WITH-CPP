#include<iostream>
using namespace std;
int main()
{
    int i,sum=0;
    for(i=1;i<=15;i++)
    {
        if(i%2 != 0)
        {
            sum=sum+i;
        }
    }
    cout<<"the addition of odd no. is:"<<sum;
    return 0;
}