#include<iostream>
using namespace std;

class CDate

{

private:

	int year, month, day;

public:

	CDate(int, int, int);

	bool check(); //���������Ƿ�Ϸ�

	bool isLeap();

	void print();

};

class COldID

{

private:

	char* p_id15, * p_name; //15λ���֤���룬����

	CDate birthday; //��������

public:

	COldID(char* p_idval, char* p_nameval, CDate& day);

	bool check(); //��֤15λ���֤�Ƿ�Ϸ�

	void print();

	~COldID();

};

int main() {}