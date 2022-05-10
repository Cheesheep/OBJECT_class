//#include<iostream>
//using namespace std;
//
//class Cal {
//protected:
//	int value;
//public:
//	Cal() {}
//	void increment() { value++; }
//	
//};
//
//
//class CircleCal : public Cal {
//private:
//	int max_value, min_value;
//public:
//	CircleCal():max_value(60),min_value(0){}
//	void increment() {
//		value++;
//		if (value >= max_value)
//			value = min_value;
//	}
//	void set() {
//		cin >> value;
//	}
//	int getVal() { return value; }
//	void hourset() { cin >> value; max_value = 24; min_value = 0; }
//};
//
//class Timer {
//private:
//	CircleCal hour, minute, second;
//public:
//	Timer(){
//		hour.hourset();
//		minute.set();
//		second.set();
//	}
//	void time(int pass) {
//		for (int i = 0; i < pass; i++)  
//		{
//			second.increment();
//			if (second.getVal() == 0) {
//				minute.increment();
//				if (minute.getVal() == 0)
//					hour.increment(); 
//			}
//		}
//	}
//	void display() { cout << hour.getVal() << ':' << minute.getVal() << ':' << second.getVal() << endl; }
//};
//
//int main() {
//	int t,pa;
//	cin >> t;
//	while (t--) {
//		Timer ti;
//		cin >> pa;
//		ti.time(pa);
//		ti.display();
//	}
//}