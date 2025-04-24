#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={10,40,50,30,66};
    int target;
    cout<<"enter the element you want to search in list:";
    cin>>target;
    for(int i:vec)
    {
        if(i==target)
        {
            cout<<"element is found";
        }
        
    }


    return 0;
}