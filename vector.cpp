#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={1,2,3};
    cout<<vec[0]<<endl;
    vector<int>vec1(3,0);
    
    cout<<vec1[0]<<endl;
    cout<<vec1[1]<<endl;
    cout<<vec1[2]<<endl;
   
   for(int i:vec1)
   {
    cout<<i<<endl;
   }
    return 0;
}