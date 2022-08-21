#include<iostream>
using namespace std;

class Com {
	double real;
	double iamge;
public:
	Com() {};
	Com(double r,double i):real(r),iamge(i){}
	friend Com addCom(Com c1, Com c2);
	friend Com minusCom(Com c1, Com c2);
	friend void outCom(Com c) { cout << '(' << c.real << ',' << c.iamge << ')' << endl; }
};

Com minusCom(Com c1, Com c2) {
	Com result(c1.real - c2.real,c1.iamge - c2.iamge);
	return result;
}
Com addCom(Com c1, Com c2) {
	Com result(c1.real + c2.real, c1.iamge + c2.iamge);
	return result;
}

int main(){
	int t;
	int real, imag;
	cin >> real >> imag >> t;
	Com mycom(real,imag);
	char sym;
	while (t--) {
		cin >> sym;
		int re, im;
		cin >> re >> im;
		Com c1(re,im);
		if (sym == '+') {
			mycom = addCom(mycom, c1);
			outCom(mycom);
		}
		else 
		{
			mycom = minusCom(mycom, c1);
			outCom(mycom);
		}

	}
}