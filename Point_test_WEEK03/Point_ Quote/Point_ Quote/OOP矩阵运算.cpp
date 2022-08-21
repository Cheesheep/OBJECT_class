//#include<iostream>
//
//using namespace std;
//
//
//int main() {
//		int** map;
//		int row, column,sum = 0;
//		cin >> row >> column;
//		map = new int* [row];
//		for (int i = 0; i < row; i++)
//		{
//			*(map+i) = new int[column];
//			for (int j = 0; j < column; j++)
//			{	
//				cin >> *(*(map+i)+j);
//				sum += *(*(map + i) + j);
//			}
//		}
//		cout << sum << endl;
//		for (int i = 0; i < column; i++)
//		{
//			for (int j = 0; j < row; j++)
//			{
//				cout << *(*(map + j) + i) << ' ';
//			}
//			cout << endl;
//		}
//	return 0;
//}