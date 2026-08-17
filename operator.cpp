#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Addition = " << a + b << endl;
    cout << "Subtraction = " << a - b << endl;
    cout << "Multiplication = " << a * b << endl;
    cout << "Division = " << a / b << endl;
    cout << "Remainder = " << a % b << endl;

    return 0;
}