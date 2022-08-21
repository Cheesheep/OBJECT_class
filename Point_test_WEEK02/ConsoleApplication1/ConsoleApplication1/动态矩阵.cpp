//
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--) {
//        int row, column;
//        cin >> row >> column;
//        int** Arr = new int* [row];
//        for (int i = 0; i < row; i++)//初始化动态数组并赋值
//        {
//            Arr[i] = new int[column];
//            for (int j = 0; j < column; j++)
//            {
//                cin >> Arr[i][j];
//            }
//        }
//        int max, min;
//        max = min = **Arr;
//        for (int i = 0; i < row; i++)
//        {
//            for (int j = 0; j < column; j++)
//            {
//                if (Arr[i][j] > max)
//                    max = Arr[i][j];
//                if (Arr[i][j] < min)
//                    min = Arr[i][j];
//            }
//        }
//        cout << min << ' ' << max<<endl;
//
//    }
//}
//
