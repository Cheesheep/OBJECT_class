//#include<iostream>
//#include<cstring>
//using namespace std;
//
//class Cpeople {
//protected:
//	char id[20];
//	char name[10];
//public:
//	Cpeople() {}
//	Cpeople(char *n, char *i) {
//		strcpy(name, n);
//		strcpy(id, i);
//	}
//};
//
//class CInternetUser : public Cpeople {
//protected:
//	char password[20];
//public:
//	void registerUser(char *_name,char *_id,char *pass){
//		strcpy(name, _name);
//		strcpy(id, _id);
//		strcpy(password, pass);
//	}
//};
//class CBankCustomer :  public Cpeople {
//protected:
//	double balance;
//public:
//	CBankCustomer() {}
//	void openAccount(char *_name,char *_id){
//		strcpy(name, _name);
//		strcpy(id, _id);
//		balance = 0;
//	}
//	void deposit(int money) {
//			balance += money;
//	}
//	bool withdraw(double money) {
//		if (balance < money)
//			return 0;
//		else {
//			balance -= money;
//			return 1;
//		}
//	}
//};
//
//class CInternetBankCustomer :public CInternetUser, public CBankCustomer {
//	double balance;
//	double Last_bal, profit, To_interest, Last_interest;
//public:
//	CInternetBankCustomer(){
//		balance = Last_bal = profit = To_interest = Last_interest = 0.0;
//	}
//	bool deposit(double money) {
//		if (CBankCustomer::balance < money)
//			return 0;
//		else {
//			balance += money;
//			CBankCustomer::balance -= money;
//			return 1;
//		}
//	}
//	bool withdraw(double money) {
//		if (balance < money)
//			return 0;
//		else {
//			CBankCustomer::balance += money;
//			balance -= money;
//			return 1;
//		}
//	}
//	bool login(char* _id, char* pass) {
//		if (strcmp(CInternetUser::id, _id) == 0 && 
//			strcmp(CInternetUser::password, pass) == 0 &&
//			strcmp(CInternetUser::id, CBankCustomer::id)==0 &&
//			strcmp(CInternetUser::name, CBankCustomer::name) == 0)
//			return 1;
//		else
//			return 0;
//	}
//	void setInterest(double interest) {
//		Last_interest = To_interest;
//		To_interest = interest;
//	}
//	void calculateProfit() {
//		profit = Last_bal * Last_interest / 10000.0;
//		balance += profit;
//		Last_bal = balance;
//	}
//	void print() {
//		cout << "Name: " << CBankCustomer::name << " ID: " << CBankCustomer::id << endl;
//		cout << "Bank balance: " << CBankCustomer::balance << endl;
//		cout << "Internet bank balance: " << balance << endl;
//	}
//};
//
//int main()
//{
//	int t, no_of_days, i;
//	char i_xm[20], i_id[20], i_mm[20], b_xm[20], b_id[20], ib_id[20], ib_mm[20];
//	double money, interest;
//	char op_code;
//
//	//������԰�����t
//	cin >> t;
//	while (t--)
//	{
//		//���뻥�����û�ע��ʱ���û���,id,��½����
//		cin >> i_xm >> i_id >> i_mm;
//
//		//�������п����û���,id
//		cin >> b_xm >> b_id;
//
//		//���뻥�����û���½ʱ��id,��½����
//		cin >> ib_id >> ib_mm;
//
//		CInternetBankCustomer ib_user;
//
//		ib_user.registerUser(i_xm, i_id, i_mm);
//		ib_user.openAccount(b_xm, b_id);
//
//		if (ib_user.login(ib_id, ib_mm) == 0)  //�������û���½,��id�����벻��;�Լ����п���������id�뻥��������������id��ͬ
//		{
//			cout << "Password or ID incorrect" << endl;
//			continue;
//		}
//
//		//��������
//		cin >> no_of_days;
//		for (i = 0; i < no_of_days; i++)
//		{
//			//�����������, ���, ������Ԫ����
//			cin >> op_code >> money >> interest;
//			switch (op_code)
//			{
//			case 'S':  //�����������������ʻ�����
//			case 's':
//				if (ib_user.deposit(money) == 0)
//				{
//					cout << "Bank balance not enough" << endl;
//					continue;
//				}
//				break;
//			case 'T':  //�ӻ���������ת�������ʻ�
//			case 't':
//				if (ib_user.withdraw(money) == 0)
//				{
//					cout << "Internet bank balance not enough" << endl;
//					continue;
//				}
//				break;
//			case 'D':  //ֱ���������ʻ����
//			case 'd':
//				ib_user.CBankCustomer::deposit(money);
//				break;
//			case 'W':  //ֱ�Ӵ������ʻ�ȡ��
//			case 'w':
//				if (ib_user.CBankCustomer::withdraw(money) == 0)
//				{
//					cout << "Bank balance not enough" << endl;
//					continue;
//				}
//				break;
//			default:
//				cout << "Illegal input" << endl;
//				continue;
//			}
//			ib_user.setInterest(interest);
//			ib_user.calculateProfit();
//			//����û���,id
//			//����������
//			//��������������˻����
//			ib_user.print();
//			cout << endl;
//		}
//		
//	}
//}