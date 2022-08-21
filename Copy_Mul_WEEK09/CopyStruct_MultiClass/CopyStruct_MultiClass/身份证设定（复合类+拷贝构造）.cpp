//#include<iostream>
//using namespace std;
//
//class Date {
//	int year;
//	int mon;
//	int day;
//public:
//	Date() {};
//	friend class PID;
//};
//
//class PID {
//	Date da;
//	int type;
//	string ID;
//public:
//	PID() ;
//	PID(int t, string ID);
//	PID(PID& p);
//	void Print();
//};
//
//PID::PID(int t, string ID) {
//	type = t;
//	this->ID = ID;
//	cin >> da.year >> da.mon >> da.day;
//} 
//
//PID::PID(PID &p) {
//	int sum = 0;
//	type = p.type;
//	this->da = p.da;
//	for (int i = 0; i < 6; i++)
//	{
//		ID += p.ID[i];
//		sum += p.ID[i] - '0';
//	}
//	if (da.year <= 1999) {
//		ID += "19";
//		sum += 10;
//	}
//	else {
//		ID += "20";
//		sum += 2;
//	}
//	for (int i = 6; i < 15; i++)
//	{
//		ID += p.ID[i];
//		sum += p.ID[i] - '0';
//	}
//	if (sum < 100)//Îª2Î»Êý
//		sum %= 10;
//	else {
//		sum %= 100;
//		sum %= 10;
//	}
//	if (!sum)
//		sum = 'X' - '0';
//	ID += sum + '0';
//}
//void PID::Print() {
//	cout << "type=" << 2 << " birth=";
//	printf("%d.%02d.%02d\n", da.year, da.mon, da.day);
//	cout << "ID=" << ID << endl;
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int type;
//		string id;
//		cin >> type >> id ;
//		PID mypid(type, id);
//		if (type == 1) {
//			PID newpid(mypid);
//			newpid.Print();
//		}
//		else
//			mypid.Print();
//
//	}
//}