#include<iostream>
#include<string.h>
using namespace std;
 
class  student
{
    public:
    int rollno;
    string name;
    float marks;
   void set(int rollno,string name ,float marks);
   void display();
   
};
void student::set(int rollno,string name,float marks)
    {
        this->rollno=rollno;
        this->name=name;
        this->marks=marks;
    }
 void student::display()
    {
        cout<<rollno<<endl;
        cout<<name<<endl;
        cout<<marks<<endl;
    }


int main()
{
    student s1;
    s1.set(65,"pranali",7.8);
    s1.display();

    
return 0;
}