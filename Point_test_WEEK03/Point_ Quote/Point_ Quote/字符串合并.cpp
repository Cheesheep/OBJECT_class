//
//#include <iostream>
//using namespace std;
//
//char* strAdd(char* s1, char* s2) {
//    char* STR = new char[25];
//    int snum = 0;
//    while (*s1 != '\0') {
//        STR[snum++] = *s1++;
//    }
//    while (*s2 != '\0') {
//        STR[snum++] = *s2++;
//    }
//    STR[snum] = '\0';
//    return STR;
//}
//
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--) {
//        char* s1, * s2;
//        s1 = new char[15];
//        s2 = new char[15];
//        cin >> s1 >> s2;
//        cout << s1 << ' ' << s2 << ' '<< strAdd(s1,s2)<<endl;
//    }
//}