#include<iostream>

using namespace std;

int main() {
	 unsigned char a = true;
	for (int i = 0; i < 8; i++)
	{
		a = !a;
		printf("%d\n", a);
	}
}