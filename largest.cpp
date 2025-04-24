#include<iostream>
using namespace std;
int main()
{
   
    int n;
    cout<<"enter the number of elemnts you want to add:";
    cin>>n;
    int arr[n];
    int max=INT8_MIN;
    int min=INT8_MAX;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    

    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    

    }
    cout<<"smallest number is :"<<min<<endl;
    cout<<"largest number is :"<<max<<endl;
return 0;
}