#include<iostream>
#include<string>
using namespace std;
 
class Product {
    protected:
    double price;
    public:
    Product(double p):price(p) {
        cout<<"[1] Product is intiaillzed"<<endl;

    }
    void displayprice(){
cout<<"[1.1] Price of the product is : "<<price<<endl;
    }
};

class Electonics:public Product{
    protected:
    int power;
public:
Electonics(double p, int po):Product(p), power(po){
    cout<<"[2] Power is  "<<power<<endl;
}
};
class Intermodeule{
    private:
    string ipaddress;
    public:
    Intermodeule(string ip):ipaddress(ip){
        cout<<"[3] IP address is : "<<ipaddress<<endl;
    }
};
class SmartTv:public Intermodeule,public Electonics{
public:
    SmartTv(double p, int po, string ip)
        : Intermodeule(ip), Electonics(p, po) {
        cout << "[4] Smart TV is initialized" << endl;
    }
};

int main() {
    SmartTv tv(45000.0, 120, "192.168.1.10");
    tv.displayprice();
    return 0;
}