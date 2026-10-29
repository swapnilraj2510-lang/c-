#include<iostream>
#include<string>
using  namespace std;


class Libitem {
protected:
string id;
string title;
public:
void  setinfo (string i,string t){
id=i;
title=t;

}
void  getinfo() {
    cout<<"ID : "<<id<<" | "<<"Tiltle : "<<title<<endl;

}
};

class Book: public Libitem
{
private:
string  author;

public:
void setbook(string i,string t,string a ){
    setinfo(i, t);
    author=a;

}
void getbook(){
    getinfo();
    cout<<"Author Name : "<<author<<endl;

}
};
class Mag: public Libitem{
private:
int  issueno;
public:
void setmag(string i, string t, int isn){
setinfo(i, t);
issueno=isn;
}
void getmag(){
    getinfo();
    cout<<"Issue Number : "<<issueno<<endl;

}
};

int main() {
    cout<<"======== Start =========="<<endl;
    Book b;
    Mag m;
    b.setbook("011","The end ","Shreyash");
    b.getbook();
    m.setmag("101","The day",25);
    m.getmag();
    cout<<"======== End of the  Program ======="<<endl;
}