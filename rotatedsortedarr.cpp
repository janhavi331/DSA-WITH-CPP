#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,4,5,6,7,0,1,2};
    int n=8;
    int st=0,end=n-1;
    int tar=3;
    int mid=0;

    while (st<=end)
    {
        
        
        int mid=(st+end)/2;
        if(arr[mid]==tar)
        {
            return mid;
        }
        if (arr[st]<=arr[mid])
        {
            if(arr[st]<=tar && arr[mid]<=tar)
            {
                end=mid-1;

            }
            else{
                st=mid+1;
            }
        }
        else 
        {
            if(arr[mid]>=tar && arr[end]<tar)
            {   
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        
        }
    }
    return -1;

    
return 0;
}