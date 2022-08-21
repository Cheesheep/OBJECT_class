//#include<iostream>
//using namespace std;
//
//class TripVIP {
//protected:
//	int VIP;
//	int Tscore;
//public:
//	TripVIP() {}
//	TripVIP(int vip):VIP(vip),Tscore(0) {}
//};
//
//class Credit {
//protected:
//	int ID;
//	string name;
//	float balance;
//	int Cscore;
//	int max;
//public:
//	Credit() {}
//	Credit(int id,int ma ,string name):balance(0),Cscore(0) {
//		ID = id;
//		max = ma;
//		this->name = name;
//	}
//	void consume(float mon) {
//		if (mon + balance <= max) {
//			Cscore += (int)mon;
//			balance += mon;
//		}
//	}
//	void refund(float mon) { Cscore -= (int)mon; balance -= mon; }
//};
//
//class TripCredit :public Credit,public TripVIP{
//public:
//	TripCredit(int vip,int id,string name,int max):
//		Credit(id, max, name),TripVIP(vip) {
//	}
//	void Switch(int m) {
//		if (Cscore - m >= 0) {
//			Cscore -= m;
//			Tscore += m / 2;
//		}
//	}
//	void online(float m) {
//		consume(m);
//		Tscore += (int)m;
//	}
//	void display() {
//		cout << VIP << ' ' << Tscore << endl;
//		cout << ID << ' ' << name << ' ' << balance<<' ' << Cscore << endl;
//	}
//};
//
//int main() {
//	string name;
//	int max, ID, VIP;
//	int t;
//	cin >> VIP >> ID >> name >> max;
//	cin >> t;
//	TripCredit custom(VIP,ID,name,max);
//	while (t--) {
//		char ope;
//		float mon;
//		cin >> ope >> mon;
//		switch (ope)
//		{
//		
//		case 'o':custom.online(mon); break;
//		case 'c':custom.consume(mon); break;
//		case 'q':custom.refund(mon); break;
//		case 't':custom.Switch(mon); break;
//		}
//	}
//	custom.display();
//}
//
