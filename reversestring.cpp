#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <string> vec={"janhavi"};
    vector <string>:: reverse_iterator it;
    for(auto it=vec.rbegin();it!=vec.rend();it++)
    {
        cout<<*(it)<<" ";
    }
    
return 0;
}