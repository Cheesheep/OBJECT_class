//#include <iostream>
//
//#include <iomanip> //����������ͷ�ļ�
//
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--) {
//		float M;
//		float rate[4] = { 6.2619,6.6744,0.0516,0.8065 };
//		char Type;
//		cin >> Type;
//		cin >> M;
//		float* p;
//		switch (Type)
//		{
//		case 'D':p = rate + 0;break;
//		case 'E':p = rate + 1;break;
//		case 'Y':p = rate + 2;break;
//		case 'H':p = rate + 3;break;
//		default:p = NULL;break;
//		}
//		float RMB = *p * M;
//
//		cout << fixed << setprecision(4) << RMB << endl;  //���С�����4λ
//	}
//}