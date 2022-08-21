//#include <iostream>
//using namespace std;
//
//class Date{
//    int year, month, day;
//public:
//    Date() { cin >> year >> month >> day; }
//    int getY() { return year;}
//    int getM() { return month; }
//    int getD() { return day; }
//};
//
//class VIP {
//    int id;
//    Date birth;
//public:
//    VIP(int id){ this->id = id;}
//    int getid() { return id; }
//    double Discount(int a, int b);
//};
//
//double VIP::Discount(int tm,int td) {
//    if (tm == birth.getM() && td == birth.getD())
//        return 0.5;
//    else return 0.95;
//}
//int main()
//{
//    int t;
//    int year, mon, day;
//    cin >> year >> mon >> day;
//    cin >> t;
//    while (t--) {
//        double consume;
//        int id;
//        cin >> id;
//        VIP cus(id);
//        cin >> consume;
//        consume *= cus.Discount(mon,day);
//        cout << cus.getid() << "'s consumption is " << int(consume) << endl;
//    }
//}