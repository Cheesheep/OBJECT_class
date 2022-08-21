#include<iostream>
using namespace std;

class Fraction {
	int numerator, denominator;
	int common_divisor(int a, int b) {
			while (a != b)
			{	if (a > b)
					a = a - b;
				else
					b = b - a;
			}
			return a;
	}
	void contracted() {}
public:
	Fraction(int n= 0, int d= 1) :numerator(n),denominator(d){}
	//Fraction(Fraction&);
	Fraction operator+(Fraction f) {
		return Fraction(numerator * f.denominator + f.numerator * denominator
			, denominator * f.denominator);
	}
	Fraction operator-(Fraction f) {
		return Fraction(numerator * f.denominator - f.numerator * denominator
			, denominator * f.denominator);
	}
	Fraction operator*(Fraction f) {
		return Fraction(numerator * f.numerator, denominator * f.denominator);
	}
	Fraction operator/(Fraction f) {
		return Fraction(numerator * f.denominator, denominator * f.numerator);
	}
	void Set(int a, int b) { numerator = a, denominator = b; }
	void disp(){ cout << "fraction=" << numerator << "/" << denominator << endl; }
};

int main() {
	int n1, n2, d1, d2;
	cin >> n1 >> d1 >> n2 >> d2;
	Fraction a(n1, d1), b(n2, d2), c;
	c = a + b;
	c.disp();
	c = a - b;
	c.disp();
	c = a * b;
	c.disp();
	c = a / b;
	c.disp();
}