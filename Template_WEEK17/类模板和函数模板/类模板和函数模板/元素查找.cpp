//#include<iostream>
//using namespace std;
//
//
//template<class T>
//void input(T* a, int n) {
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//}
//
//template<class T>
//void Find(T* a, T _a, int n) {
//	int sym = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == _a) {
//			sym = i + 1;
//			break;
//		}
//	}
//	cout << sym << endl;
//}
//
//int main() {
//	int t, num;
//	char type;
//	cin >> t;
//	while (t--) {
//		cin >> type >> num;
//		if (type == 'I') {
//			int* a = new int[num];
//			int _a;
//			input(a, num);
//			cin >> _a;
//			Find(a, _a, num);
//		}
//		if (type == 'D') {
//			double* a = new double[num];
//			double _a;
//			input(a, num);
//			cin >> _a;
//			Find(a, _a, num);
//		}
//		if (type == 'C') {
//			char* a = new char[num];
//			char _a;
//			input(a, num);
//			cin >> _a;
//			Find(a, _a, num);
//		}
//		if (type == 'S') {
//			string* a = new string[num];
//			string _a;
//			input(a, num);
//			cin >> _a;
//			Find(a, _a, num);
//		}
//	}
//}