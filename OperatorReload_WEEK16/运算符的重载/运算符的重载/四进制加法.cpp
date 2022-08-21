#include<iostream>
#include<math.h>
using namespace std;

class Four {
	int num;
public:
	Four(int f = 0) { num = f; }
	void Set(int f) { num = f; }
	Four operator+(Four& F) {
		int bit = 0, sum, F_sum = 0;
		sum = num + F.num;
		while (sum) {
			sum /= 10; bit++;
		}
		sum = num + F.num;
		for (int i = 0; i < bit + 1; i++)
		{
			if (sum % 10 >= 4) {
				sum = sum / 10 * 10 + sum % 10 + 6;//½øÖÆ×ª»»
			}
			F_sum += sum % 10 * pow(10, i);
			sum /= 10;
		}
		return Four(F_sum);
	}
	void display() {
		cout << num << endl;
	}
};

int main() {
	int t, num;
	cin >> t;
	Four* fours = new Four[t];
	for (int i = 0; i < t; i++)
	{
		cin >> num;
		fours[i].Set(num);
	}
	Four SUM(0);
	for (int i = 0; i < t; i++)
	{
		SUM = SUM + fours[i];
	}
	SUM.display();
}