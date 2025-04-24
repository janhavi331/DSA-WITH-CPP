#include<iostream>
using namespace std;
class fruit{
    public:
    string name;
    new double price;
    int qty;
    fruit(string x,int y,int z){//parametrize consructor
        name=x;
        qty=y;
        price=z;
    }
};
int main(){
    fruit obj1("apple",2,20);
    fruit obj2(obj1);//default copy constructor

    cout<<obj1.name<<" "<<obj1.qty<<" "<<obj1.price<<"\n";
    cout<<obj2.name<<" "<<obj2.qty<<" "<<obj2.price;
    return 0;
}