#include<iostream>
using namespace std;

class MyDate {
	int year;
	int month;
	int day;
public:
	MyDate();
	MyDate(int ty, int tm, int td);
	~MyDate();
	bool Before(const MyDate& rd);
};

MyDate::MyDate() { year = 2022;month = 4;day = 1; cout << "Date 2022-4-1 default constructed" << endl; }

MyDate::MyDate(int ty, int tm, int td) :year(ty), month(tm), day(td) { cout << "Date " << year << '-' << month << '-' << day << " constructed" << endl; }

MyDate::~MyDate() { cout << "Date " << year << '-' << month << '-' << day << " destructed" << endl; }

bool MyDate::Before(const MyDate& rd) {
	if (year < rd.year)
		printf("%d-%d-%d before %d-%d-%d\n", year, month, day, rd.year, rd.month, rd.day);
	else if(year > rd.year)
		printf("%d-%d-%d before %d-%d-%d\n", rd.year, rd.month, rd.day, year, month, day);
	else {
		if(month < rd.month)
			printf("%d-%d-%d before %d-%d-%d\n", year, month, day, rd.year, rd.month, rd.day);
		else if(month > rd.month)
			printf("%d-%d-%d before %d-%d-%d\n", rd.year, rd.month, rd.day, year, month, day);
		else
		{
			if(day < rd.day)
				printf("%d-%d-%d before %d-%d-%d\n", year, month, day, rd.year, rd.month, rd.day);
			else if(day > rd.day)
				printf("%d-%d-%d before %d-%d-%d\n", rd.year, rd.month, rd.day, year, month, day);
		}
	}
	return 0;
}


int main() {
	MyDate deMyDate;
	int t;
	cin >> t;
	while (t--) {
		int y, m, d;
		cin >> y >> m >> d;
		MyDate MyDate(y, m, d);
		MyDate.Before(deMyDate);
	}
}