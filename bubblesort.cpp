#include<iostream>
using namespace std;
void bubble(int n,int arr[])
{
    int cntr=1;
    int temp;
    while(cntr<n)
    {  
    
    for(int i=0;i<n-cntr;i++)
    {
        if(arr[i]>arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    cntr++;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the element:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  bubble(n,arr);
return 0;
}