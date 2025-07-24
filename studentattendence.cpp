#include<iostream>
#include<string.h>
using namespace std;
bool checkrecord(string s)
{
    int absent=0;
    int latecount=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A')
        {
            absent++;
            if(absent>=2)
            {
                return false;
            }
        }
        if(s[i]=='L')
        {
            latecount++;
            if(latecount>=3)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
 string s1="PPALLP";
 string s2="PPAALP";
 cout<<checkrecord(s1)<<endl;
 cout<<checkrecord(s2)<<endl;
return 0;
}