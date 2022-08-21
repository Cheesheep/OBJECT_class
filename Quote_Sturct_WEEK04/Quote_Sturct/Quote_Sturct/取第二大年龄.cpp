#include<iostream>
using namespace std;

struct DATE{
	int year;
	int mon;
	int day;
};

void swap(DATE &a,DATE &b) {
	DATE temp;
	temp.day = b.day;
	temp.mon = b.mon;
	temp.year = b.year;
	b = a;
	a= temp;
}


int main() {
	int t;
	cin >> t;
	DATE* birth = new DATE[t];
	for (int i = 0; i < t; i++)
		cin >> birth[i].year >> birth[i].mon>> birth[i].day;
	for (int i = 0; i < t - 1; i++)
	{
		for (int j = 0; j < t - i - 1; j++)
		{
			if (birth[j].year > birth[j + 1].year)
				swap(birth[j], birth[j + 1]);
			else if (birth[j].year == birth[j + 1].year) {
				if (birth[j].mon > birth[j + 1].mon)
					swap(birth[j], birth[j + 1]);
				else if (birth[j].mon == birth[j + 1].mon)
					if (birth[j].day > birth[j + 1].day)
						swap(birth[j], birth[j + 1]);	
			}

		}
	}
	int sc = 1;
	cout << birth[sc].year <<'-' << birth[sc].mon<< '-' << birth[sc].day << endl;
}