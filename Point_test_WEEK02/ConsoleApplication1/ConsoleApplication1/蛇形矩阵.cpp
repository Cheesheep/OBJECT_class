#include<iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int** arr = new int* [n];
		for (int i = 0; i < n; i++)
		{
			arr[i] = new int[n];
			for (int j = 0; j < n; j++)
				arr[i][j] = 0;
		}
		int Max = n * n;
		int snake ,row,column;
		snake = 2;
		row = column = 0;
		arr[row][column] = 1;
		while (snake <= Max) {
			while (arr[row][column+1] == 0 )//向右
			{
				arr[row][++column] = snake++;
				if (column == n - 1)
					break;
			}
			while (arr[row+1][column] == 0)//向下
			{
				arr[++row][column] = snake++;
				if (row == n - 1)
					break;
			}
			while (arr[row][column-1] == 0)//向左
			{
				arr[row][--column] = snake++;
				if (column == 0)
					break;
			}
			while (arr[row-1][column] == 0 )//向上
			{
				arr[--row][column] = snake++;
				if (row == 0)
					break;
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n - 1; j++)
			{
				cout << arr[i][j] <<' ';
			}
			cout << arr[i][n - 1] << endl;
		}
		cout << endl;
	}
}