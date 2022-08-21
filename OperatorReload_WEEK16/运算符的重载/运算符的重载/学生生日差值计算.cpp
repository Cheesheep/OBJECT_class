#include<iostream>
#include<math.h>
using namespace std;
class Student {
	string name;
	int year, mon, day;
public:
	bool isYear(int a) {//判断是否是闰年
		if (a % 4 == 0 && a % 100 != 0)
			return 1;
		else if (a % 400 == 0 && a % 100 == 0)
			return 1;
		else
			return 0;
	}
	int getThisYearDay(int y, int m, int d) {
		int Feb, daysum = 0;
		if (isYear(y))
			Feb = 29;
		else
			Feb = 28;
		int months[13] = { 0,31,Feb,31,30,31,30,31,31,30,31,30,31 };
		for (int i = 1; i < m; i++)
		{
			daysum += months[i]; //加上所有月份
		}
		return daysum + d;
	}
	Student(string n, int y, int m, int d) :name(n) { year = y; mon = m; day = d; }
	int operator -(Student& s) {
		int sum;
		if (year == s.year && mon == s.mon) {
			return abs(day - s.day);
		}
		else if (year == s.year && mon != s.mon) {
			return abs(getThisYearDay(year, mon, day) - getThisYearDay(s.year, s.mon, s.day));
		}
		else if (year > s.year) {
			int sumdays = 0;
			int minyearday = 365 - getThisYearDay(s.year, s.mon, s.day);
			int maxyearday = getThisYearDay(year, mon, day);
			if (isYear(s.year))
				minyearday += 1;
			for (int i = s.year + 1; i < year; i++)
			{
				if (isYear(i))
					sumdays += 366;
				else
					sumdays += 355;
			}
			return sumdays + maxyearday + minyearday;
		}
		else if (year < s.year) {
			int sumdays = 0;
			int minyearday = 365 - getThisYearDay(year, mon, day);
			int maxyearday = getThisYearDay(s.year, s.mon, s.day);
			if (isYear(year))
				minyearday += 1;
			for (int i = year + 1; i < s.year; i++)
			{
				if (isYear(i))
					sumdays += 366;
				else
					sumdays += 355;
			}
			return sumdays + maxyearday + minyearday;
		}
	}
	bool Compa(Student& a, Student& b) {//a比b晚则返回1
		if (a.year > b.year || a.year == b.year && a.mon > b.mon ||
			a.year == b.year && a.mon == b.mon && a.day > b.day)
			return 1;
		else
			return 0;
	}
	string getName() { return name; }
};
int main() {
	int t, y, m, d;
	string name;
	cin >> t >> name >> y >> m >> d;
	t--;
	int dif, maxDay = 0;
	Student min(name, y, m, d);
	Student max(name, y, m, d);
	while (t--) {
		cin >> name >> y >> m >> d;
		Student Example(name, y, m, d);
		if (Example.Compa(Example, max))
			max = Example;
		else if (Example.Compa(Example, min) == 0)
			min = Example;
	}
	maxDay = max - min;
	cout << min.getName() << "和" << max.getName() << "年龄相差最大，为" << maxDay << "天。";
}