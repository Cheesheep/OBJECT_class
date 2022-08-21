//#include<iostream>
//#include<string>
//using namespace std;
//
//class body {
//	string name;
//	float hei;
//	float wei;
//	float waist;
//
//public:
//	body() { cin >> name >> hei >> wei >> waist; }
//	int getBMI();
//	float getFAT();
//	void print();
//};
//
//int body::getBMI() {
//	float BMI = wei / (hei * hei);
//	if (BMI - (int)BMI >= 0.5)
//		BMI += 1.0;
//	return BMI;
//}
//float body::getFAT() {
//	float a = waist * 0.74;
//	float b = wei * 0.082 + 34.89;
//	return (a - b) / wei;
//}
//void body::print() {
//	cout << name << "'s BMI: " << getBMI() << "--BFR: ";
//	printf("%.2f\n", getFAT());
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		body a;
//		a.print();
//	}
//}