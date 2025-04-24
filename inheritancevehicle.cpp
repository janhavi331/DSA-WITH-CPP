#include<iostream>
using namespace std;
//base class
class vehicle{
    public:
    string brand="ford";
    void abc(){
        cout<<"about vehicles"<<"\n";

    }
};
//derived class
class car: public vehicle{
    public:
    string model="mustang";

};
int main(){
    car obj1;
    obj1.abc();
    cout<<"brand:"<<obj1.brand<<"\t"<<"model: "<<obj1.model;
    return 0;
}