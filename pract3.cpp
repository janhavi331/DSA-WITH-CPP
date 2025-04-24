#include<iostream>
#include<string>
#include<exception>
using namespace std;
class  publication
{
    private:
    string title;
    float price;
    public:
    publication(string t="",float p=0.0):title(t),price(p){}

    virtual void display()const
    {
        cout<<"title:"<<title<<endl;
        cout<<"price"<<price<<endl;
    }
};
class book:public publication
{
    private:
    int pagecount;
    public:
    book(string t="",float p=0.0,int pc=0):publication(t,p),pagecount(pc){}
    
    void display() const override{
        publication::display();
        cout<<"pagecount:"<<pagecount<<endl;
    }

};
class tape:public publication
{
    private:
    float playing_time;
    public:
   tape(string t="",float p=0.0,float pt=0.0):publication(t,p),playing_time(pt){}
   void display()const override{
    publication::display();
    cout<<"playing time :"<<playing_time<<endl;
   } 
};

int main()
{
    try
    {
        //book info
        string booktitle;
        float bookprice;
        int bookpages;
        //tape info
        string tapetitle;
        float tapeprice;
        float tapetime;
        //input for book 
        cout<<"enter the book title:";
        getline(cin,booktitle);
        cout<<"enter the book price:";
        cin>>bookprice;
        cout<<"enter the book pages :";
        cin>>bookpages;
        cin.ignore();
        //input for tape
        cout<<"enter the tape name:";
        getline(cin,tapetitle);
        cout<<"enter the tape price:";
        cin>>tapeprice;
        cout<<"enter the tape timing in minuits:";
        cin>>tapetime;
        
        //create object of class
        book b1(booktitle,bookprice,bookpages);
        tape t1(tapetitle,tapeprice,tapetime);

        //display data
        cout<<"book data :\n";
        b1.display();
        cout<<"tape data:\n";
        t1.display();



    }
    catch(const exception& e)
    {
        cerr<<"error occured"<<e.what()<<endl;
        book b1("",0,0.0);
        tape t1("",0.0,0.0);
        //display reset data
        cout<<"book data:";
        b1.display();
        cout<<"tape data:";
        t1.display();
    }
    
return 0;
}