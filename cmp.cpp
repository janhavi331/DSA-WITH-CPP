#include<iostream>
using namespace std;
int search(int n,int key,int arr[])
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;

        }
        return -1;
        
    } 
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
    cin>>key;
    cout<<search(n,key,arr)<<endl;
    
return 0;
}