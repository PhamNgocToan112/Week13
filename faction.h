#include<iostream>
#include<cstring>
#include<assert.h>

using namespace std;

class Fraction {
public:
	const int numerator, denominator;
	Fraction(int x, int y);
	~Fraction() { ; }
	void printf();
	int irreducible(int x, int y);
	Fraction  operator + (Fraction other);
	Fraction operator - (Fraction other);
	Fraction operator * (Fraction other);
	Fraction operator / (Fraction other);
};
