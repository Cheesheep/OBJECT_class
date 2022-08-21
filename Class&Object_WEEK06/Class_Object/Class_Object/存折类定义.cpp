//#include<iostream>
//#include<string>
//using namespace std;
//
//class  Cus{
//	int count;
//	string name;
//	int balance;
//public:
//	Cus() { cin >> count >> name >> balance; }
//	void deposite();
//	void withdraw();
//	void Print() { cout <<name<< "'s balance is " << balance<<endl; }
//};
//
//void Cus::deposite() {
//	int save;
//	cin >> save;
//	balance += save;
//	cout << "saving ok!" << endl;
//}
//void Cus::withdraw() {
//	int take;
//	cin >> take;
//	if (take > balance)
//		cout << "sorry! over limit!" << endl;
//	else {
//		balance -= take;
//		cout << "withdraw ok!" << endl;
//	}
//}
//
//
//int main() {
//	int t = 2;
//	while (t--) {
//		Cus a;
//		a.Print();
//		a.deposite();
//		a.Print();
//		a.withdraw();
//		a.Print();
//	}
//}