#include<iostream>
using namespace std;
void changearray(int arr[],int size)
{
    cout<<"in function";
    for(int i=0;i<size;i++)
    {
        arr[i]=2*arr[i];
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int arr[]={1,2,3};
    changearray(arr,3);
    cout<<"in main";
    for(int i=0;i<3;i++)//in pass by reference we change the values by using address so in function and main both values are changes
    
    {
        cout<<"\n"<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}