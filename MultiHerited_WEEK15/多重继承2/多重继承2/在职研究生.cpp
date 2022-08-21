//#include<iostream>
//using namespace std;
//
//class CPeople {
//protected:
//	string name;
//	char sex;
//	int age;
//public:
//	CPeople(){}
//	CPeople(string n,char s,int a):name(n),sex(s),age(a){}
//	void print() {
//		cout << "People:" << endl;
//		Pprint();
//		cout << endl;
//	}
//	void Pprint() {
//		cout << "Name: " << name << endl
//			<< "Sex: " << sex << endl << "Age: " << age <<endl;
//	}
//};
//
//class CStudent : virtual public CPeople {
//protected:
//	string No;
//	float En_goal;
//public:
//	CStudent(string n,float e,CPeople c):No(n),En_goal(e),CPeople(c){}
//	void print() {
//		cout << "Student:" << endl;
//		Pprint();
//		Sprint();
//		cout << endl;
//	}
//	void Sprint() {
//		cout << "No.: " << No << endl << "Score: " << En_goal << endl;
//	}
//};
//
//
//class CTeacher : virtual public CPeople {
//protected:
//	string Position;
//	string department;
//public:
//	CTeacher(string pos,string dep,CPeople c):Position(pos),department(dep),CPeople(c){}
//	void print() {
//		cout << "Teacher:" << endl;
//		Pprint();
//		Tprint();
//		cout << endl;
//	}
//	void Tprint() {
//		cout << "Position: " << Position << endl << "Department: " << department << endl;
//	}
//};
//
//
//class CGradOnWork : public CTeacher, public CStudent {
//	string direct, tutor;
//public:
//	CGradOnWork(string di, string tu,CPeople p,CStudent s,CTeacher t) :direct(di), tutor(tu),CPeople(p),CStudent(s),CTeacher(t) {}
//	void print() {
//		cout << "GradOnWork:" << endl;
//		Pprint();
//		Sprint();
//		Tprint();
//		cout << "Direction: " << direct << endl << "Tutor: " << tutor << endl;
//		//cout << endl;
//	}
//};
//
//int main() {
//	string name, pos, dep,No,dir,tutor;
//	int age;
//	float En_goal;
//	char sex;
//	cin >> name >> sex >> age >> No >> En_goal;
//	cin >> pos >> dep >> dir >> tutor;
//	CPeople people(name,sex,age);
//	people.print();
//	CStudent stu(No,En_goal,people);
//	stu.print();
//	CTeacher tea(pos, dep, people);
//	tea.print();
//	CGradOnWork me(dir, tutor, people, stu, tea);
//	me.print();
//
//}