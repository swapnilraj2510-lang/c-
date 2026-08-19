#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr;

    ptr = &num;

    cout << "Value of num = " << num << endl;
    cout << "Address of num = " << &num << endl;
    cout << "Value using pointer = " << *ptr << endl;
    cout << "Address stored in pointer = " << ptr << endl;

    return 0;
}