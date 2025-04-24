#include<iostream>
using namespace std;
class ATM
{
    public:
    int balence=50000,W,D;
    void wdraw();
    void deposite();
    void enquiry();

};
void ATM::wdraw()
{
    cout<<"enter the amount you want to wdraw:";
    cin>>W;
    balence=balence-W;
    cout<<"your amount withdrawal succesfully\n";
    //cout<<"remaining  amount is :"<<balence;


}
void ATM::deposite()
{
    cout<<"enter the amount you want to deposite:";
    cin>>D;
    cout<<"your amount deposited succesfully\n";
    balence=balence+D;
    //cout<<"total amount is "<<balence;

}
void ATM:: enquiry()
{
    cout<<"your account balence is :"<<balence;

}
int main()
{
    ATM A1;
    int  choice;
    cout<<"\n***SBI ATM***";
    cout<<"\n\n welcome to SBI ATM!";
    while(choice!=4)
    {

    cout<<"\n-----------------------";
    cout<<"\n1.Balence Enquiry\n";
    cout<<"2.Cash deposite\n";
    cout<<"3.Balence withdrawal\n";
    cout<<"4.Exit\n";
    
       
    cout<<"\n\nenter your choice:" ;
    cin>>choice;
    
    switch(choice)
    {
        case 1:
        A1.enquiry();
        break;
        
        case 2:
        A1.deposite();
        break;
        case 3:
        A1.wdraw();
        break;
        case 4:
        break;
        
    }
    }
return 0;
}