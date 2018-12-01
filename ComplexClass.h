#include<iostream>
using namespace std;
class Complex {
public:
	double real, imag;
	Complex* next;
public:	
	Complex();
	Complex(double r, double i);
	Complex(Complex *c);
	void COPY(Complex *c);
	Complex* add(Complex* c);
	Complex* sub(Complex* c);
	Complex* mul(Complex* c);
	Complex* div(Complex* c);
	Complex* Complex:: operator+(Complex c);
	Complex* Complex::operator-(Complex c);
	Complex* Complex::operator*(Complex c);
	Complex* Complex::operator/(Complex c);
	void out();
};
