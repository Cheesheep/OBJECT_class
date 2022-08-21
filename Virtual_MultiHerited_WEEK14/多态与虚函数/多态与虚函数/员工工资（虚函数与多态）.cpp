//#include<iostream>
//using namespace std;
//
//class Employee {
//protected:
//	string name;
//	string Job;
//	int year,rank;
//public:
//	Employee() {}
//	Employee(string _name,string _job) {
//		cin >> rank >> year;
//		name = _name;
//		Job = _job;
//	}
//	virtual void salary() {
//		if (year < 0 || rank < 0)
//			cout << "error grade or year." << endl;
//		else {
//			int salary;
//			salary = 1000 + 500 * rank + 50 * year;
//			cout << name << ':' << Job << ",Salary:" << salary<<endl;
//		}
//	}
//};
//
//class Teamleader :public Employee{
//public:
//	Teamleader(string _name, string _job) {
//		cin >> rank >> year;
//		name = _name;
//		Job = _job;
//	}
//	virtual void salary() {
//		if (year < 0 || rank < 0)
//			cout << "error grade or year." << endl;
//		else {
//			int salary;
//			salary = 3000 + 800 * rank + 100 * year;
//			cout << name << ':' << Job << ",Salary:" << salary<<endl;
//		}
//	}
//};
//class Manager :public Employee{
//public:
//	Manager(string _name, string _job) {
//		cin >> rank >> year;
//		name = _name;
//		Job = _job;
//	}
//	virtual void salary() {
//		if (year < 0 || rank < 0)
//			cout << "error grade or year." << endl;
//		else {
//			int salary;
//			salary = 5000 + 1000 * (rank + year) ;
//			cout << name << ':' << Job << ",Salary:" << salary<<endl;
//		}
//	}
//};
//
//int main() {
//	int t;
//	cin >> t;
//	Employee* base;
//	while (t--) {
//		string type,name;
//		cin >>name>> type;
//		if (type == "Employee") {
//			Employee ani(name,type);
//			base = &ani;
//			base->salary();
//		}else if (type == "Teamleader") {
//			Teamleader ani(name,type);
//			base = &ani;
//			base->salary();
//		}
//		else if (type == "Manager") {
//			Manager ani(name,type);
//			base = &ani;
//			base->salary();
//		}
//		else {
//			Employee none(name,type);
//			cout << "error position." << endl;
//		}
//	}
//}