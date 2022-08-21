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

	string name;//����

	int length;//��

	int weight;//����

	CDate current;//��ʼ��¼ʱ��

	//��������CDate�����ꡢ�¡�������˽�����ݣ���������������Ҫ���⡣��

public:
	Pet() {
			
	}
	virtual void display(CDate day) = 0;//���Ŀ������ʱ�������������

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

int leap(int y)//�Ƿ������꣬������return 1
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

    if (leap(c.getY()))//������
	{
		//cout << "getM" << c.getM() << endl;
        sum = days[c.getM()] - c.getD();
		//cout <<"sumfirst"<< sum << endl;
        for (i = c.getM() + 1;i <= 12;i++)
            sum += days[i];
    }
    else//��������
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
int Comp(CDate c1, CDate c2)//ʱ��Ա�
{
    int y, days;
    if (c1.getY() != c2.getY())//��ݲ�ͬ
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
	
    else if (c1.getY() == c2.getY() && c1.getM() != c2.getM())//����ͬ�²���ͬ
        days = dayssum(c1) - dayssum(c2);//����ʱ��ľ���
    else if (c1.getY() == c2.getY() && c1.getM() == c2.getM() && c1.getD() != c2.getD())//�ղ���ͬ
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