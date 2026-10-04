#include<iostream>
using namespace std;

class Complex {
public:
  int real,imag;

  Complex(int r,int i) : real(r),imag(i) {}

  Complex operator + (const Complex& obj) {
   return Complex(real + obj.real,imag + obj.imag);
    }
 };

int main() {
 Complex c1(16,20), c2(4,2);

Complex c3 = c1 + c2;
cout<<"Addition is: "<<c3.real<<"+i"<<c3.imag;
return 0;
}
