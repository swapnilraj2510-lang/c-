#include<iostream>
using namespace std;

int area(int); //  for sqaure
int area(int,int); // for  rectangle
float area(float,float); //for trianglee
float area(float);// for the circle


int main() {
    int s,l,w;
    float  r,h,b;
cout<<"====== Start The program ======="<<endl;
cout<<"Enter the Side of the Sqaure : ";
cin>>s;
cout<<"Enter the Lenght and Widghht tof the Rectangle : ";
cin>>l>>w;
cout<<"Enter The radius of the Circle : ";
cin>>r;
cout<<"Enter the base and hight of the triangle : ";
cin>>b>>h;
cout<<"============ Areas =============="<<endl;
cout<<"Area of the Square      : "<<area(s)<<endl;
cout<<"Area of  the  Recatangl : "<<area(l,w)<<endl;
cout<<"Area of the Circle      : "<<area(r)<<endl;
cout<<"Area of the  triangle   : "<<area(b,h)<<endl;
cout<<"======= End of the program ======="<<endl;
return 0;
}
 int area(int s) {
        return s*s;
    }
    int  area(int l, int w){
        return l*w;
    }
    float area(float r){
        return  3.142*r*r;
    
    }
    float area(float b ,float h){
      return 0.5*h*b;  
    }