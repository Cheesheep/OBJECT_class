//#include<iostream>
//
//using namespace std;
//
//void swap(int* a, int* b) {
//	int t = *a;
//	*a = *b;
//	*b = t;
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int* p1, * p2, * p3;
//		int a, b, c;
//		cin >> a >> b >> c;
//		if (b < c)
//			swap(&b, &c);
//		if (a < b)
//			swap(&a, &b);
//		if (b < c)
//			swap(&b, &c);
//		cout << a << ' ' << b << ' ' << c << ' ' << endl;
//	}
//}