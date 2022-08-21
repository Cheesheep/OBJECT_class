//#include<iostream>
//
//using namespace std;
//void find(int* num0, int n, int& minIndex, int& maxIndex) {
//	int* num = new int[n];
//	for (int i = 0; i < n; i++)
//		num[i] = num0[i];
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (num[j] > num[j + 1]) {
//				int temp;
//				temp = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = temp;
//			}
//		}
//	}
//	int max = num[n - 1];
//	int min = num[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (num0[i] == max) {
//			maxIndex = i;
//			break;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (num0[i] == min) {
//			minIndex = i;
//			break;
//		}
//	}
//	printf("min=%d minindex=%d\nmax=%d maxindex=%d\n", min, minIndex, max, maxIndex);
//	cout << endl;
//}
//
//int main() {
//	int t, n;
//	cin >> t;
//	while (t--) {
//		cin >> n;
//		int* num = new int[n];
//		int maxI, minI;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> num[i];
//		}
//		find(num, n, minI, maxI);
//	}
//	return 0;
//}