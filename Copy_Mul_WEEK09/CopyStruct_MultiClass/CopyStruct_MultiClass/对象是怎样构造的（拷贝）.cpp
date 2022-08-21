//#include<iostream>
//
//using namespace std;
//class Object {
//	int data;
//public:
//	Object(){ cout << "Constructed by default, value = 0" << endl; }
//	Object(int va) :data(va) { cout << "Constructed using one argument constructor, value = " << data << endl; }
//	Object(Object& obj) {
//		data = obj.data;
//		cout << "Constructed using copy constructor, value = " << data << endl;
//	}
//};
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int type, value;
//		cin >> type;
//		if (type == 0)
//			Object myobj;
//		else if (type == 1)
//		{
//			cin >> value;Object myobj2(value);
//		}
//		else{
//			cin >> value;Object myobj3(value);Object myobj4(myobj3);
//		}
//	}
//}
