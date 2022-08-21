#include<iostream>
using namespace std;
struct Srect {
	int x1, y1, x2, y2;
};

bool isoverlap(const Srect &rect1,const Srect &rect2) {
	bool Xlap = false;
	bool Ylap = false;
	if(rect1.x1 < rect2.x1 && rect1.x1 < rect2.x2 && rect1.x2 < rect2.x1 && rect1.x2 < rect2.x2  || rect1.x1 > rect2.x1 && rect1.x1 > rect2.x2 && rect1.x2 > rect2.x1 && rect1.x2 > rect2.x2)
		Xlap = true;
	if (rect1.y1 < rect2.y1 && rect1.y1 < rect2.y2 && rect1.y2 < rect2.y1 && rect1.y2 < rect2.y2 || rect1.y1 > rect2.y1 && rect1.y1 > rect2.y2 && rect1.y2 > rect2.y1 && rect1.y2 > rect2.y2)
		Ylap = true;
	if (Xlap || Ylap)
		return 0; //²»ÖØµþ
	else
		return 1; //ÖØµþ
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Srect r1, r2;
		cin >> r1.x1 >> r1.y1 >> r1.x2 >> r1.y2 >> r2.x1 >> r2.y1 >> r2.x2 >>r2.y2;
		if (isoverlap(r1,r2))
			cout << "overlapped" << endl;
		else
			cout << "not overlapped" << endl;
	}
}