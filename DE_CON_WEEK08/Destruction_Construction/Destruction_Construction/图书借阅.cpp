//#include<iostream>
//using namespace std;
//class Cbook {
//public:
//	string Index;
//	string Name;
//	int sum;//馆藏总量
//	int val;//可借书数量
//	Cbook() { cin >> Index >> Name >> sum >> val; }
//};
//
//int main() {
//	int t;
//	cin >> t;
//	Cbook* book = new Cbook[t];
//	int bnum;
//	cin >> bnum;
//	for (int i = 0; i < bnum; i++)
//	{
//		string Bo;
//		cin >> Bo;
//		for (int j = 0; j < t; j++)
//		{
//			if (Bo == book[j].Name) {
//				cout << Bo << ' ';
//				if (book[j].val == 0)
//					cout << "该书已全部借出" << endl;
//				else {
//					book[j].val--;
//					cout << "索取号: " << book[j].Index << endl;
//				}
//				break;
//			}
//		}
//	}
//	cout << endl;
//	int sum0, sum1;
//	sum0 = sum1 = 0;
//	for (int i = 0; i < t; i++)
//	{
//		cout << book[i].Index << ' ' << book[i].Name << ' ' << book[i].sum << ' ' << book[i].val << endl;
//		sum0 += book[i].sum;
//		sum1 += book[i].val;
//	}
//	cout << "借出图书: " << sum0 - sum1 << "本  剩余馆藏图书: " << sum1 <<"本" ;
//}