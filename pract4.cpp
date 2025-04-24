#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream outfile("example.txt");
    if(!outfile){
        cerr<<"error creating file!";

    }
    outfile<<"hello,this is text file"<<endl;
    cout<<"contents are written in file succesfully!";
    outfile.close();
    ifstream infile("example.txt");
    if(!infile){
        cerr<<"error in reading from file";
    }
    string line;
    cout<<"\nreading from file:"<<endl;
    while (getline(infile,line))
    {
        cout<<line<<endl;
    }
    infile.close();
return 0;
}