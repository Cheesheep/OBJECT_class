#include<iostream>
using namespace std;

class CCOW {
	static int cnum, y1, y2, y3, y4;
public:
	CCOW(){}
	void add() { cnum++; }
	static void init() {
		cnum = 1;
		y1 = y2 = y3 = y4 = 0;
	}
	static void initY4() { y4 = 1; }
	static void update() {
		y4 += y3;
		y3 = y2;
		y2 = y1;
		y1 = y4;
	}
	static int getY4() { return y4; }
	static int getSum() { return cnum; }
};

int CCOW::cnum = 1;
int CCOW::y1 = 0;
int CCOW::y2 = 0;
int CCOW::y3 = 0;
int CCOW::y4 = 0;

int main() {
	int t;
	cin >> t;
	while (t--) {
		CCOW::init();
		int year;
		cin >> year;
		if (year < 4)
			cout << 1 << endl;
		else {
			for (int i = 4; i <= year; i++)
			{	if(i == 4)
					CCOW::initY4();
				CCOW::update();
				CCOW *cows = new CCOW[CCOW::getY4()];
				for (int j = 0; j < CCOW::getY4(); j++)
					cows[j].add();
			}
			cout << CCOW::getSum() << endl;
		}
	}
}