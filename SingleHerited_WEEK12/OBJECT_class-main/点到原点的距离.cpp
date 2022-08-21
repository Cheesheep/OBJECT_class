//#include<iostream>
//#include<math.h>
//using namespace std;
//
//class Point_1D {
//protected:
//	float x;
//public:
//	Point_1D() {}
//	Point_1D(float x) { this->x = x; }
//	float distance() {
//		return abs(x);
//	}
//	void display() {
//		printf("Distance from Point (%.2f) to original point is %.2f\n",x,distance());
//	}
//};
//
//class Point_2D : public Point_1D {
//protected:
//	float y;
//public:
//	Point_2D() {}
//	Point_2D(float x, float y) { this->x = x; this->y = y; }
//	float distance() {
//		return sqrt(x*x+y*y);
//	}
//	void display() {
//		printf("Distance from Point (%.2f, %.2f) to original point is %.2f\n", x,y, distance());
//	}
//};
//class Point_3D : public Point_2D {
//protected:
//	float z;
//public:
//	Point_3D(float x, float y, float z) { this->x = x; this->y = y; this->z = z; }
//	float distance() {
//		return sqrt(x * x + y * y + z * z );
//	}
//	void display() {
//		printf("Distance from Point (%.2f, %.2f, %.2f) to original point is %.2f\n", x,y,z, distance());
//	}
//};
//
//int main() {
//	float x,y,z;
//	int type;
//	cin >> type;
//	while (type) {
//		if (type == 1) {
//			cin >> x;
//			Point_1D po(x);
//			po.display();
//		}else if (type == 2) {
//			cin >> x >> y;
//			Point_2D po(x,y);
//			po.display();
//		}else if (type == 3) {
//			cin >> x >> y >> z;
//			Point_3D po(x,y,z);
//			po.display();
//		}
//		cin >> type;
//	}
//}