#include<iostream>
#include<string>
using namespace std;
class teacher
{
    public:
    teacher() //non parameterize construct.
    {
        dept="computer science";//to intialize the value by using consrtuctor
    }
    // properties/atributes
    string name;
    string dept;
    string subject;
    int salary;
    //method
    void changedept(string dept1)
    {
        dept1=dept;
    }
    void setsalary(int s){
        salary=s;
    }
    int  getsalary(){
        return salary;
    }
};
int main()
{
    //objects of class
    teacher t1; //defult constructor
    teacher t2;
    // assign value to the objects
    t1.name="janhavi";
    t1.subject="c++";
    //t1.dept="abc";
    t1.setsalary(30000);
    t2.name="anjali";
    t2.subject="nanotechnology";
    //t2.dept="nanoscience";
    t2.salary=28000;
    //  to print output

    cout<<"name :"<<t1.name<<"\t"<<"dept:"<<t1.dept<<"\t"<<"subject:"<<t1.subject<<"\t"<<"salary:"<<t1.getsalary()<<"\n";
    cout<<"name :"<<t2.name<<"\t"<<"dept:"<<t2.dept<<"\t"<<"subject:"<<t2.subject<<"\t"<<"salary:"<<t2.salary<<"\n";

return 0;
}
