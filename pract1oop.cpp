#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;

public:
    // Default constructor (initializes to 0 + 0i)
    Complex() : real(0), imag(0) {}

    // Parameterized constructor to initialize real and imaginary parts
    Complex(double r, double i) : real(r), imag(i) {}

    // Overload the + operator to add two complex numbers
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload the * operator to multiply two complex numbers
    Complex operator*(const Complex& other) {
        double realPart = real * other.real - imag * other.imag;
        double imagPart = real * other.imag + imag * other.real;
        return Complex(realPart, imagPart);
    }

    // Overload the << operator to print a complex number
    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real;
        if (c.imag >= 0) {
            out << " + " << c.imag << "i";
        } else {
            out << " - " << -c.imag << "i";
        }
        return out;
    }

    // Overload the >> operator to input a complex number
    friend istream& operator>>(istream& in, Complex& c) {
        in >> c.real >> c.imag;
        return in;
    }
};

int main() {
    Complex c1, c2, result;

    cout << "Enter the first complex number (real and imaginary parts): ";
    cin >> c1;

    cout << "Enter the second complex number (real and imaginary parts): ";
    cin >> c2;

    result = c1 + c2;  // Adding complex numbers
    cout << "Sum of the complex numbers: " << result << endl;

    result = c1 * c2;  // Multiplying complex numbers
    cout << "Product of the complex numbers: " << result << endl;

    return 0;
}
