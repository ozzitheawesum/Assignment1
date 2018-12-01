#include "ComplexClass.h"
#include "LLclass.h"
ll::ll()
{
	head = NULL;
}
ll::ll(double r, double i)
{
	head = new Complex;
	head->real = r;
	head->imag = i;
	head->next = NULL;
}
ll::ll(Complex *first)
{
	head = first;
	head->next = NULL;
}

void ll::ins_start(Complex* a)
{
	a->next = head;
	head = a;
}
void ll::ins_start(double r, double i)
{
	Complex* temp = new Complex;
	temp->next = head;
	head = temp;
	head->real = r;
	head->imag = i;
}
void ll::ins_end(Complex a)
{
	Complex *temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = &a;
	a.next = NULL;
}
void ll::ins_end(Complex *a)
{
	Complex *temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = a;
	a->next = NULL;
}
void ll::ins_pos(Complex* new_Complex, int p)
{
	Complex* temp;
	temp = head;
	for (int i = 1; i<p - 1; i++) temp = temp->next;
	new_Complex->next = temp->next;
	temp->next = new_Complex;

}
void ll::ins_pos(double r, double i, int p)
{
	Complex* temp;
	temp = head;
	for (int j = 0; j<p; j++) temp = temp->next;
	Complex* new_node = new Complex;
	new_node->next = temp->next;
	temp->next = new_node;
	new_node->real = r;
	new_node->imag = i;
}

void ll::del_pos(int p)
{
	Complex *current, *previous;
	current = head; previous = head;
	for (int i = 1; i < p; i++)
	{
		previous = current;
		current = current->next;
	}

	previous->next = current->next;
	delete current;

}
void ll::ins_end(double r, double i)
{
	Complex *temp;
	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	Complex* new_node = new Complex;
	temp->next = new_node;
	new_node->next = NULL;
	new_node->real = r;
	new_node->imag = i;
}
void ll::del_start()
{
	Complex* temp;
	temp = head->next;
	delete head;
	head = temp;
}
void ll::del_end()
{
	Complex *current, *previous = NULL;
	current = head;

	while (current->next != NULL)
	{
		previous = current;
		current = current->next;
	}

	delete current;
	previous->next = NULL;
}
void ll::trans()
{
	Complex *temp;
	temp = head;
	cout << temp->real;
	if (temp->imag >= 0)
		cout << "+";
	cout << temp->imag << "i , ";
	while (temp->next != NULL)
	{
		temp = temp->next;
		cout << temp->real;
		if (temp->imag >= 0)
			cout << "+";
		cout << temp->imag << "i, ";
	}cout << endl;
}
Complex* ll::val_at_pos(int pos)
{
	Complex* temp;
	temp = head;
	for (int i = 0; i<pos - 1; i++)
		temp = temp->next;
	return temp;
}
	