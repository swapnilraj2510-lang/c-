#include <iostream>
using namespace std;

class A
{
public:
    int x;
    A()
    {
        x = 0;
    }
    A(const A &a)
    {
        x = a.x;
    }
};

int main()
{
    A a1;
    a1.x = 10;

    cout << "a1's x = " << a1.x << endl;

    A a2(a1);

    cout << "a2's x = " << a2.x << endl;

    return 0;
}