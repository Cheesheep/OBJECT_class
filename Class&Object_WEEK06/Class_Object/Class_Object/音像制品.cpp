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
//	case 1:cout << "�ڽ�Ƭ";break;
//	case 2:cout << "CD";break;
//	case 3:cout << "VCD";break;
//	case 4:cout << "DVD";break;
//	}
//	cout << '[' << name << ']';
//	if (state)
//		cout << "�ѳ���" << endl;
//	else
//		cout << "δ����" << endl;
//}
//void audio::search() {
//	int m;
//	cin >> m;
//	print();
//	if (m) {
//		if (state)
//			cout << "��ǰ���Ϊ" << m * price << endl;
//		else
//			cout << "δ�������" << endl;
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