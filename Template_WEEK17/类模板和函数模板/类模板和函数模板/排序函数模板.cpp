#include<iostream>
#include<iomanip>
using namespace std;

class Point {
	float x, y;
public:
	Point() { }
	Point(float x, float y) { this->x = x; this->y = y; }
	bool operator >(Point& _p) {
		if (x * x + y * y > _p.x * _p.x + _p.y * _p.y)
			return 1;
		else
			return 0;
	}
	friend ostream& operator<<(ostream& out, Point& p) {
		out << '(' << fixed << setprecision(1) << p.x << ',' << ' ' << p.y << ')';
		return out;
	}
};

template<class T>
void Sort(T* arr, int num) {
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - i - 1; j++)
		{
			T temp;
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	//print
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

int main() {
	int t, num;
	char type;
	cin >> t;
	while (t--) {
		cin >> type >> num;
		if (type == 'I') {
			int* arr = new int[num];
			for (int i = 0; i < num; i++)
				cin >> arr[i];
			Sort(arr, num);
		}
		else if (type == 'D') {
			double* arr = new double[num];
			for (int i = 0; i < num; i++)
				cin >> arr[i];
			Sort(arr, num);
		}
		else if (type == 'S') {
			string* arr = new string[num];
			for (int i = 0; i < num; i++)
				cin >> arr[i];
			Sort(arr, num);
		}
		else if (type == 'P') {
			Point* arr = new Point[num];
			float _x, _y;
			for (int i = 0; i < num; i++)
			{
				cin >> _x >> _y;
				Point te(_x, _y);
				arr[i] = te;
			}
			Sort(arr, num);
		}
	}
}