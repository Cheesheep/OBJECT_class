
#include<iostream>
using namespace std;

class CXGraph
{
private:
	int n;
public:
	CXGraph(int nn) { n = nn; }//ע������Ҫ��const
	friend ostream& operator<<(ostream& output, const CXGraph& c)//���
	{
		for (int i = 1; i <= c.n / 2 + 1; i++)//ǰ����
		{
			for (int j = 1; j < i; j++)//����ո�
			{
				output << ' ';
			}

			for (int j = c.n; j >= 2 * i - 1; j--)
			{
				output << 'X';
			}
			output << endl;
		}

		for (int i = c.n / 2; i >= 1; i--)//�����
		{
			for (int j = 1; j < i; j++)//����ո�
			{
				output << ' ';
			}
			for (int j = c.n; j >= 2 * i - 1; j--)
			{
				output << "X";
			}
			output << endl;
		}
		return output;
	}
	 CXGraph operator++()//ǰ��++
	{
		if (n != 21)
			n += 2;
		return CXGraph(n+2);
	}
	CXGraph operator++(int)//����++
	{
		CXGraph cc(n);
		if (cc.n != 21)
			n += 2;
		return cc;
	}
	friend CXGraph operator--(CXGraph& c)//ǰ��--
	{
		if (c.n != 1)
			c.n -= 2;
		return c;
	}
	CXGraph operator--(int)//����--
	{
		CXGraph cc(n);
		if (cc.n != 1)
			n -= 2;
		return cc;
	}

};

int main()
{
	int t, n;
	string command;
	cin >> n;
	CXGraph xGraph(n);
	cin >> t;
	while (t--)
	{
		cin >> command;
		if (command == "show++")
		{
			cout << xGraph++ << endl;
		}
		else if (command == "++show")
		{
			cout << ++xGraph << endl;
		}
		else if (command == "show--")
		{
			cout << xGraph-- << endl;
		}
		else if (command == "--show")
		{
			cout << --xGraph << endl;
		}
		if (command == "show")
		{
			cout << xGraph << endl;
		}
	}
	return 0;
}