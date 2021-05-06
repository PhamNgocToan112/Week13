#include<faction.h>
Fraction :: Fraction(int x, int y) : numerator(x/ irreducible(x, y)), denominator(y/ irreducible(x, y)) {}

int Fraction::irreducible(int x, int y){
	while(x != y)
	{
		if (x % y == 0)return y;
		if (y % x == 0)return x;
		while (x != y) {
			if (x > y) {
				x -= y;
			}
			else {
				y -= x;
			}
		}
		return x;
	}
}
Fraction Fraction :: operator + (Fraction other) {
	assert(this->denominator != 0);
	assert(other.denominator != 0);
	Fraction res = Fraction(this->numerator * other.denominator + this->denominator * other.numerator, other.denominator * this->denominator);

	assert(res.numerator != 0);
	assert(res.denominator != 0);
	return res;
}


Fraction Fraction :: operator - (Fraction other) {
	assert(this->denominator != 0);
	assert(other.denominator != 0);

	Fraction res = Fraction(this->numerator * other.denominator - this->denominator * other.numerator, other.denominator * this->denominator);
	assert(res.numerator != 0);
	assert(res.denominator != 0);
	return res;
}

Fraction Fraction :: operator * (Fraction other) {
	assert(this->denominator != 0);
	assert(other.denominator != 0);

	Fraction res = Fraction(this->numerator * other.numerator, other.denominator * this->denominator);
	assert(res.numerator != 0);
	assert(res.denominator != 0);
	return res;
}

Fraction Fraction :: operator / (Fraction other) {
	assert(this->denominator != 0);
	assert(other.denominator != 0);

	Fraction res = Fraction(this->numerator * other.denominator, other.numerator * this->denominator);
	assert(res.numerator != 0);
	assert(res.denominator != 0);
	return res;
}


void Fraction::printf() { 
	cout << numerator << " " << denominator;
	cout << endl;
}
