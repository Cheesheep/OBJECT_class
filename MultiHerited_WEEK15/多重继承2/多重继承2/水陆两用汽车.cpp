//#include<iostream>
//using namespace std;
//class Vehicle {
//protected:
//	int weight;
//public:
//	Vehicle() {}
//	Vehicle(int w):weight(w) { cout << "����Vehicle�๹�캯��" << endl; }
//	void setWeight(int w) { weight = w; cout << "������������" << endl; }
//	void display(){}
//};
//
//class Car :virtual public Vehicle{
//protected:
//	int aird;
//public:
//	Car(int a):aird(a) { cout << "����Car�๹�캯��" << endl; }
//	void setAird(int a) { aird = a; cout << "�������ÿ�������" << endl;
//	}
//	void display();
//};
//
//class Boat:virtual public Vehicle{
//protected:
//	float tonnage;
//public:
//	Boat(float t):tonnage(t) { cout << "����Boat�๹�캯��" << endl; }
//	void setTonnage(float T) { tonnage = T; cout << "����������ˮ��" << endl;
//	}
//	void display();
//};
//
//class AmphibianCar :public Car, public Boat {
//public:
//	AmphibianCar(int w, int a, float t) :Car(a), Boat(t), Vehicle(w) { cout << "����AmphibianCar�๹�캯��" << endl; }
//	void display() {
//		printf("������%d�֣�����������%dCC����ˮ����%.2f��\n",weight,aird,tonnage);
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