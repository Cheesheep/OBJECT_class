//#include<iostream>
//using namespace std;
//class Vector {
//	int vec[10];
//	public:
//		Vector() {}
//		Vector(int v[10]) {
//			for (int i = 0; i < 10; i++)
//			{
//				vec[i] = v[i];
//			}
//		}
//
//		Vector operator+(Vector& v) {
//			Vector out;
//			for (int i = 0; i < 10; i++)
//			{
//				out.vec[i] = vec[i] + v.vec[i];
//			}
//			return out;
//		}
//		Vector operator-(Vector& v) {
//			Vector out;
//			for (int i = 0; i < 10; i++)
//			{
//				out.vec[i] = vec[i] - v.vec[i];
//			}
//			return out;
//		}
//		friend ostream& operator<<(ostream& out, Vector& v) {
//			for (int i = 0; i < 9; i++)
//				out << v.vec[i]<<' ';
//			out << v.vec[9];
//			return out;
//		}
//};
//
//int main() {
//	int a[10];
//	int b[10];
//	for (int i = 0; i < 10; i++)
//		cin >> a[i];
//	for (int i = 0; i < 10; i++)
//		cin >> b[i];
//	Vector A(a),B(b);
//	Vector C;
//	C = A + B;
//	cout << C << endl;
//	C = A - B;
//	cout << C << endl;
//}