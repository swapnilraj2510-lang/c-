#include <iostream>
using namespace std;

void fun()
{
    class Test
    {
    public:
        void method()
        {
            cout << "Local class method called";
        }
    };    
    Test t;
    t.method();
}

int main()
{
    fun();

    return 0;
}