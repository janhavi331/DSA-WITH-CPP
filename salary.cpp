#include<iostream>
using namespace std;
int main()
{
    int a[]={700,500,350,200,780,670,590,800,257,690},temp=0;
    for(int i=0;i<=10;i++)
    {
       for(int j=i+1;j<=10;j++)
       {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
       }
    }
    cout<<"bubble sorted array is:";
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\ntop 3 salaries are:";
    cout<<"\n"<<a[9]<<"\n"<<a[8]<<"\n"<<a[7]<<"\n";

    cout<<"bottom 3 salaries are:";
    cout<<"\n"<<a[0]<<"\n"<<a[1]<<"\n"<<a[2];
    cout<<"\nsecond max salary is:";
    cout<<"\n"<<a[8]<<"\n";
    
return 0;
}