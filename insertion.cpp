#include<iostream>
using namespace std;
void insertion(int n,int arr[])
{
    for(int i=1;i<n;i++)
    {
    int current=arr[i];
    int j=i-1;
    while(arr[j]>current && j>=0)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=current;
}
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }cout<<endl;

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
    insertion(n,arr);

return 0;
}