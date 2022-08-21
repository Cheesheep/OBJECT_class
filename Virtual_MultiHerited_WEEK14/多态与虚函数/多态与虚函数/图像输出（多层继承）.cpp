//#include<iostream>
//
//using namespace std;
//
//class Shape {
//protected:
//	string name;
//	float x, y;
//public:
//	virtual string getName() { return name; }
//	virtual float getx() { return x; }
//	virtual float gety() { return y; }
//	virtual float getArea() { return 0.0; }
//	virtual float getVol() { return 0.0; }
//	virtual void shapeName() = 0;
//};
//
//class Point :public Shape {
//public:
//	Point() { cin >> x >> y; }
//	virtual void shapeName() { name = "Point"; }
//	virtual string getName() { return name; }
//	virtual float getx() { return x; }
//	virtual float gety() { return y; }
//	virtual float getArea() { return 0.0; }
//	virtual float getVol() { return 0.0; }
//};
//class Circle :public Point {
//protected:
//	float radius;
//public:
//	Circle() { cin >> radius; }
//	virtual void shapeName() { name = "Circle"; }
//	virtual string getName() { return name; }
//	virtual float getx() { return x; }
//	virtual float gety() { return y; }
//	virtual float getArea() { return 3.14159 * radius * radius; }
//	virtual float getVol() { return 0.0; }
//};
//class Cylinder :public Circle {
//	float height;
//public:
//	Cylinder() { cin >> height; }
//	virtual void shapeName() {name = "Cylinder";}
//	virtual string getName() { return name; }
//	virtual float getx() { return x; }
//	virtual float gety() { return y; }
//	virtual float getArea() { return 2*3.14159 * radius * (radius + height);  }
//	virtual float getVol() { return 3.14159 * radius * radius * height; }
//};
//
//
//
//void Print(Shape* sha) {
//	cout << sha->getName() << "--(" << sha->getx() << ',' << sha->gety() << ")--" << (int)sha->getArea() << "--" << (int)sha->getVol() << endl;
//}
//
//
//int main()
//{
//	Point* p;
//	Point po;
//	po.shapeName();
//	p = &po;
//	Print(p);
//	Circle ci;
//	ci.shapeName();
//	p = &ci;
//	Print(p);
//	Cylinder cy;
//	cy.shapeName();
//	p = &cy;
//	Print(p);
//
//	return 0;
//}