#include<iostream>
#include<string>
using namespace std;

class Person {
    public:
Person(){
    cout<<"Person contrutor initilized"<<endl;
}
};
class Faculty:public Person {
public:
Faculty() {
    cout<<"Faculty  Conrucorot is Insitilzed"<<endl;
}

};  
class  Student:public Person {
    public:
    Student() {
        cout<<"Student contrutor is intialized "<<endl;
    }
};
class Ta:public Faculty,public Student {
    public:
    Ta(){
        cout<<"ta is intilzed ";
    }
};

int main(){
Ta record;
return 0;
}