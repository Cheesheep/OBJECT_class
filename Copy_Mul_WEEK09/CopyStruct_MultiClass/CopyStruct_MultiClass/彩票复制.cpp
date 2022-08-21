#include<iostream>
using namespace std;
class lottery {
	int group1[6];
	int num;
	int** groupn;
public:
	lottery();
	lottery(int group1[6], int num);
	lottery(lottery& L);
	void Print();
};
lottery::lottery(int g[6], int num) {
	this->num = num;
	for (int i = 0; i < 5; i++)
	{
		group1[i] = g[i];
		cout << group1[i] << ' ';
	}
	group1[5] = g[5];
	cout <<group1[5]<< endl;
}

lottery::lottery(lottery& L) {
//初始化复制首张彩票内容
	for (int i = 0; i < 6; i++)
		group1[i] = L.group1[i];
	num = L.num;
	groupn = new int*[9];
	for (int i = 0; i < 9; i++)
		groupn[i] = new int[6];
//生成第二张彩票内容
//第0个数组存放group1，接着放其他组号码
	groupn[0] = group1;
	for (int i = 1; i < num + 1; i++)
	{
		groupn[i][0] = groupn[i - 1][5] + 1;
		for (int j = 1; j < 6; j++)
		{
			groupn[i][j] = groupn[i - 1][j - 1] + 1;
		}
	}
}

void lottery::Print() {//打印第二张彩票
	for (int i = 1; i < num + 1; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << groupn[i][j] << ' ';
		}
		cout<<groupn[i][5] << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int g[6];
		for (int i = 0; i < 6; i++)
		{
			cin >> g[i];
		}
		int num;
		cin >> num;
		lottery mylo(g, num);
		lottery selo = mylo;
		selo.Print();
	}
}