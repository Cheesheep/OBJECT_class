//#include<iostream>
//
//using namespace std;
//
//class Animal {
//protected:
//	string name;
//	int age;
//public:
//	Animal() { cin >> name >> age; }
//	virtual void speak() = 0;
//};
//
//class Dog :public Animal{
//public:
//	virtual void speak() {
//		cout << "Hello,I am " << name << ',' << "WangWang."<<endl;
//	}
//};
//class Tiger :public Animal{
//public:
//	virtual void speak() {
//		cout << "Hello,I am " << name << ',' << "AOOO."<<endl;
//	}
//};
//class Duck :public Animal{
//public:
//	virtual void speak() {
//		cout << "Hello,I am " << name << ',' << "GAGA."<<endl;
//	}
//};class Pig :public Animal{
//public:
//	virtual void speak() {
//		cout << "Hello,I am " << name << ',' << "HENGHENG."<<endl;
//	}
//};
//
//int main() {
//	int t;
//	cin >> t;
//	Animal* base;
//	while (t--) {
//		string type;
//		cin >> type;
//		if (type == "Dog") {
//			Dog ani;
//			base = &ani;
//			base->speak();
//		}else if (type == "Tiger") {
//			Tiger ani;
//			base = &ani;
//			base->speak();
//		}else if (type == "Duck") {
//			Duck ani;
//			base = &ani;
//			base->speak();
//		}else if (type == "Pig") {
//			Pig ani;
//			base = &ani;
//			base->speak();
//		}
//		else {
//			Dog none;
//			cout << "There is no " << type << " in our Zoo." << endl;
//		}
//	}
//}