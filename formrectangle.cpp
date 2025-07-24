#include<iostream>
#include<math.h>
using namespace std;
void rectangle(int area)
{
    for(int w=sqrt(area);w>=1;--w)
    {
        if(area%w==0){
        int l=area/w;
        cout<<"{"<<l<<","<<w<<"}"<<endl;
        return;
        
    }
    
}

}
int main()
{
    
    rectangle(4);
return 0;
}