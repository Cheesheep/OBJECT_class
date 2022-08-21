//#include <iostream>
//using namespace std;
//
//class Student {
//
//private:
//
//    int id;//学号
//
//    int score; //成绩
//
//    static int  maxscore;//最高分数
//
//    static int maxid;//最高分数学生学号
//
//public:
//
//    Student(int ti = 0, int ts = 0)
//
//        :id(ti), score(ts)
//    {}
//
//    static void findMax(Student& st); //寻找最高成绩和学号
//
//    static int getMaxScore() { return maxscore; }; //返回最高成绩
//
//    static int getMaxID() { return maxid; };//返回最高成绩的学号
//
//};
//
//void Student::findMax(Student& st) {
//    if (st.score > maxscore) {
//       maxscore = st.score;
//        maxid = st.id;
//    }
//}
//
//int Student::maxscore = 0;
//int Student::maxid = 0;
//
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--) {
//        int id, score;
//        cin >> id >> score;
//        Student st(id,score);
//        st.findMax(st);
//        if (t == 0)
//            cout << st.getMaxID() << "--" << st.getMaxScore() << endl;
//    }
//}