#include<iostream>
using namespace std;
void reverse( int arr[],int size)
{
    int start=0,end=size-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int size=6;
    reverse(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}