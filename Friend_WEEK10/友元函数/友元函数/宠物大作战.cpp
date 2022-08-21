//#include<iostream>
//#include<math.h>
//using namespace std;
//
//class Pet;
//void battle(Pet& p1, Pet& p2);
//
//class Pet {
//	string name;
//	int ATK;
//	float xp,yp;
//	double r;
//public:
//	friend void battle(Pet& p1, Pet& p2);
//	Pet() { cin >> name >> xp >> yp >> r >> ATK; }
//};
//void battle(Pet& p1, Pet& p2) {
//
//	float dis = sqrt((p1.xp - p2.xp) * (p1.xp - p2.xp) + (p1.yp - p2.yp) * (p1.yp - p2.yp));
//	double hurt1 = p1.ATK * p1.r / dis;
//	double hurt2 = p2.ATK * p2.r / dis;
//	if (dis > p1.r)
//		hurt1 = 0.0;
//	if (dis > p2.r)
//		hurt2 = 0.0;
//	if (hurt1 > hurt2)
//		cout << p1.name << " wins !" << endl;
//	else if (hurt1 < hurt2)
//		cout << p2.name << " wins !" << endl;
//	else
//		cout << "The two sides drew !" << endl;
//}
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		Pet p1, p2;
//		battle(p1, p2);
//	}
//}