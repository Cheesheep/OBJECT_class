#include<iostream>
using namespace std;

class CDate

{

private:

	int year, month, day;

public:

	CDate(int, int, int);

	bool check(); //检验日期是否合法

	bool isLeap();

	void print();

};

class COldID

{

private:

	char* p_id15, * p_name; //15位身份证号码，姓名

	CDate birthday; //出生日期

public:

	COldID(char* p_idval, char* p_nameval, CDate& day);

	bool check(); //验证15位身份证是否合法

	void print();

	~COldID();

};

int main() {}