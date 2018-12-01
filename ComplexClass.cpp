#include "ComplexClass.h" 
 
	Complex::Complex()
	{}
	Complex::Complex(double r, double i)
	{
		real = r;
		imag = i;
	}
	Complex::Complex(Complex *c)
	{
		real = c->real;
		imag = c->imag;
	}
	void Complex::COPY(Complex *c)
	{
		real = c->real;
		imag = c->imag;
	}
	Complex* Complex::add(Complex* c)
	{
		Complex* temp = new Complex;
		temp->real = real + c->real;
		temp->imag = imag + c->imag;
		return temp;
	}
	
	Complex* Complex::sub(Complex* c)
	{
		Complex* temp = new Complex;
		temp->real = real - c->real;
		temp->imag = imag - c->imag;
		return temp;
	}

	Complex* Complex::mul(Complex* c)
	{
		Complex* temp = new Complex;
		temp->real = real*c->real - c->imag*imag;
		temp->imag = imag*c->real + real*c->imag;
		return temp;
	}
	Complex* Complex::div(Complex* c)
	{
		if (c->real == 0 && c->imag == 0)
		{
			throw "Division by zero condition!";
		}
		Complex* temp = new Complex;
		temp->real = (real*c->real + c->imag*imag) / (c->real*c->real + c->imag*c->imag);
		temp->imag = (imag*c->real - real*c->imag) / (c->real*c->real + c->imag*c->imag);
		return temp;
	}


	Complex* Complex::operator+(Complex c)
	{
	Complex* temp = new Complex;
	temp->real = real + c.real;
	temp->imag = imag + c.imag;
	return temp;
	}
	Complex* Complex::operator-(Complex c)
	{
	Complex* temp = new Complex;
	temp->real = real - c.real;
	temp->imag = imag - c.imag;
	return temp;
	}
	Complex* Complex::operator*(Complex c)
	{
	Complex* temp = new Complex;
	temp->real = real*c.real - c.imag*imag;
	temp->imag = imag*c.real + c.imag*real;
	return temp;
	}
	Complex* Complex::operator/(Complex c)
	{
	if (c.real == 0 && c.imag == 0)
	{
		throw "Division by zero condition!";
	}
	Complex* temp = new Complex;
	temp->real = (real*c.real + c.imag*imag) / (c.real*c.real + c.imag*c.imag);
	temp->imag = (imag*c.real - c.imag*real) / (c.real*c.real + c.imag*c.imag);
	return temp;
	}


	void Complex::out()
	{
		cout << real << " + " << imag << " i , " << endl;
	}