//#include<iostream>
//using namespace std;
//
//struct ID {
//	char NAME[20];
//	char Terminal[10];
//	char operater[5];
//	char caIss[8];
//	char validity[8];
//	char Cnum[25];
//	char Traded[15];
//	float Cost;
//};
//
//int main() {
//	int t;
//	cin >> t;
//	ID* cus = new ID[t];
//	for (int i = 0; i < t; i++)
//	{
//		cin >> cus[i].NAME >> cus[i].Terminal >> cus[i].operater >> cus[i].caIss >> cus[i].validity >> cus[i].Cnum >> cus[i].Traded >> cus[i].Cost;
//	}
//	for (int i = 0; i < t; i++)
//	{
//		printf("Name: %s\nTerminal: %s operator: %s\nCard Issuers: %s Validity: %s\nCardNumber: ", cus[i].NAME, cus[i].Terminal, cus[i].operater, cus[i].caIss, cus[i].validity);
//		for (int j = 0; j < 4; j++)
//		{
//			cout << cus[i].Cnum[j];
//		}
//		cout << "********";
//		for (int j = 12; j < 16; j++)
//		{
//			cout << cus[i].Cnum[j];
//		}
//		printf("\nTraded: %s\nCosts: $%.2f", cus[i].Traded, cus[i].Cost);
//		if (i != t - 1) {
//			cout << endl;
//			cout << endl;
//		}
//	}
//	
//}