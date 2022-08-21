//#include<iostream>
//using namespace std;
//
//class Date {
//protected:
//	int year,month,day;
//public:
//	Date() {}
//	Date(int y,int m,int d):year(y),month(m),day(d) {}
//};
//
//class Time {
//protected:
//	int hour, min, sec;
//public:
//	Time(){}
//	Time(int h,int m,int s):hour(h),min(m),sec(s){}
//};
//
//class Schedule :public Date,public Time{
//	int ID;
//public:
//	Schedule(int id,int y,int m,int d,int h,int min,int s)
//	:Date(y,m,d),Time(h,min,s),ID(id){}
//	friend bool before(const Schedule& s1,const Schedule& s2);
//	void display() {
//		cout << "The urgent schedule is No." << ID << ": ";
//		printf("%d/%02d/%d %02d:%02d:%02d", year, month, day, hour, min, sec);
//	}
//};
//
//bool before(const Schedule& s1, const Schedule& s2) {
//	if (s1.year > s2.year || s1.year == s2.year && s1.month > s2.month ||
//		s1.year == s2.year && s1.month == s2.month && s1.day > s2.day)
//		return 1;
//	else if (s1.year < s2.year || s1.year == s2.year && s1.month < s2.month ||
//		s1.year == s2.year && s1.month == s2.month && s1.day < s2.day)
//		return 0;
//	else {
//		if (s1.hour > s2.hour || s1.hour == s2.hour && s1.min > s2.min ||
//			s1.hour == s2.hour && s1.min == s2.min && s1.sec > s2.sec)
//			return 1;
//		else
//			return 0;
//	}
//}
//
//int main() {
//	int id;
//	int y, m, d, hour, min, sec;
//	Schedule urgentest(200, 9999, 1, 1, 0, 0, 0);
//	while (1) {
//		cin >> id;
//		if (!id) break;
//		cin >> y >> m >> d >> hour >> min >> sec;
//		Schedule sample(id,y,m,d,hour,min,sec);
//		if (before(urgentest, sample))
//			urgentest = sample;
//	}
//	urgentest.display();
//}