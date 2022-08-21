#include<iostream>
using namespace std;

struct Stu {
	char name[40];
	int age;
	float score;
};
void swap(Stu& a, Stu& b) {
	Stu temp = b;
	b = a;
	a = temp;
}
int main() {
	int n;
	cin >> n;
	Stu* stu = new Stu[n];
	for (int i = 0; i < n; i++)
		cin >> stu[i].name >> stu[i].age >> stu[i].score;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (stu[j].score > stu[j + 1].score)
				swap(stu[j], stu[j + 1]);
			else if (stu[j].score == stu[j + 1].score) {
				if (stu[j].name > stu[j + 1].name)//¶Ô±ÈÊ××ÖÄ¸
					swap(stu[j], stu[j + 1]);
				else if (stu[j].name == stu[j + 1].name)
					if (stu[j].age > stu[j + 1].age)
						swap(stu[j], stu[j + 1]);
			}

		}

	}
	for (int i = 0; i < n; i++)
	{
		cout << stu[i].name <<' '<< stu[i].age << ' ' << stu[i].score << endl;
	}
}