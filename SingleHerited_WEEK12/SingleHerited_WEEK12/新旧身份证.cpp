//#include<iostream>
//#include<string.h>
//using namespace std;
//
//class CDate
//{
//private:
//
//	int year, month, day;
//
//public:
//	CDate() {}
//	CDate(int a, int b, int c): year(a),month(b),day(c){}
//	int getYear() { return year; }
//	int getMonth() { return month; }
//	int getDay() { return day; }
//	bool check() { //检验日期是否合法
//		int monthDay[] = { 31,(isLeap() ? 29 : 28),31,30,31,30,31,31,30,31,30,31 };
//		if (day < 0 || year < 0 || month < 0  || month>12 ||year > 2017|| day > monthDay[month - 1])
//			return 0;
//		else
//			return 1;
//	}
//	bool isLeap() { return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0); }
//	void print() {
//		cout << year << "年" << month << "月" << day << "日";
//	}
//
//};
//
//class COldID
//
//{
//private:
//	char* p_id15, * p_name; //15位身份证号码，姓名
//
//	CDate birthday; //出生日期
//
//public:
//	COldID() {}
//
//	COldID(char* p_idval, char* p_nameval, CDate& day) {
//		//p_id15 = new char[25];
//		p_id15 = p_idval;
//		//p_name = new char[25];
//		p_name = p_nameval;
//		birthday = day;
//	}
//
//	bool check() //验证15位身份证是否合法
//	{
//		if (birthday.check() == 0) {
//			//cout << "birth not legal" << endl;
//			return false;
//		}
//		if (strlen(p_id15) != 15) {
//			//cout << "len != 15" << endl;
//			return false;
//		}
//		for (int i = 0; i < 15; i++)
//		{
//			if (p_id15[i] < '0' || p_id15[i] > '9')
//				return false;
//		}
//		if ((p_id15[6] - '0') * 10 + (p_id15[7] - '0') != birthday.getYear() % 100 ||
//			(p_id15[8] - '0') * 10 + (p_id15[9] - '0') != birthday.getMonth() ||
//			(p_id15[10] - '0') * 10 + (p_id15[11] - '0') != birthday.getDay()) {
//			//cout << "birth not right" << endl;
//			return false;
//		}
//		return true;
//
//	}
//	void print() { cout << p_name << endl; }
//	~COldID() {}
//	char* getPID15() { return p_id15; }
//
//};
//
//class CNewID :public COldID{
//private:
//	char* p_id18;
//	CDate issueday;
//	int validyear;
//	COldID old;
//public:
//	CNewID(char* name, CDate& da, char* oldid, char* newid);
//	bool check();
//
//	void print() {
//		old.print();
//		if (check()) {
//			cout << p_id18 << ' ';
//			issueday.print();
//			if (validyear != 100)
//				cout <<' ' << validyear << "年" << endl;
//			else
//				cout << " 长期" << endl;
//		}
//		else
//			cout << "illegal id" << endl;
//	}
//};
//CNewID:: CNewID(char* name, CDate& da,char *oldid,char *newid) {
//
//
//	int y, m, d;
//	cin  >> y >> m >> d >> validyear;
//	CDate date(y, m, d);
//	issueday = date;
//	COldID OLD(oldid,name,da);
//	old = OLD;
//	p_id18 = newid;
//}
//bool CNewID::check() 
//{
//	if (!issueday.check())//签证日期是否合法
//	{
//		//cout << "issueday not legal" << endl;
//		return 0;
//	}
//		if (!old.check())//15位旧身份证是否正确
//			return 0;
//		if (strlen(p_id18) != 18) {//长度是否正确
//			return false;
//		}
//		char* p15 = old.getPID15();
//		for (int j = 0,i = 0; i < 15;)//15位与18位是否对应
//		{
//			if (i == 6) { i = 8;continue; }
//			if (p15[j++] != p_id18[i++]) {
//				//cout << "15 not right with 18" << endl;
//				return 0;
//			}
//		}
//		int matrix[] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
//		char code[] = { '1','0','X','9','8','7','6','5','4','3','2'};
//		int sum = 0;
//		for (int i = 0; i < 17; i++)
//		{
//			//cout << p_id18[i] << ' ' << matrix[i] << endl;
//			sum += (p_id18[i] - '0') * matrix[i];
//		}
//		sum %= 11;
//		if (code[sum] != p_id18[17]) {// 校验码是否正确
//			//cout << "should be " << code[sum] << " actually " << p_id18[17]<<endl;
//			return 0;
//		}
//		if (issueday.getYear() + validyear < 2017)//是否超过有效期
//			return 0;
//		else if (issueday.getYear() == 2017 && issueday.getMonth() < 5)
//			return 0;
//		else if (issueday.getYear() == 2017 && issueday.getMonth() == 5 && issueday.getDay() < 10)
//			return 0;
//		return 1;
//	}
//
//
//int main() {
//	int t;
//	cin >> t;
//	int y, m, d;
//	char name[10];
//	char oldid[25], newid[25];
//	while (t--) {
//		cin >> name >> y >> m >> d >> oldid >> newid;
//		CDate date(y,m,d);
//		CNewID person(name,date,oldid,newid);
//		person.print();
//	}
//}