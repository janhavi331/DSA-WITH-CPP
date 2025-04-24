#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)//yaha pe 1 tab aa raha h jab row and colm ki add even aa rahi h so humne if ki condition use karke 0-1 putkiya h
    {
        for(int j=1;j<=n+1-i;j++)
        {
            if((i+j)%2==0)
            {
                cout<<1<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}