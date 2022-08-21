//#include <iostream>
//
//using namespace std;
//void IntArr() {
//	int n;
//	cin >> n;
//	int *arr = new int[n];
//	int* tem = arr;
//	for (int i = 0; i < n; i++)
//		cin >> *tem++;
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//		sum += *arr++;
//	cout << sum / n << endl;
//}
//void FloatArr() {
//	int n;
//	cin >> n;
//	float* arr = new float[n];
//	float* tem = arr;
//	for (int i = 0; i < n; i++)
//		cin >> *tem++;
//	float min = 65535;
//	for (int i = 0; i < n; i++)
//		if (min > *arr)
//			min = *arr++;
//	cout << min << endl;
//}
//void CharArr() {
//	int n;
//	cin >> n;
//	char* arr = new char[n];
//	char* tem = arr;
//	for (int i = 0; i < n; i++)
//		cin >> *tem++;
//	char max = *arr++;
//	for (int i = 0; i < n - 1; i++)
//		if (max < *arr)
//			max = *arr++;
//	cout << max << endl;
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		char type;
//		cin >> type;
//		switch (type) {
//		case 'I':IntArr();break;
//		case 'F':FloatArr();break;
//		case 'C':CharArr();break;
//		}
//	}
//}
