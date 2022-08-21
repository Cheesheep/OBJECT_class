//#include<iostream>
//#include<math.h>
///*
//
//这题有点难度滴，要认真理解透彻
//
//*/
//
//using namespace std;
//class CFraction
//{
//private:
//	int fz, fm;
//public:
//	CFraction(int fz_val, int fm_val) { fz = fz_val;fm = fm_val; };
//	CFraction add(const CFraction& r);
//	CFraction sub(const CFraction& r);
//	CFraction mul(const CFraction& r);
//	CFraction div(const CFraction& r);
//	int getGCD();   // 求对象的分子和分母的最大公约数
//	void print();
//};
//CFraction CFraction::add(const CFraction& r) {
//	return CFraction(fz * r.fm + fm * r.fz, fm * r.fm);
//}
//
//CFraction CFraction::sub(const CFraction& r) {
//	return CFraction(fz * r.fm - fm * r.fz, fm * r.fm);
//}
//
//CFraction CFraction::mul(const CFraction& r) {
//	return CFraction(fz * r.fz, fm * r.fm);
//}
//
//CFraction CFraction::div(const CFraction& r) {
//	return CFraction(fz * r.fm, fm * r.fz);
//}
//
//int CFraction::getGCD() {//获取最大公约数
//	int r = fm;
//	int a = fabs(fz), b = fabs(fm);
//	while (a % b != 0) {
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	return b;
//}
//
//void CFraction::print() {
//	int gcd = getGCD();
//	fz /= gcd;
//	fm /= gcd;
//	string signal;
//	if (fz / fz == fm / fm)
//		signal = "";
//	else
//		signal = "-";
//	if (fm != 1) {
//		cout << signal << fz << "/" << fm << endl;
//	}
//	else
//		cout << signal << fz;
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int fz, fm;
//		char a;
//		cin >> fz >> a >> fm;
//		CFraction c1(fz,fm);
//		cin >> fz >> a >> fm;
//		CFraction c2(fz, fm);
//		CFraction c = c1.add(c2);
//		c.print();
//		c = c1.sub(c2);
//		c.print();
//		c = c1.mul(c2);
//		c.print();
//		c = c1.div(c2);
//		c.print();
//		cout << endl;
//	}
//}