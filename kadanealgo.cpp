#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,-4,5,4,-1,7,-8};
    int n=7;
    int maxsum=INT8_MIN;
    for( int st=0;st<n;st++)
    {
        int csum=0;
        for(int end=st;end<n;end++)
        {
            csum=csum+arr[end];
            if(csum<0)
            {
                csum=0;
            }
            maxsum=max(csum,maxsum);
        }
    }
    cout<<"the maxsum is:"<<maxsum;
return 0;
}