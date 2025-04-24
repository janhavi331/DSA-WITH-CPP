#include<iostream>
using namespace std;
int main()
{
    int rows,col;
    cin>>rows;
    cin>>col;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(j==1 || j==col)
            {
            cout<<"*";
            }
            else if(i==1  || i==rows)
            {
                cout<<"*";
                
            }
            else{
                cout<<" ";
            }
        }
        
        cout<<endl;
    }
return 0;
}