#include<iostream>
#include<iomanip>
using namespace std;
class CDate;
int Dsum = 0;
int leap(int y);
int dayssum(CDate c);
int Comp(CDate c1, CDate c2);
class CDate {
	int year, mon, day;
public:
	int getY() { return year; }
	int getM() { return mon; }
	int getD() { return day; }
	CDate() {}
	CDate(int y, int m, int d) :year(y), mon(m), day(d) {}
};

class Pet

{
protected:

	string name;//姓名

	int length;//身长

	int weight;//体重

	CDate current;//开始记录时间

	//（日期类CDate包含年、月、日三个私有数据，其他方法根据需要自拟。）

public:
	Pet() {
			
	}
	virtual void display(CDate day) = 0;//输出目标日期时宠物的身长和体重

};
class Dog:public Pet {
public:
	Dog(string n, int l, int w) { name = n;length = l;weight = w; }
	virtual void display(CDate day) {
		cout << name << " after " << Dsum << " day: ";
		double l = Dsum * 0.2 + length;
		double w = Dsum * 0.1 + weight;
		cout << "length=" << fixed << setprecision(2) << l << ",weight=" << fixed << setprecision(2) << w << endl;
	}
};
class Cat:public Pet {
public:
	Cat(string n, int l, int w) { name = n;length = l;weight = w; }
	virtual void display(CDate day) {
		cout << name << " after " << Dsum << " day: ";
		double l = Dsum * 0.1 + length;
		double w = Dsum * 0.2 + weight;
		cout << "length=" << fixed << setprecision(2) << l << ",weight=" << fixed << setprecision(2) << w << endl;
	}
};

int leap(int y)//是否是闰年，是闰年return 1
{
    int x;
    if ((y % 4 == 0 && y % 100 != 0) || (y % 100 == 0 && y % 400 == 0))
        x = 1;
    else
        x = 0;
    return x;
}
int dayssum(CDate c)
{
    int sum, i;
    int days[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
    int daysleap[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

    if (leap(c.getY()))//是闰年
	{
		//cout << "getM" << c.getM() << endl;
        sum = days[c.getM()] - c.getD();
		//cout <<"sumfirst"<< sum << endl;
        for (i = c.getM() + 1;i <= 12;i++)
            sum += days[i];
    }
    else//不是闰年
    {
        sum = daysleap[c.getM()] - c.getD();
		//cout << "sumfirst" << sum << endl;
		for (i = c.getM() + 1;i <= 12;i++)
		{
			sum += daysleap[i];
		}
    }
    return sum;
}
int Comp(CDate c1, CDate c2)//时间对比
{
    int y, days;
    if (c1.getY() != c2.getY())//年份不同
    {
        days = dayssum(c1);
        for (y = c1.getY() + 1;y <= c2.getY();y++)
        {
            if (leap(y))
                days += 366;
            else
                days += 365;
        }
        days -= dayssum(c2);
    }
	
    else if (c1.getY() == c2.getY() && c1.getM() != c2.getM())//年相同月不相同
        days = dayssum(c1) - dayssum(c2);//两个时间的距离
    else if (c1.getY() == c2.getY() && c1.getM() == c2.getM() && c1.getD() != c2.getD())//日不相同
        days = c2.getD() - c1.getD();
//cout << "s1 " << dayssum(c1) << " s2 " << dayssum(c2) << endl;
    return days;
}

int main() {
	int t;
	cin >> t;
	int y, m, d;
	cin >> y >> m >> d;
	CDate cu_day(y, m, d);
	Pet* base;
	while (t--) {
		int type,y0,m0,d0,len,wei;
		string name;
		cin >> type >>name>> len >> wei;
		cin >> y0 >> m0 >> d0;
		CDate last_day(y0,m0,d0);
		Dsum = Comp(cu_day,last_day );
		if (y > y0 || (y == y0 && m > m0) || (y == y0 && m == m0 && d > d0))
			cout << "error" << endl;
		else if (type == 1) {
				Cat ani(name,len,wei);
				base = &ani;
				base->display(last_day);
			}
			else if(type == 2) {
				Dog ani(name,len,wei);
				base = &ani;
				base->display(last_day);

			}
	}
}