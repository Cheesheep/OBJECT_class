//#include <iostream>
//#include<algorithm>
//#include<string.h>
//using namespace std;
//
//struct poke {
//public:	 char card[10];
//	int rank;//大小等级
//	
//};
//
//int getvalue(char str[]) {
//    int quan;
//    if (strstr(str, "黑桃")) {
//        quan = 4;
//    }
//    if (strstr(str, "红桃")) {
//        quan = 3;
//    }
//    if (strstr(str, "梅花")) {
//        quan = 2;
//    }
//    if (strstr(str, "方块")) {
//        quan = 1;
//    }
//    int wei;
//    if (strstr(str, "a")) {
//        wei = 14;
//    }
//    if (strstr(str, "k")) {
//        wei = 13;
//    }
//    if (strstr(str, "q")) {
//        wei = 12;
//    }
//    if (strstr(str, "j")) {
//        wei = 11;
//    }
//    if (strstr(str, "10")) {
//        wei = 10;
//    }
//    if (strstr(str, "9")) {
//        wei = 9;
//    }
//    if (strstr(str, "8")) {
//        wei = 8;
//    }
//    if (strstr(str, "7")) {
//        wei = 7;
//    }
//    if (strstr(str, "6")) {
//        wei = 6;
//    }
//    if (strstr(str, "5")) {
//        wei = 5;
//    }
//    if (strstr(str, "4")) {
//        wei = 4;
//    }
//    if (strstr(str, "3")) {
//        wei = 3;
//    }
//    if (strstr(str, "2")) {
//        wei = 2;
//    }
//        cout<<"输出"<<(quan+(wei-1)*4)<<endl;
//    return (quan * 14 + wei);
//}
//
//
//void swap(poke &a, poke &b) {
//    poke temp = b;
//    b = a;
//    a = temp;
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//		poke* poke = new poke[n];
//		for (int i = 0; i < n; i++)
//		{	
//			cin >> poke[i].card;
//            if (strstr(poke[i].card,"大王"))
//                poke[i].rank = 101;
//            else if (strstr(poke[i].card, "小王"))
//                poke[i].rank = 100;
//            else
//                poke[i].rank = getvalue(poke[i].card);
//		}
//        for (int i = 0; i < n - 1; i++)
//	    {
//		    for (int j = 0; j < n - i - 1; j++)
//		    {
//                if (poke[j].rank < poke[j + 1].rank)
//                {
//                    swap(poke[j], poke[j + 1]);
//                }
//                    
//			}
//
//		}
//        for (int i = 0; i < n-1; i++)
//        {
//            cout << poke[i].card << ' ';
//        }
//        cout <<poke[n - 1].card<< endl;
//
//	}
//}