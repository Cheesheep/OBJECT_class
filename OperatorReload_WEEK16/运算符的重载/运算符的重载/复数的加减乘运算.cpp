#include<iostream>
using namespace std;

class complex {
	float real, image;
public:
	complex(float x = 0, float y = 0) { real = x;image = y; }
	friend complex operator +(complex&, complex&);
	friend complex operator -(complex&, complex&);
	friend complex operator *(complex&, complex&);
	void show() { cout << "real=" << real << ' ' << "image=" << image << endl; }
};

complex operator +(complex& a, complex& b) {
	return complex(a.real + b.real, a.image + b.image);
}
complex operator -(complex& a, complex& b) {
	return complex(a.real - b.real, a.image - b.image);
}
complex operator *(complex& a, complex& b) {
	return complex(a.real * b.real - a.image * b.image, a.image * b.real + a.real * b.image);
}

int main() {
	float ar, ai, br, bi;
	cin >> ar >> ai >> br >> bi;
	complex a(ar, ai),b(br,bi),c;
	c = a + b;
	c.show();
	c = a - b;
	c.show();
	c = a * b;
	c.show();
}