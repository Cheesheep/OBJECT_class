//#include<iostream>
//using namespace std;
//
//class Tele {
//	char* Tnum;
//public:
//	Tele();
//	Tele(string TN);
//	~Tele() {
//		cout << Tnum << endl;
//		delete[]Tnum;
//	}
//};
//Tele::Tele(string TN) {
//	Tnum = new char[9];
//	if (TN[0] <= '4')
//		Tnum[0] = '8';
//	else 
//		Tnum[0] = '2';
//	for (int i = 1; i < 8; i++)
//		Tnum[i] = TN[i - 1];
//	Tnum[8] = '\0';
//}
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		bool judge = true;
//		string Tnum;
//		cin >> Tnum;
//		if (Tnum[0] >= '9' || Tnum[0] <= '1')
//			judge = false;
//		else if (Tnum.length() != 7)
//			judge = false;
//		else 
//		for (int i = 0; i < Tnum.length(); i++)
//			if (Tnum[i] > '9' || Tnum[i] < '0') {
//				judge = false;
//				break;
//			}
//		if (judge)
//			Tele mynum(Tnum);
//		else
//			cout << "Illegal phone number" << endl;
//	}
//}