//#include<iostream>
//using namespace std;
//class Account {
//	static int count;
//	static float InteresyRate;
//	string _accno, _accname;
//	float _balance;
//public:
//	Account() { count++; }
//	Account(string accno, string name, float balance) { _accno = accno; _accname = name;_balance = balance; }
//	~Account() {};
//	void Deposit(float amount) { _balance += amount; }
//	void Withdraw(float amount) { _balance -= amount; }
//	float GetBalance() { return _balance; }
//	void Show();
//	static int GetCount() { return count; }
//	static float GetInterestRate() { return InteresyRate; }
//	static void IR(float ir) { InteresyRate = ir; }
//	friend void Update(Account& a);
//};
//int Account::count = 0;
//float Account::InteresyRate;
//
//void Account::Show() {
//	cout << _accno << ' ' << _accname << ' ';
//}
//
//void Update(Account& a) {
//	a._balance += a._balance * a.GetInterestRate();
//	cout << a.GetBalance() << ' ';
//}
//int main(){
//	float IR,balance;
//	int t;
//	cin >> IR >> t;
//	Account::IR(IR);
//	Account* accs = new Account[t];
//	string name, no;
//	for (int i = 0; i < t; i++)
//	{
//		cin >> no >> name >> balance;
//		Account a(no, name,balance);
//		accs[i] = a;
//		a.Show();
//		int money;
//		cin >> money;
//		accs[i].Deposit(money);
//		cout << accs[i].GetBalance()<<' ';
//		Update(accs[i]);
//		cin >> money;
//		accs[i].Withdraw(money);
//		cout << accs[i].GetBalance()<<endl;
//	}
//	int sum = 0;
//	for (int i = 0; i < t; i++)
//	{
//		sum += accs[i].GetBalance();
//	}
//	cout << sum << endl;
//}