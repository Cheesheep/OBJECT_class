//#include<iostream>
//#include<math.h>
//using namespace std;
//
//class CPoint{
//	int x, y, z;
//public:
//	CPoint() {};
//	CPoint(int x,int y, int z) {
//		this->x = x;
//		this->y = y;
//		this->z = z;
//	}
//	~CPoint(){}
//	friend class CCube;
//};
//
//
//class CCube {
//	CPoint* point;
//public:
//	CCube();
//	int collide(CCube &r);
//};
//
//CCube::CCube(){
//	point = new CPoint[2];
//	int x, y, z;
//	cin >> x >> y >> z;
//	CPoint p1(x, y, z);
//	cin >> x >> y >> z;
//	CPoint p2(x, y, z);
//	point[0] = p1;
//	point[1] = p2;
//}
//int CCube::collide(CCube &r) {
//	bool xc, yc, zc;
//	xc = yc = zc = 0;
//	int maxx = max(point[0].x,point[1].x );
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
//	maxx = max(point[0].z, point[1].z);
//	maxr = max(r.point[0].z, r.point[1].z);
//	mid = (point[0].z + point[1].z) / 2;
//	midr = (r.point[0].z + r.point[1].z) / 2;
//	if (maxx - mid + maxr - midr >= abs(mid - midr))
//		zc = 1;//表示z轴重叠
//
//	if (xc && yc && zc)
//		return 1;
//	else return 0;
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		CCube c1;
//		CCube c2;
//		
//		if (c2.collide(c1))
//			cout << "collide" << endl;
//		else
//			cout << "have distance" << endl;
//	}
//}