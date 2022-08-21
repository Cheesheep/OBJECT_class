//#include<iostream>
//using namespace std;
//
//template <class T>
//void func(T* t, int n) {
//	for (int i = 0; i < n; i++)
//		cin >> t[i];
//}
//
//template<class T>
//void display(T *b,T *a,int n) {
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << b[i];
//	}
//	cout << endl;
//}
//
//
//int main() {
//	int t,num;
//	char type;
//	cin >> t;
//	while (t--) {
//		cin >> type >> num;
//		switch (type)
//		{
//		case 'I':{
//				int* a = new int[num];
//				func(a, num);
//				int* b = new int[num];
//				func(b, num);
//				display(a, b, num);
//				break;}
//		case 'D': {
//			double* c = new double[num];
//			func(c, num);
//			double* d = new double[num];
//			func(d, num);
//			display(c, d, num);
//			break;}
//		case 'C': {
//			char* e = new char[num];
//			func(e, num);
//			char* f = new char[num];
//			func(f, num);
//			display(e, f, num);
//			break;}
//		}
//	}
//}