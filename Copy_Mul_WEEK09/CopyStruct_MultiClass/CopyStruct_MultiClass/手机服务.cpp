//#include<iostream>
//using namespace std;
//
//class Date {
//	int year;
//	int mon;
//	int day;
//public:
//	Date(){}
//	Date(int y, int m, int d) :year(y),mon(m),day(d){}
//	void printDate() { cout << year << "." << mon << "." << day << endl; }
//};
//
//class Phone {
//	char Type;
//	string number;
//	int states;
//	Date* date;
//public:
//	Phone() {}
//	Phone(char Type, string number, int states);
//	Phone(Phone& ph,Date &da);
//	void Stop(Date da);
//	void Print();
//};
//Phone::Phone(char Type, string number, int states)
//{
//		date = NULL;
//		this->Type = Type;
//		this->number = number;
//		this->states = states;
//		cout << "Construct a new phone " << number << endl ;
//}
//Phone::Phone(Phone& ph,Date &da) {
//	cout << "Construct a copy of phone " << ph.number << endl;
//	number = ph.number;
//	Type = 'D';
//	states = ph.states;
//	number += 'X';
//	if (states == 3) {
//		date = new Date;
//		*date = da;
//	}
//}
//void Phone::Stop(Date da) {
//	cout << "Stop the phone " << number << endl;
//	states = 3;
//	date = new Date;
//	*date = da;
//}
//
//void Phone::Print() {
//		cout << "类型=";
//		switch (Type)
//		{
//		case 'A':cout << "机构";break;
//		case 'B':cout << "企业";break;
//		case 'C':cout << "个人";break;
//		case 'D':cout << "备份";break;
//		}
//		cout << "||号码=" << number << "||State=";
//		if (states == 1)
//			cout << "在用" << endl;
//		else if(states == 2)
//			cout << "未用" << endl;
//		else if (states == 3) {
//			cout << "停用 ||停机日期=" ;
//			date->printDate();
//		}
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		char Type;
//		string num;
//		int sta,y,m,d;
//		cin >> Type >> num >> sta >> y >> m >> d;
//		Date da(y,m,d);
//		Phone p1(Type, num, sta);
//		p1.Print();
//		Phone copy(p1,da);
//		copy.Print();
//		p1.Stop(da);
//		p1.Print();
//		cout << "---" << endl;
//	}
//}