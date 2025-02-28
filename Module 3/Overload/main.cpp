#include <iostream>
#include <cmath>

using namespace std;

class Complex {
private:
   double real;
   double imag;

public:
   // Constructor
   Complex(double r = 0, double i = 0) : real(r), imag(i) {}

   // Overloading the + operator
   Complex operator+(const Complex& rhs) const {
      return Complex(this->real + rhs.real, this->imag + rhs.imag);
   }

   // Overloading the - operator
   Complex operator-(const Complex& rhs) const {
      return Complex(this->real - rhs.real, this->imag - rhs.imag);
   }

   // Overloading the * operator
   Complex operator*(const Complex& rhs) const {
      return Complex((this->real * rhs.real) - (this->imag * rhs.imag),
                     (this->real * rhs.imag) + (this->imag * rhs.real));
   }

   // Overloading the / operator
   Complex operator/(const Complex& rhs) const {
      double denominator = rhs.real * rhs.real + rhs.imag * rhs.imag;
      if (denominator == 0) {
         throw runtime_error("Division by zero!");
      }
      return Complex((real * rhs.real + imag * rhs.imag) / denominator,
                     (imag * rhs.real - real * rhs.imag) / denominator);
   }

   // Overloading the == operator
   bool operator==(const Complex& rhs) const {
      return (real == rhs.real) && (imag == rhs.imag);
   }

   // Overloading the != operator
   bool operator!=(const Complex& rhs) const {
      return !(*this == rhs);
   }

   // Overloading the << operator for output
   friend ostream& operator<<(ostream& out, const Complex& c) {
      out << c.real << (c.imag >= 0 ? " + " : " - ") << abs(c.imag) << "i";
      return out;
   }

   // Overloading the >> operator for input
   friend istream& operator>>(istream& in, Complex& c) {
      cout << "Enter real part: ";
      in >> c.real;
      cout << "Enter imaginary part: ";
      in >> c.imag;
      return in;
   }
};

int main() {
   Complex c1(3, 4);
   Complex c2(1, -2);
   Complex result;
   
   // Demonstrating arithmetic operators
   cout << "c1 = " << c1 << endl;
   cout << "c2 = " << c2 << endl;

   result = c1 + c2;
   cout << "c1 + c2 = " << result << endl;

   result = c1 - c2;
   cout << "c1 - c2 = " << result << endl;

   result = c1 * c2;
   cout << "c1 * c2 = " << result << endl;

   result = c1 / c2;
   cout << "c1 / c2 = " << result << endl;

   // Demonstrating comparison operators
   if (c1 == c2)
      cout << "c1 is equal to c2" << endl;
   else
      cout << "c1 is not equal to c2" << endl;

   if (c1 != c2)
      cout << "c1 is different from c2" << endl;
   
   // Demonstrating input operator
   Complex c3;
   cout << "\nEnter a new complex number:" << endl;
   cin >> c3;
   cout << "You entered: " << c3 << endl;

   return 0;
};