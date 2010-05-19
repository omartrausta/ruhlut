#include "Date.h"

int main () 
{
	Date *a, *b;
	a = new Date(1, 2, 3);
	b = new Date(*a);
	b->print();
}
