#include <iostream>
using namespace std;

class A
{
public:
    class B
    {
    private:
        int num;

    public:
        void getdata(int n)
        {
            num = n;
        }

        void printdata()
        {
            cout << "The number is " << num << endl;
        }
    };
};

int main()
{
    cout << "Nested class in C++" << endl;

    A::B obj;

    obj.getdata(9);
    obj.printdata();

    return 0;
}