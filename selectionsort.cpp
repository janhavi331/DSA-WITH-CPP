#include<iostream>

using namespace std;
void selection(int arr[],int n)
{
    int min=1;
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(arr[j]<arr[i])
        {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
        }
    }
  
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the elements in array:";
        cin>>arr[i];
    }
    
    selection(arr,n);

return 0;
}