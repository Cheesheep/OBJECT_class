#include<iostream>
using namespace std;

class Vehicle{
protected:
	int max_speed;
	int speed;
	int weight;
public:
	Vehicle() {}
	Vehicle(int m,int s,int w):max_speed(m),speed(s),weight(w) {}
	void display() {
		cout << "Vehicle:" << endl;
		Vp();
		cout << endl;
	}
	void Vp() {
		cout << "max_speed:" << max_speed << endl
			<< "speed:" << speed << endl
			<< "weight:" << weight << endl;
	}
};

class CBicycle :virtual public Vehicle{
protected:
	int height;
public:
	CBicycle(Vehicle v,int h):Vehicle(v),height(h) {}
	void display() {
		cout << "Bicycle:" << endl;
		Vp();
		Bp();
		cout << endl;
	}
	void Bp() {
		cout << "height:" << height << endl;

	}
};

class CMotorcar :virtual public Vehicle {
protected:
	int seat_num;
public:
	CMotorcar(Vehicle v,int s):seat_num(s),Vehicle(v) {}
	void display() {
		cout << "Motocar:" << endl;
		Vp();
		Mp();
		cout << endl;
	}
	void Mp() {
		cout << "seat_num:" << seat_num << endl;
	}
};

class CMotorcycle : public CBicycle, public CMotorcar {
public:
	CMotorcycle(Vehicle v,CMotorcar m,CBicycle b):Vehicle(v),CMotorcar(m),CBicycle(b) {
	}
	void display() {
		cout << "Motocycle:" << endl;
		Vp();
		Bp();
		Mp();
	}
};

int main() {
	int mspe, speed, wei, height, seat;
	cin >> mspe >> speed >> wei;
	cin >> height >> seat;
	Vehicle base(mspe,speed,wei);
	base.display();
	CBicycle bic(base,height);
	bic.display();
	CMotorcar moc(base, seat);
	moc.display();
	CMotorcycle mc(base, moc, bic);
	mc.display();

	return 0;
}
