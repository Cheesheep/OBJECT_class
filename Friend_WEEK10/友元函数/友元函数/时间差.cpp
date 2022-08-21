//#include<iostream>
//#include<math.h>
//using namespace std;
//class CTime;
//void Display( CTime *&a,CTime *&b);
//
//
//class CTime {
//private:
//	int hour, min, sec;
//
//public:
//	int getH() { return hour; }
//	int getM() { return min; }
//	int getS() { return sec; }
//	friend void Display( CTime *&a,CTime *&b);
//	CTime(){}
//	CTime(int h, int m, int s) :hour(h), min(m), sec(s) { }
//};
//
//void Display(CTime *&a,CTime *&b) {
//	cout << a->getH() << "时" << a->getM() << "分" << a->getS() << "秒--" << b->getH() << "时" << b->getM() << "分" << b->getS() << "秒时间差为";
//	int Hdif, Mdif, Sdif,sum;
//	Sdif = b->getS() - a->getS();
//	Mdif = b->getM() - a->getM();
//	Hdif = b->getH() - a->getH();
//	sum = abs(Sdif + Mdif * 60 + 3600 * Hdif);
//	cout << sum << "秒" << endl;
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int h, m, s;
//		cin >> h >> m >> s;
//		CTime *t1 = new CTime(h,m,s);
//		cin >> h >> m >> s;
//		CTime *t2 = new CTime(h,m,s);
//		Display(t1,t2);
//	}
//}