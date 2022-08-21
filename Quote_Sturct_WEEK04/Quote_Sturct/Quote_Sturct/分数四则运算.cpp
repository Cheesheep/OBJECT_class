//#include<iostream>
//using namespace std;
//struct fraction {
//	int mol;
//	int dem;
//};
//int getBig(int a, int b) {//获取最大公约数
//	if (a > b)
//		a = a - b;
//	else
//		b = b - a;
//
//	if (a != b)
//		getBig(a, b);
//	else
//	{
//		//printf("最大公约数为%d\n", a);
//		return a;
//	}
//}
//int get_min(int m, int n, int big) {
//	//printf("最小公倍数为%d\n", m * n / big);
//	return m * n / big;
//}
//
//void addFS(fraction f1,fraction f2) {
//	int addMol = f1.mol * f2.dem + f1.dem * f2.mol;
//	int dem = f1.dem * f2.dem;
//	int Big = getBig(addMol, dem);
//	cout << addMol / Big << '/' << dem / Big <<endl;
//}
//void subFS(fraction f1, fraction f2) {
//	int subMol = f1.mol * f2.dem - f1.dem * f2.mol;
//	int s2 = subMol;
//	if (subMol < 0)
//		s2 = -subMol;
//	int dem = f1.dem * f2.dem;
//	int Big = getBig(s2, dem);
//	cout << subMol / Big << '/' << dem / Big <<endl;
//}
//void mulFS(fraction f1, fraction f2) {
//	int mulMol = f1.mol * f2.mol;
//	int dem = f1.dem * f2.dem;
//	int Big = getBig(mulMol, dem);
//	cout << mulMol / Big << '/' << dem / Big << endl;
//}
//void divFS(fraction f1, fraction f2) {
//	int divMol = f1.mol *f2.dem;
//	int dem = f1.dem *  f2.mol;
//	int Big = getBig(divMol, dem);
//	cout << divMol / Big << '/' << dem / Big << endl;
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		fraction f1,f2;
//		char a;
//		cin >> f1.mol >> a >> f1.dem;
//		cin >> f2.mol >>a >>f2.dem;
//		addFS(f1,f2);
//		subFS(f1, f2);
//		mulFS(f1, f2);
//		divFS(f1, f2);
//		cout << endl;
//		
//	}
//	
//
//
//	
//}