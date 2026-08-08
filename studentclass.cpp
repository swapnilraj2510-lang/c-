#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int rollno;
    float marks;
    public:
    void inputDetails( )
    {
        cout<<"Enter student name:";
        getline(cin>>ws,name);
        cout<<"Enter rollno:";
        cin>>rollno;
        cout<<"Enter marks:";
        cin>>marks;
    }
    void displayDetails() const
    {
        cout<<"\n...student Details...\n";
        cout<<"name :"<<name<<endl;
        cout<<"rollno;"<<rollno<<endl;
        cout<<"marks:"<<marks<<endl;
    }
};
int main()
{
    student s;
    s.inputDetails();
    s.displayDetails();
    return 0;
}