//#include <iostream>
//#include<math.h>
//using namespace std;
//
//class Point{
//    int X;
//    int Y;
//public:
//    Point() {};
//    Point(int x,int y):X(x),Y(y) {}
//    ~Point() { X = 0;Y = 0;cout << "point clear" << endl; }
//    void setXY(int x,int y);
//    friend class Circle;
//};
//
//void Point::setXY(int x,int y) {
//    X = x, Y = y;
//}
//
//class Circle {
//    int X;
//    int Y;
//    double R;
//public:
//    Circle(int X, int Y, int R) { this->X = X;this->Y = Y;this->R = R; }
//    ~Circle() { X = Y = R = 0; cout << "circle clear" << endl; }
//    void Contain(Point& p);
//};
//
//void Circle::Contain(Point& p) {
//    double distance = pow(pow(p.X - X,2) + pow(p.Y - Y,2), 0.5);
//    if (distance <= R)
//        cout << "in" << endl;
//    else
//        cout << "out" << endl;
//}
//
//int main() 
//{
//    int x1, y1;
//    cin >> x1 >> y1;
//    Point p0(x1, y1);
//    int num;
//    cin >> num;
//    Point* p = new Point[num];
//    for (int i = 0; i < num; i++)
//    {
//        cin >> x1 >> y1;
//        p[i].setXY(x1,y1);
//    }
////初始化圆
//    int x2, y2, radius;
//    cin >> x2 >> y2 >> radius;
//    Circle c(x2,y2,radius);
////判断距离
//    c.Contain(p0);
//    for (int i = 0; i < num; i++)
//    {
//        c.Contain(p[i]);
//    }
//    //delete[] p;
//}