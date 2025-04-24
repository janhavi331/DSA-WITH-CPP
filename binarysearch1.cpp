#include<iostream>
using namespace std;
int binary(int arr[],int n,int key)
{
    int st=0,end=n-1;
    int mid=0;
    while(st<=end)
    {
        int mid=(st+end)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else if(arr[mid]<key)
        {
            st=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key you want to search:";
    cin>>key;
   cout<<binary(arr,n,key);

return 0;
}