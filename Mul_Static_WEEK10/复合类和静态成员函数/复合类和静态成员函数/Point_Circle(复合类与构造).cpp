//#include<iostream>
//using namespace std;
//
//class Point{
//	double x, y;
//public:
//	Point() :x(0), y(0) {}
//	Point(double x_value, double y_value) { x = x_value;y = y_value; }
//	double getX() { return x; }
//	double getY() { return y; }
//	void setXY(double x1, double y1) { x = x1;y = y1; }
//};
//
//class Circle{
//	Point centre;
//	double radius;
//public:
//	Circle() { centre.setXY(0, 0);radius = 1; }
//	Circle(double x, double y, double r) :radius(r) { centre.setXY(x, y); };
//	void moveCentreTo(double x1, double y1) { centre.setXY(x1, y1); }
//	int contain(Point& p);
//};
//
//int Circle::contain(Point& p) {
//	double dis = pow(p.getX() - centre.getX(), 2) + pow(p.getY() - centre.getY(), 2);
//	if (dis > radius * radius)
//		return 0;
//	else 
//		return 1;
//}
//
//int main() {
//	int x, y, r;
//	cin >> x >> y >> r;
//	Circle myc(x,y,r);
//	int num;
//	cin >> num;
//	Point* ps = new Point[num];
//	for (int i = 0; i < num; i++)
//	{
//		int _x, _y;
//		cin >> _x >> _y;
//		Point p(_x,_y);
//		ps[i] = p;
//		if (myc.contain(p))
//			cout << "inside" << endl;
//		else
//			cout << "outside" << endl;
//	}
//	cout << "after move the centre of circle:" << endl;
//	cin >> x >> y;
//	myc.moveCentreTo(x, y);
//	for (int i = 0; i < num; i++)
//	{
//		if (myc.contain(ps[i]))
//			cout << "inside" << endl;
//		else
//			cout << "outside" << endl;
//	}
//}