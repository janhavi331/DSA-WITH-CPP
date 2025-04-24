#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    int mx;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        mx=max(arr[i],mx);
        cout<<mx<<"\t";
    }
return 0;
}