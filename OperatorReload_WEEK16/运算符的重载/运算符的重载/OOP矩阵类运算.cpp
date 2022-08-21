#include<iostream>
using namespace std;
class Matrix {
	int** mat;
	int row, column;
public:
	Matrix() {}
	Matrix(int r, int c) :row(r), column(c) {
		mat = new int* [row];
		for (int i = 0; i < row; i++)
		{
			mat[i] = new int[column];
			for (int j = 0; j < column; j++)
				cin >> mat[i][j];
		}
	}
	Matrix operator +(Matrix& m) {
		Matrix temp;
		temp.row = row; temp.column = column;
		temp.mat = new int* [row];
		for (int i = 0; i < row; i++)
		{
			temp.mat[i] = new int[column];
			for (int j = 0; j < column; j++)
				temp.mat[i][j] = mat[i][j] + m.mat[i][j];
		}
		return temp;
	}
	Matrix operator -(Matrix& m) {
		Matrix temp;
		temp.row = row; temp.column = column;
		temp.mat = new int* [row];
		for (int i = 0; i < row; i++)
		{
			temp.mat[i] = new int[column];
			for (int j = 0; j < column; j++)
				temp.mat[i][j] = mat[i][j] - m.mat[i][j];
		}
		return temp;
	}
	void diplay() {
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				cout << mat[i][j] << ' ';
			}
			cout << endl;
		}
	}
};

int main() {
	int t;
	cin >> t;
	while (t--) {
		int r, c;
		cin >> r >> c;
		Matrix a(r, c), b(r, c), test;
		test = a + b;
		cout << "Add:" << endl;
		test.diplay();
		test = a - b;
		cout << "Minus:" << endl;
		test.diplay();
		cout << "-----------------" << endl;

	}
}