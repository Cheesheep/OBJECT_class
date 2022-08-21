//#include<iostream>
//#include<math.h>
//using namespace std;
//
//class CPoint {
//	int x, y;
//public:
//	CPoint() {};
//	CPoint(int x, int y) {
//		this->x = x;
//		this->y = y;
//	}
//	~CPoint() {}
//	friend class CRect;
//};
//
//
//class CRect {
//	CPoint* point;
//public:
//	CRect();
//	int collide(CRect& r);
//};
//
//CRect::CRect() {
//	point = new CPoint[2];
//	int x, y;
//	cin >> x >> y ;
//	CPoint p1(x, y);
//	cin >> x >> y ;
//	CPoint p2(x, y);
//	point[0] = p1;
//	point[1] = p2;
//}
//int CRect::collide(CRect& r) {
//	bool xc, yc;
//	xc = yc = 0;
//	int maxx = max(point[0].x, point[1].x);
//	int maxr = max(r.point[0].x, r.point[1].x);
//	int mid = (point[0].x + point[1].x) / 2;
//	int midr = (r.point[0].x + r.point[1].x) / 2;
//	if (maxx - mid + maxr - midr >= abs(mid - midr))
//		xc = 1;//表示x轴重叠
//
//	maxx = max(point[0].y, point[1].y);
//	maxr = max(r.point[0].y, r.point[1].y);
//	mid = (point[0].y + point[1].y) / 2;
//	midr = (r.point[0].y + r.point[1].y) / 2;
//	if (maxx - mid + maxr - midr >= abs(mid - midr))
//		yc = 1;//表示y轴重叠
//
//
//	if (xc && yc )
//		return 1;
//	else return 0;
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		CRect c1;
//		CRect c2;
//
//		if (c2.collide(c1))
//			cout << "overlapped" << endl;
//		else
//			cout << "not overlapped" << endl;
//	}
//}