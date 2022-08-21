//#include<iostream>
//#include<iomanip>
//#include<math.h>
//using namespace std;
//
//class CPoint {
//protected:
//	int x, y;
//public:
//	CPoint() {}
//};
//
//class CCircle : public CPoint {
//protected:
//	int r;
//
//public:
//	CCircle() {}
//	CCircle(int x, int y, int r) {
//		this->x = x; 
//		this->y = y;
//		this->r =r;
//	}
//	double getArea() {
//		return r * r* 3.14;
//	}
//	void print() {
//		cout << "Circle:(" << x << ',' << y << ")," << r << endl;
//		cout << "Area:" <<fixed<< setprecision(2) <<getArea()<< endl;
//	}
//};
//
//class CCylinder : public CCircle {
//protected:
//	int height;
//
//public:
//	CCylinder() { cin >> x >> y >> r >> height; }
//	double getVolume() {
//		return getArea()* height;
//	}
//	void print() {
//		cout << "Circle:(" << x << ',' << y << ")," << r <<','<<height<< endl;
//		cout << "Volume:" <<fixed<< setprecision(2) << getVolume() << endl;
//	}
//};
//
//int main() {
//	int x, y, r;
//	cin >> x >> y >> r;
//	CCircle cir(x,y,r);
//	cir.print();
//	CCylinder cyl;
//	cyl.print();
//}