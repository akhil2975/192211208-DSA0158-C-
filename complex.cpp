#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator + (const Complex& obj) const {
        return Complex(real + obj.real, imag + obj.imag);
    }

    Complex operator - (const Complex& obj) const {
        return Complex(real - obj.real, imag - obj.imag);
    }
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    int real1, imag1, real2, imag2;

    
    cout << "Enter the value of Complex Number 1 (real and imaginary part): ";
    cin >> real1 >> imag1;
    Complex c1(real1, imag1);

    
    cout << "Enter the value of Complex Number 2 (real and imaginary part): ";
    cin >> real2 >> imag2;
    Complex c2(real2, imag2);


    cout << "Input Values" << endl;
    c1.display();
    c2.display();
    
    Complex sum = c1 + c2;
    
    Complex diff = c1 - c2;
    
    cout << "Result" << endl;
    sum.display();
    diff.display();

    return 0;
}

