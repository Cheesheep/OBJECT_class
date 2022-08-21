//#include<iostream>
//#include<string>
//using namespace std;
//
//class audio{
//	int type;
//	string name;
//	int price;
//	bool state;
//	void print();
//public:
//	audio() { cin >> type >> name >> price >> state; }
//	void search();
//
//};
//void audio::print() {
//	switch (type) {
//	case 1:cout << "黑胶片";break;
//	case 2:cout << "CD";break;
//	case 3:cout << "VCD";break;
//	case 4:cout << "DVD";break;
//	}
//	cout << '[' << name << ']';
//	if (state)
//		cout << "已出租" << endl;
//	else
//		cout << "未出租" << endl;
//}
//void audio::search() {
//	int m;
//	cin >> m;
//	print();
//	if (m) {
//		if (state)
//			cout << "当前租金为" << m * price << endl;
//		else
//			cout << "未产生租金" << endl;
//	}
//}
//
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		audio a;
//		a.search();
//	}
//}