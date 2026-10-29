#include<iostream>
#include<string>
using namespace std;

class Student {
    private:
    string name;
    int roll_no;
    public:
    void getinfo() {
    
        cout<<"Enter The Student Name        : ";
        getline(cin >> ws, name);
        cout<<"Enter the Student Roll Number : ";
        cin>>roll_no;
    }
    void displayinfo(){
        cout<<"======== Student  MarkSheet ========="<<endl;
        cout<<"Student Name     : "<<name<<endl;
        cout<<"Student Roll No : "<<roll_no<<endl;

    }
};

class StudentExam :public Student {
public:
    int sub[6];

    void getmarks() {
        getinfo();
        for (int i = 0; i < 6; i++) {
            cout << "Enter the marks of subject " << (i + 1) << " : ";
            cin >> sub[i];
        }
    }

    void displaymarks() {
        displayinfo();
        for (int i = 0; i < 6; i++) {
            cout << "Marks for Subject " << (i + 1) << " : " << sub[i] << endl;
        }
    }
};

class StudentResult : public StudentExam {
public:
    float per;

    void cal() {
        int total = 0;
        for (int i = 0; i < 6; i++) {
            total += sub[i];
        }
        per = total / 6.0;
        cout << "Total Percentage    : " << per << "%" << endl;
    }
};

int main() {
   
    int c;
    cout << "Enter the  No of details of the student : " ;
    cin >> c;
    StudentResult s[c];
    for(int i= 0; i<c;i++) {
        
        cout<<"=========Enter  the Student no:  "<<i+1<<"Info ========="<<endl;
 s[i].getmarks();
   
   
    }
   for(int i=0;i<c;i++){
     s[i].displaymarks();
     s[i].cal();
   }
    return 0;
}