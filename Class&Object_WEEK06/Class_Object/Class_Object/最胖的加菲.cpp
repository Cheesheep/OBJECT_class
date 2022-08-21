//#include<iostream>
//#include<string>
//using namespace std;
//
//class  Gar{
//public:
//	string name;
//	int wei;
//	Gar() { cin >> name >> wei ; }
//};
//
//void Sort(Gar* cats,int len) {
//	for (int j = 0; j < len - 1; j++)
//	{
//		for (int i = 0; i < len - j - 1; i++)
//		{
//			if (cats[i].wei > cats[i + 1].wei) {
//				Gar temp = cats[i];
//				cats[i] = cats[i + 1];
//				cats[i + 1] = temp;
//			}
//		}
//	}
//};
//
//
//int main() {
//	int t;
//	cin >> t;
//	Gar *cats = new Gar[t];
//	Sort(cats,t);
//	for (int i = 0; i < t; i++)
//	{
//		cout << cats[i].name << ' ';
//	}
//	cout << endl;
//	delete[] cats;
//}