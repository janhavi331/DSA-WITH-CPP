#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int  find_min_max_mark(vector<int>&marks)
{
    priority_queue<int>max_heap;
    for(int mark:marks)
    {
        max_heap.push(mark);
    }
    int max_marks=max_heap.top();
    cout<<"max. marks :"<<max_marks<<endl;
    priority_queue<int,vector<int>,greater<int>>min_heap;
    for(int mark:marks)
    {
        min_heap.push(mark);
    }
    int min_marks=min_heap.top();
    cout<<"min. marks:"<<min_marks<<endl;
}

int main()
{
    int n;
    cout<<"enter no of students:";
    cin>>n;
    vector<int>marks(n);
    cout<<"marks obtained by each student:";
    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
    }
    find_min_max_mark(marks);
return 0;
}