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
//	friend ostream& operator <<(ostream&, RMB&); //һ��������޻���
//	friend istream& operator >>(istream&, RMB&);
//	friend RMB operator +(RMB&, RMB&);
//};
////��������ඨ������
//
//RMB::RMB(double money = 0)
//{
//	money += 0.005;//�ֲ�����
//	money *= 100;
//	yuan = (int)money / 100;
//	jiao = (int)money % 100 / 10;//ȡʮλ��
//	fen = (int)money % 10;//ȡ��λ��
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
//	out << rmb.yuan << "Ԫ" << rmb.jiao << "��" << rmb.fen << "��";
//	return out;
//}
//
////������
//int main()
//{
//	int t;
//	double val_yuan;
//	cin >> t;
//	while (t--)
//	{
//		cin >> val_yuan;	//����һ��������������1.23 
//		RMB r1(val_yuan); //������һ������1.23�������ɶ���r1��1Ԫ2��3�� 
//		RMB r2;
//		cin >> r2;	//����һ������������������Ԫ���ǡ������� 
//
//		if (r1 > r2) 		cout << r1 << " > " << r2 << endl;
//		else 			cout << r1 << " <= " << r2 << endl;
//		RMB r3 = r1 + r2;
//		cout << r1 << " + " << r2 << " = " << r3 << endl;
//	}
//	return 0;
//}
