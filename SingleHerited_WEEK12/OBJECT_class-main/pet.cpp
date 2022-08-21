#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class Pet { //���࣬Ҳ�ǳ�����
protected:
	string kind; //��������
	int ID;	//�����ţ��̶�����Ϊ5λ������	
public:
	Pet() : kind("unset"), ID(-1) { }
	virtual void set(string tk, int ti) = 0; //��������������ͺͱ��
	virtual void print() { cout << "NONE" << endl; }
};

//�����Cat����Dog�����
class Dog :public Pet {
private: 
	int size;
	string name;
public:
	Dog(){}
	Dog(string name, int size) { this->name = name; this->size = size; }
	virtual void set(string tk, int ti) { kind = tk; ID = ti; }
	virtual void print() {
		cout <<kind<< "'s ID=" << ID+20000 << endl;
		cout << name << " is " ;
		switch (size) {
		case 1:cout <<"small"<<endl;break;
		case 2:cout << "medium" << endl;break;
		case 3:cout << "big" << endl;break;
		}
	}
};
class Cat :public Pet {
private: 
	string food;
	string name;
public:
	Cat() {}
	Cat(string name, string food) { this->name = name; this->food = food; }
	virtual void set(string tk, int ti) { kind = tk; ID = ti; }
	virtual void print() {
		cout <<kind<< "'s ID=" << ID+10000 << endl;
		cout << name << " likes " << food << endl;
	}
};

//�������������ȫ�ֺ������£�
void print_pet(Pet& pr)
{
	pr.print();
}

int main()
{
	string tk, ts, tf;
	int t, ti, tt;
	char ptype;
	cin >> t;
	while (t--)
	{
		cin >> ptype;
		if (ptype == 'C')
		{
			cin >> tk >> ti >> ts >> tf; //���͡���š�������ʳ��
			Cat cc(ts, tf);
			cc.set(tk, ti);
			print_pet(cc);
		}
		if (ptype == 'D')
		{
			cin >> tk >> ti >> ts >> tt; //���͡���š�������Ȯ��С
			Dog dd(ts, tt);
			dd.set(tk, ti);
			print_pet(dd);
		}
	}

	return 0;
}