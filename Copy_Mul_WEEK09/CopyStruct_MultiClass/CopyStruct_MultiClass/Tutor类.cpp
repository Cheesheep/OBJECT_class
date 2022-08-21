//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
///*************
//Tutor类的拷贝构造
//
//输入：任意一个整形
//
//帮助更好地理解拷贝构造函数
//
//**************/
//
////填空实现类STU的定义
//class STU {
//	string name;
//public:
//	STU() {}
//	STU(string n):name(n) { cout << "Construct student " << name << endl; };
//	STU(STU& ss) { name = ss.name;name += "_copy";  cout << "Construct student " << name << endl;
//	}
//	~STU() { cout << "Destruct student " << name << endl; }
//
//};
//
////其他代码如下
//int IDs; //全局变量，用于输出结果提示
//class Tutor {
//private:
//	STU stu;
//public:
//	Tutor(STU& s) : stu(s)
//	{
//		cout << "Construct tutor " << IDs << endl;
//	}
//	~Tutor()
//	{
//		cout << "Destruct tutor " << IDs << endl;
//	}
//
//};
//void fuc(Tutor x)
//{
//	cout << "In function fuc()" << endl;
//}
//
//int main()
//{
//	cin >> IDs;
//	STU s1("Tom"); //输入学生姓名Tom
//	Tutor t1(s1);
//	IDs++;
//	cout << "Calling fuc()" << endl;
//	fuc(t1);
//
//	return 0;
//}