#include<iostream>
#include<vector>
using namespace std;


void reverse(vector<int>arr,int size)
{
    int start=0,end=size-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i:arr)
    {
        cout<<i<<" ";
    }
}
int main()
{
    vector<int>arr={1,2,3,4,5,6};
    int size=6;
    reverse(arr,size);
    
return 0;
}

