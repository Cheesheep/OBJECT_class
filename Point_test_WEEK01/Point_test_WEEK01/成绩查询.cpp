//#include<iostream>
//
//using namespace std;
//
//int* getKey(int k, int* length) {
//	int len = 0;
//	int k2 = k;
//	while (k2) {
//		k2 /= 10;
//		len++;
//	}
//	int l = len;
//	*length = len;//密钥长度
//	int* key = new int[len];
//	while (k) {
//		key[--l] = k - (k / 10) * 10;
//		k /= 10;
//	}
//	return key;//返回密钥数组
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		char Text[30];
//		cin >> Text;
//		int k, len = 0;
//		cin >> k;
//		int* key = getKey(k, &len);
//		//初始化完毕
//		char* p = Text;
//		int turn = 0;
//		while (*p != '\0') {
//			char temp = *p++;
//			for (int i = 0; i < key[turn]; i++)
//				if (temp == 'z')
//					temp = 'a';
//				else if (temp == 'Z')
//					temp = 'A';
//				else
//					temp++;
//			if (++turn == len)
//				turn = 0;
//			cout << temp;
//		}
//		cout << endl;
//
//	}
//}