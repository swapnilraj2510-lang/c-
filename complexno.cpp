#include<bits/stdc++.h>
using namespace std;
class Complex {
public:
    int real;
    int imaginary;

    Complex() : real(0), imaginary(0) {}
    Complex(int r, int i) : real(r), imaginary(i) {}

    Complex add(const Complex &other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }
};

int main() {
    Complex c1(5, 6);
    cout << "complex num 1: " << c1.real << "+" << c1.imaginary << "i" << endl;
    Complex c2(8, 2);
    cout << "complex num 2: " << c2.real << "+" << c2.imaginary << "i" << endl;
    Complex c3 = c1.add(c2);
    cout << "sum of complex num: " << c3.real << "+" << c3.imaginary << "i" << endl;
    return 0;
}