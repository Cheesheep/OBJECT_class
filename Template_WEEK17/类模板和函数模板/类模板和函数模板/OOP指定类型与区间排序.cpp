//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//class Point {
//	float x, y;
//public:
//	Point() { }
//	Point(float x, float y) { this->x = x; this->y = y; }
//	bool operator >(Point& _p) {
//		if (x * x + y * y > _p.x * _p.x + _p.y * _p.y)
//			return 1;
//		else
//			return 0;
//	}
//	friend ostream& operator<<(ostream& out, Point& p) {
//		out << '(' << fixed << setprecision(1) << p.x << ',' << ' ' << p.y << ')';
//		return out;
//	}
//};
//
//template<class T>
//void Sort(T* arr, int num) {
//
//	char cc;
//	int beg, end;
//	cin >> cc >> beg >> cc >> end >> cc >> cc;
//	beg = (beg < 0) ? 0 : beg;
//	end = (end > num) ? num : end;
//	for (int i = 0; i < num; i++)
//		cin >> arr[i];
//	if (beg <= end)
//		for (int i = 0; i < end - 1; i++)
//		{
//			for (int j = beg; j < end - i - 1; j++)
//			{
//				T temp;
//				if (arr[j] > arr[j + 1])
//				{
//					temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//			}
//		}
//	//print
//	cout << '[';
//	for (int i = 0; i < num - 1; i++)
//	{
//		cout << fixed << setprecision(1) << arr[i] << ", ";
//	}
//	cout << arr[num - 1] << ']' << endl;
//}
//
//int main() {
//	int t, num;
//	string type;
//	cin >> t;
//	while (t--) {
//		cin >> type >> num;
//		if (type == "int") {
//			int* arr = new int[num];
//			Sort(arr, num);
//		}
//		else if (type == "string") {
//			string* arr = new string[num];
//			Sort(arr, num);
//		}
//		else if (type == "float") {
//			float* arr = new float[num];
//			Sort(arr, num);
//		}
//	}
//}