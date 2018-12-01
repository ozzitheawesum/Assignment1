#include<iostream>
using namespace std;

class ll
{
private:
	Complex* head;

public:
	ll();
	ll(double r, double i);
	ll(Complex *first);
	void ins_start(Complex* a);
	void ins_start(double r, double i);
	void ins_end(Complex a);
	void ins_end(Complex *a);
	void ins_pos(Complex* new_Complex, int p);
	void ins_pos(double r, double i, int p);;
	void del_pos(int p);
	void ins_end(double r, double i);
	void del_start();
	void del_end();
	void trans();
	Complex* val_at_pos(int pos);
	
};
