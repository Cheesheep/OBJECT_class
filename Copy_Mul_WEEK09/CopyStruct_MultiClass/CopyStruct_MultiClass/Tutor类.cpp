//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
///*************
//Tutor��Ŀ�������
//
//���룺����һ������
//
//�������õ���⿽�����캯��
//
//**************/
//
////���ʵ����STU�Ķ���
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
////������������
//int IDs; //ȫ�ֱ�����������������ʾ
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
//	STU s1("Tom"); //����ѧ������Tom
//	Tutor t1(s1);
//	IDs++;
//	cout << "Calling fuc()" << endl;
//	fuc(t1);
//
//	return 0;
//}