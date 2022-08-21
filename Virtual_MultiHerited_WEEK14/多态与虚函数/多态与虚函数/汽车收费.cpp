//#include<iostream>
//using namespace std;
//
//
//class Vehicle
//
//{
//protected:
//
//	string no;//编号
//
//public:
//	Vehicle() {}
//	virtual void display() = 0;//应收费用
//
//};
//
//class Car :public Vehicle {
//	int load,weight;
//public:
//	Car() { cin >> no >> load >> weight; }
//	virtual void display() {
//		cout << no << ' ' << 8 * load + 2 * weight << endl;
//	}
//};
//class Truck :public Vehicle {
//	int weight;
//public:
//	Truck() { cin >> no >> weight; }
//	virtual void display() {
//		cout << no << ' ' << 5 * weight << endl;
//	}
//};class Bus :public Vehicle {
//	int load;
//public:
//	Bus() { cin >> no >> load; }
//	virtual void display() {
//		cout << no << ' ' << 3 * load<<endl;
//	}
//};
//
//int main() {
//	int t;
//	cin >> t;
//	Vehicle* base;
//	while (t--) {
//		int ty;
//		cin >> ty;
//		if (ty == 1) {
//			Car derive;
//			base = &derive;
//			base->display();
//		}else	if (ty == 2) {
//			Truck derive;
//			base = &derive;
//			base->display();
//		}else	if (ty == 3) {
//			Bus derive;
//			base = &derive;
//			base->display();
//		}
//	}
//}