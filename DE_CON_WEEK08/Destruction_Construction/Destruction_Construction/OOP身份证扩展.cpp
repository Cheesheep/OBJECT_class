//#include<iostream>
//
//using namespace std;
//
//class ID {
//	string id;
//	string newid;
//public:
//	ID() {}
//	ID(string str):id(str) { cout << "construct ID=" << id << endl; }
//	~ID() {}
//	void upgrade();
//};
//void ID::upgrade() {
//	int power[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
//	char Hash[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
//	int loc = 0;
//	while(loc != 6)
//		newid += id[loc++];
//	newid += "19";
//	while (loc != 15)
//		newid += id[loc++];
//	int S = 0;
//	for (int i = 0; i < 17; i++)
//	{
//		S += power[i] * (newid[i] - '0');
//	}
//	newid += Hash[S % 11];
//	cout << "upgrade ID=" << newid << endl;
//	cout << "destruct ID=" << newid[14] << newid[15] << newid[16] << newid[17] << endl;
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		string id;
//		cin >> id;
//		ID a(id);
//		a.upgrade();
//	}
//}