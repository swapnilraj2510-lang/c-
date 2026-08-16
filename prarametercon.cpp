#include<iostream>
using namespace std;
class A
{
    public:
    int x;
    A(int val)
    {
        x=val;
    }
};
int main()
{
    A a(10);
    cout<<a.x;
    return 0;
}