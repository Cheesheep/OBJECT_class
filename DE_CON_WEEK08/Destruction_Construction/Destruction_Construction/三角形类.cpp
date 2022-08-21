//#include<iostream>
//#include<math.h>
//#include <iomanip>
//using namespace std;
//
//class Triangle {
//	double a, b, c;
//public:
//	Triangle() { cin >> a >> b >> c; }
//	~Triangle() { a = b = c = 0; }
//	void getSquare();
//	bool getType();
//};
//bool Triangle::getType() {
//	bool right, isoceles;//直角和等腰因子
//	right = isoceles = 0;
//	if (a + b > c && a + c > b && b + c > a) {//判断是否是三角形
//		if (pow(c, 2) - 0.01 <= pow(a, 2) + pow(b, 2) <= pow(c, 2) + 0.01 || pow(b, 2) - 0.01 <= pow(a, 2) + pow(c, 2) <= pow(b, 2) + 0.01 || pow(a, 2) - 0.01 <= pow(c, 2) + pow(b, 2) <= pow(a, 2) + 0.01)
//			right = 1;
//		if (a == b || a == c || b == c)
//			isoceles = 1;
//		if (right && isoceles)
//			cout << "isosceles right triangle";
//		else if (right && !isoceles)
//			cout << "right triangle";
//		else if (!right && !isoceles)
//			cout << "general triangle";
//		else if (!right && isoceles) {
//			if (a == b == c)
//				cout << "equilateral triangle";
//			else
//				cout << "isosceles triangle";
//		}
//	}
//	else {
//		cout << "no triangle" << endl;
//		return 0;
//	}
//	return 1;
//}
//void Triangle::getSquare() {
//	double p = (a + b + c) / 2.0;
//	double S = sqrt(p * (p - a) * (p - b) * (p - c));
//	cout <<", " <<fixed << setprecision(1) <<  S << endl;
//	//printf(", %0.1lf",S);
//}
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		Triangle T;
//		if (T.getType())
//			T.getSquare();
//	}
//}