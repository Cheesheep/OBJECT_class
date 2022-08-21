//#include<iostream>
//#include<iomanip>
//using namespace std;
//class CDate;class CTime;
//void Display(CDate&, CTime&);
//
//class CDate {
//private:
//	int year;
//	int mon;
//	int day;
//	friend void Display(CDate& , CTime& );
//public:
//	CDate() { cin >> year >> mon >> day; }
//};
//
//class CTime {
//	int hour, min, sec;
//	friend void Display(CDate& , CTime& );
//public:
//	CTime() { cin >> hour >> min >> sec; }
//};
//
//void Display(CDate &D, CTime& T) {
//	cout << D.year << '-' << setw(2) << setfill('0') << D.mon << '-' << setw(2) << setfill('0') << D.day << ' ';
//	cout << setw(2) << setfill('0') << T.hour << ':' << setw(2) << setfill('0') << T.min<< ':' << setw(2) << setfill('0') << T.sec << endl;
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		CDate da;
//		CTime ti;
//		Display(da, ti);
//	}
//}