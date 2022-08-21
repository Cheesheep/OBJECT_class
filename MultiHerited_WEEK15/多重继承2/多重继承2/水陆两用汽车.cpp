//#include<iostream>
//using namespace std;
//class Vehicle {
//protected:
//	int weight;
//public:
//	Vehicle() {}
//	Vehicle(int w):weight(w) { cout << "载入Vehicle类构造函数" << endl; }
//	void setWeight(int w) { weight = w; cout << "重新设置重量" << endl; }
//	void display(){}
//};
//
//class Car :virtual public Vehicle{
//protected:
//	int aird;
//public:
//	Car(int a):aird(a) { cout << "载入Car类构造函数" << endl; }
//	void setAird(int a) { aird = a; cout << "重新设置空气排量" << endl;
//	}
//	void display();
//};
//
//class Boat:virtual public Vehicle{
//protected:
//	float tonnage;
//public:
//	Boat(float t):tonnage(t) { cout << "载入Boat类构造函数" << endl; }
//	void setTonnage(float T) { tonnage = T; cout << "重新设置排水量" << endl;
//	}
//	void display();
//};
//
//class AmphibianCar :public Car, public Boat {
//public:
//	AmphibianCar(int w, int a, float t) :Car(a), Boat(t), Vehicle(w) { cout << "载入AmphibianCar类构造函数" << endl; }
//	void display() {
//		printf("重量：%d吨，空气排量：%dCC，排水量：%.2f吨\n",weight,aird,tonnage);
//	}
//};
//
//int main() {
//	int wei, aird;
//	float tonnage;
//	cin >> wei >> aird >> tonnage;
//	AmphibianCar test(wei,aird,tonnage);
//	test.display();
//	cin >> wei >> aird >> tonnage;
//	test.setWeight(wei);
//	test.setAird(aird);
//	test.setTonnage(tonnage);
//	test.display();
//
//}