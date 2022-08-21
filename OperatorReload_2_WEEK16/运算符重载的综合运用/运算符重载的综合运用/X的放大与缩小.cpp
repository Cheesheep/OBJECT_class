
#include<iostream>
using namespace std;

class CXGraph
{
private:
	int n;
public:
	CXGraph(int nn) { n = nn; }//注意这里要加const
	friend ostream& operator<<(ostream& output, const CXGraph& c)//输出
	{
		for (int i = 1; i <= c.n / 2 + 1; i++)//前半行
		{
			for (int j = 1; j < i; j++)//输出空格
			{
				output << ' ';
			}

			for (int j = c.n; j >= 2 * i - 1; j--)
			{
				output << 'X';
			}
			output << endl;
		}

		for (int i = c.n / 2; i >= 1; i--)//后半行
		{
			for (int j = 1; j < i; j++)//输出空格
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
	 CXGraph operator++()//前置++
	{
		if (n != 21)
			n += 2;
		return CXGraph(n+2);
	}
	CXGraph operator++(int)//后置++
	{
		CXGraph cc(n);
		if (cc.n != 21)
			n += 2;
		return cc;
	}
	friend CXGraph operator--(CXGraph& c)//前置--
	{
		if (c.n != 1)
			c.n -= 2;
		return c;
	}
	CXGraph operator--(int)//后置--
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