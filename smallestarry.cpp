#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int small=INT8_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    
    }
    cout<<"the smallest element is:"<<small<<endl;
    int large=INT8_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }

    }
    cout<<"largest element is: "<<large;
    
return 0;
}