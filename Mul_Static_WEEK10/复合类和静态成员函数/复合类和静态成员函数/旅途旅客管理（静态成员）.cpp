//#include<iostream>
//using namespace std;
//
//class Customer {
//	static int TotalCustNum;
//	static int Rent;
//	static int Year;
//	int CustID;
//	char* CustName;
//public:
//	Customer(char* name);
//	static void changeYear(int r) ;
//	void Display() ;
//
//};
//int Customer::TotalCustNum = 0;
//int Customer::Rent = 0;
//int Customer::Year = 2014;
//
//Customer::Customer(char* name) {
//	CustName = name;
//	TotalCustNum++;
//	CustID = TotalCustNum;
//	Rent += 150;
//}
//void Customer::changeYear(int y) {
//	Year = y;
//}
//
//void Customer::Display() {
//	cout <<CustName<<' ' << Year;
//	printf("%04d ", CustID);
//	cout << TotalCustNum << ' ' << Rent<<endl;
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int year;
//		cin >> year;
//		char name[12];
//		while (1) {
//			cin >> name;
//			if (*name == '0')break;
//			Customer cus(name);
//			Customer::changeYear(year);
//			cus.Display();
//		}
//	}
//}