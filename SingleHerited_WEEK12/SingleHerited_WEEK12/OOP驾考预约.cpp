//#include<iostream>
//
//using namespace std;
//
//class CPerson{
//protected:
//	string name;
//	string phone;
//public:
//	CPerson() {}
//};
//
//class STU :public CPerson {
//protected:
//	int Atime[12];
//public:
//	STU() {}
//	STU(string n, string p) {
//		name = n;phone = p;
//		for (int i = 0; i < 12; i++)
//		{
//			cin >> Atime[i];
//		}
//	}
//	void check() {
//		cout << name;
//		int sum = 0;
//		for (int i = 0; i < 12; i++)
//		{
//			if (Atime[i] >= 60)
//				sum++;
//		}
//		//cout << "��ѧʱ: " << sum << endl;
//		if (sum >= 10)
//			cout << "�ﵽѧʱҪ�����ԤԼ��";
//		else
//			cout << "δ�ﵽѧʱҪ����ԤԼ��";
//		cout << "�绰" << phone << endl;
//	}
//};
//
//class VIP :public STU {
//private:
//	int Btime[12];
//public:
//	VIP(string n, string p) {
//		name = n;phone = p;
//		for (int i = 0; i < 12; i++)
//			cin >> Atime[i];
//		for (int i = 0; i < 12; i++)
//			cin >> Btime[i];
//	}
//	void check() {
//		cout << name;
//		int sum = 0;
//		for (int i = 0; i < 12; i++)
//		{
//			if (Atime[i] >= 60)
//				sum++;
//			if (Btime[i] > 60 && Btime[i] < 120)
//				sum++;
//			else if (Btime[i] >= 120)
//				sum += 2;
//		}
//		//cout << "��ѧʱ: " << sum << endl;
//		if (sum >= 10)
//			cout << "�ﵽѧʱҪ�����ԤԼ��";
//		else
//			cout << "δ�ﵽѧʱҪ����ԤԼ��";
//		cout << "�绰" << phone << endl;
//	}
//};
//
//int main() {
//	int t;
//	char type;
//	string name, phone;
//	cin >> t;
//	while (t--) {
//		cin >> type >> name >> phone;
//		if (type == 'F') {
//			STU stu(name, phone);
//			stu.check();
//		}
//		else  {
//			VIP stu(name, phone);
//			stu.check();
//		}
//	}
//}