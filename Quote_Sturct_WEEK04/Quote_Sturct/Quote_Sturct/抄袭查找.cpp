//#include<iostream>
//using namespace std;
//struct Paper {
//	long int NO;
//	char An01[20];
//	char An02[20];
//	char An03[20];
//};
//
//int iscopy( Paper st1,  Paper st2) {
//	int len; //答案的字符串长度
//	int same;//相同字符串的个数
//	for (len = 0,same = 0; *(st1.An01+len) != '\0'; len++)//题目1对比
//	{
//		if (*(st1.An01 + len) == *(st2.An01 + len))
//			same++;
//	}
//	//cout <<"ratio1 is "<< (float)same / (float)len << endl;
//	if (same)
//		if ((float)same / (float)len >= 0.899)
//			return 1;
//	for (len = 0, same = 0; *(st1.An02 + len) != '\0'; len++)//题目2对比
//	{
//		if (*(st1.An02 + len) == *(st2.An02 + len))
//			same++;
//	}
//	//cout <<"ratio2 is "<< (float)same / (float)len << endl;
//	if (same)
//		if ((float)same / (float)len >= 0.899)
//			return 2;
//	for (len = 0, same = 0; *(st1.An03 + len) != '\0'; len++)//题目3对比
//	{
//		if (*(st1.An03 + len) == *(st2.An03 + len))
//			same++;
//	}
//	//cout <<"ratio3 is "<< (float)same / (float)len << endl;
//	if (same)
//		if ((float)same / (float)len >= 0.899)
//			return 3;
//	return 0;
//	
//	
//}
//
//int main() {
//	int n;
//	cin >> n;
//	Paper* Stu = new Paper[n];
//	for (int i = 0; i < n; i++)
//		cin >> Stu[i].NO >> Stu[i].An01>> Stu[i].An02>> Stu[i].An03;
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			int an = iscopy(Stu[i], Stu[j]);
//			if (an)
//				cout << Stu[i].NO << ' ' << Stu[j].NO << ' ' << an << endl;
//		}
//	}
//	delete []Stu;
//	
//}