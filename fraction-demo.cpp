#include"faction.h"

int main() {
	Fraction a = Fraction(6, 4);
	Fraction b = Fraction(3, 4);
	Fraction c = a + b;
	c.printf();
	Fraction d = a - b;
	d.printf();
	Fraction e = a * b;
	e.printf();
	Fraction f = a / b;
	f.printf();
	
  
  return 0;
}
