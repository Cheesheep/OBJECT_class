//#include<iostream>
//using namespace std;
//class Cbook {
//public:
//	string Index;
//	string Name;
//	int sum;//�ݲ�����
//	int val;//�ɽ�������
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
//					cout << "������ȫ�����" << endl;
//				else {
//					book[j].val--;
//					cout << "��ȡ��: " << book[j].Index << endl;
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
//	cout << "���ͼ��: " << sum0 - sum1 << "��  ʣ��ݲ�ͼ��: " << sum1 <<"��" ;
//}