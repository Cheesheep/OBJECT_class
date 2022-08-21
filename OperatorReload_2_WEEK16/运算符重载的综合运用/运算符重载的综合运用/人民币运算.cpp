//#include <iostream>
//using namespace std;
//
//class RMB;
//ostream& operator <<(ostream&, RMB&);
//istream& operator >>(istream&, RMB&);
//
//class RMB {
//protected:
//	int yuan, jiao, fen;
//public:
//	RMB(double);
//	RMB(int, int, int);
//	bool operator > (RMB&);
//	friend ostream& operator <<(ostream&, RMB&); //一行输出，无换行
//	friend istream& operator >>(istream&, RMB&);
//	friend RMB operator +(RMB&, RMB&);
//};
////完成以下类定义的填空
//
//RMB::RMB(double money = 0)
//{
//	money += 0.005;//弥补精度
//	money *= 100;
//	yuan = (int)money / 100;
//	jiao = (int)money % 100 / 10;//取十位数
//	fen = (int)money % 10;//取个位数
//}
//RMB::RMB(int y, int j, int f) :yuan(y), jiao(j), fen(f) {}
//
//bool RMB:: operator > (RMB& rmb)
//{
//	if (yuan > rmb.yuan || yuan == rmb.yuan && jiao > rmb.jiao
//		|| yuan == rmb.yuan && fen > rmb.fen && jiao == rmb.jiao)
//		return 1;
//	else
//		return 0;
//}
//RMB operator +(RMB& a, RMB& b)
//{
//	int y,f,j;
//	j = a.jiao + b.jiao;
//	f = a.fen + b.fen;
//	y = a.yuan + b.yuan;
//	if (f > 9) {
//		f %= 10;
//		j++;
//	}
//	if (j > 9) {
//		j %= 10;
//		y++;
//	}
//	return RMB(y, j, f);
//}
//
//istream& operator >>(istream& in, RMB& rmb)
//{
//	in >> rmb.yuan >> rmb.jiao >> rmb.fen;
//	return in;
//}
//ostream& operator <<(ostream& out, RMB& rmb)
//{
//	out << rmb.yuan << "元" << rmb.jiao << "角" << rmb.fen << "分";
//	return out;
//}
//
////主函数
//int main()
//{
//	int t;
//	double val_yuan;
//	cin >> t;
//	while (t--)
//	{
//		cin >> val_yuan;	//输入一个浮点数，例如1.23 
//		RMB r1(val_yuan); //例如上一行输入1.23，则生成对象r1是1元2角3分 
//		RMB r2;
//		cin >> r2;	//输入一行三个整数参数，按元、角、分输入 
//
//		if (r1 > r2) 		cout << r1 << " > " << r2 << endl;
//		else 			cout << r1 << " <= " << r2 << endl;
//		RMB r3 = r1 + r2;
//		cout << r1 << " + " << r2 << " = " << r3 << endl;
//	}
//	return 0;
//}
