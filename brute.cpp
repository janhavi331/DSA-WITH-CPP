#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    
    int actsum=INT8_MIN;
    for(int st=0;st<n;st++)
    {
        int csum=0;
        for(int end=st;end<n;end++)
        {
            csum=csum+arr[end];
            actsum=max(csum,actsum);
        }
       
    }
    cout<<"maximium sum is:"<<actsum;
return 0;
}