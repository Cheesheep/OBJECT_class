//#include<iostream>
//
//using namespace std;
//
//class CAccount {
//protected:
//	long account;
//	char name[10];
//	float balance;
//public:
//	CAccount() {}
//	CAccount(long acc,char na[],float bal) {
//		account = acc;
//		int i = 0;
//		while (na[i] != '\0') {
//			name[i] = na[i];
//			i++;
//		}
//		name[i] = '\0';
//		balance = bal;
//	}
//	void deposit(int de) {
//		balance += de;
//
//		cout << "saving ok!" << endl;
//		check();
//	}
//	void withdraw(int wi) {
//		if (balance >= wi) {
//			balance -= wi;
//			cout << "withdraw ok!" << endl;
//		}
//		else {
//			cout << "sorry! over balance!" << endl;
//		}
//		check();
//	}
//	void check() { cout << "balance is " << balance << endl; }
//
//};
//
//
//class CCreditcard :public CAccount {
//protected:
//	float limit; //Í¸Ö§ÏÞ¶î
//public:
//	CCreditcard(long acc, char na[], float bal,float lim) {
//		account = acc;
//		int i = 0;
//		while (na[i] != '\0') {
//			name[i] = na[i];
//			i++;
//		}
//		name[i] = '\0';
//		balance = bal;
//		limit = lim;
//	}
//	void withdraw(int wi) {
//		if (balance + limit >= wi) {
//			balance -= wi;
//			cout << "withdraw ok!" << endl;
//		}
//		else {
//			cout << "sorry! over limit!" << endl;
//		}
//		check();
//	}
//};
//
//int main() {
//	long acc;
//	float bal,de,wi;
//	char na[10];
//	float lim;
//
//	cin >> acc >> na >> bal;
//	CAccount ca(acc,na,bal);
//	cin >> de;
//	ca.check();
//	ca.deposit(de);
//	cin >> wi;
//	ca.withdraw(wi);
//
//	cin >> acc >> na >> bal>>lim;
//	CCreditcard cr (acc, na, bal,lim);
//	cin >> de;
//	cr.check();
//	cr.deposit(de);
//	cin >> wi;
//	cr.withdraw(wi);
//
//}