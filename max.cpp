#include<iostream>
using namespace std;
int main()
{
    int a[]={700,500,350,200,780,670,590,800,257,690},max=0,smax=0;
    for(int i=0;i<=10;i++)
    { 
            if(a[i]>max)
            {
               smax=max;
               max=a[i]; 
            }          
    }
    cout<<smax;
    
return 0;
}