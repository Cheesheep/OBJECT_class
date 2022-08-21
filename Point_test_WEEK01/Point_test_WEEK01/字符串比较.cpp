//#include <iostream>
//
//#include <iomanip> //必须包含这个头文件
//
//using namespace std;
//
//void Compare(char s[],char t[]) {
//	string S, T;
//	S = s; T = t;
//	int result = 0;
//	if (S.length() > T.length())
//		result = 1;
//	else if (S.length() < T.length())
//		result = -1;
//	else {
//		int Snum, Tnum;
//		Snum = Tnum = 0;
//		while (*s != '\0') {
//			if (*s > *t)
//				Snum++;
//			else if(*s < *t)
//				Tnum++;
//			s++;t++;
//		}
//		if (Snum > Tnum)
//			result = 1;
//		else if (Snum < Tnum)
//			result = -1;
//	}
//	cout << result << endl;
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--) {
//		char s[15], t[15];
//		cin >> s >> t;
//		Compare(s,t);
//	}
//}