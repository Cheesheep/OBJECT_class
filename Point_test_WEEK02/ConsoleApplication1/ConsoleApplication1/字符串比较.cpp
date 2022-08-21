//#include<iostream>
//
//using namespace std;
//int STRcmp(char*S,char*T) {
//	int snum, tnum;
//	snum = tnum = 0;
//	while (*S != '\0' ) {
//		if (*S > *T)
//			snum++;
//		else if (*S < *T)
//			tnum++;
//		*S++;*T++;
//		if (*S != '\0' && *T == '\0')
//			return 1;
//		if (*T != '\0' && *S == '\0')
//			return -1;
//	}
//	if (snum > tnum)
//		return 1;
//	else if (snum < tnum)
//		return -1;
//	else
//		return 0;
//}
//
//int main() 
//{
//	int t;
//	cin >> t;
//	while (t--) {
//		char* S, * T;
//		S =new char[15];
//		T = new char[15];
//		cin >> S >> T;
//		cout << STRcmp(S, T) << endl;
//	}
//}