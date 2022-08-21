//#include<iostream>
//using namespace std;
//
//class Base {
//private:
//	int pri_base_data;
//protected:
//	int pro_base_data;
//public:
//	int pu_base_data;
//	Base() { }
//	Base(int t) {}
//	void display() {
//		cout << "base data is " << pri_base_data << endl;
//	}
//
//};
//
//
//class De_Base :private  Base {
//public:
//	De_Base() { pu_base_data = 5;pro_base_data = 4; }
//	void display() {
//		cout << "public base data is :" << pu_base_data << endl;
//		cout << "protect base data is :" << pro_base_data << endl;
//	}
//};
//
//class De_De_Base : De_Base {
//public:
//	void display() {
//		pu_base_data = 0;
//	}
//};
//
//int main() {
//	De_Base test;
//	test.display();
//	//test.pu_base_data = 6;
//	test.display();
//}