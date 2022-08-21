//#include<iostream>
//#include<iomanip>
//using namespace std;
//
////不用重载>运算符
//class Cdate
//{
//    int year, month, day;
//public:
//    Cdate() :year(0), month(0), day(0) {}
//    Cdate(int t) :year(t / 10000), month((t - year * 10000) / 100), day((t - year * 10000 - month * 100)) {}
//    operator int() {
//        return year * 10000 + month * 100 + day;
//    }
//    void print()
//    {
//        cout << year << "年" << setfill('0') << setw(2) << month << "月" << setfill('0') << setw(2) << day << "日" << endl;
//    }
//};
//
//int main()
//{
//    int t1, t2, t;
//    Cdate C1, C2;
//    cin >> t;
//    while (t--)
//    {
//        cin >> t1 >> t2;
//        C1 = t1;
//        C2 = t2;
//        ((C1 > C2) ? C1 : C2).print();
//    }
//    return 0;
//}
//
//
//
