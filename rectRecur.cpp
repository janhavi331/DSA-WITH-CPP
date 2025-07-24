#include<iostream>
using namespace std;
int isoverlap(int rec1[4],int rec2[4])
{
    if (rec1[2] <= rec2[0] || // rec1 is to the left of rec2
        rec1[0] >= rec2[2] || // rec1 is to the right of rec2
        rec1[3] <= rec2[1] || // rec1 is below rec2
        rec1[1] >= rec2[3])   // rec1 is above rec2
    {
        cout<<"false";
        
    }
    else {
        cout<<"true"; // They overlap
    }
}
int main()
{
   int  rec1[4]={0,0,1,1};
    int rec2[4]={2,2,3,3};
      int result = isoverlap(rec1,rec2);
      cout<<result;
return 0;
}