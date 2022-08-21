//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//class commodity{
//	string id;
//	string name;
//	string color;
//	string size;
//	float price;
//	int num;
//public:
//	commodity(){}
//	commodity(string id) { this->id = id;cin >> name >> color >> size >> price >> num; }
//	float Calcu() { return price * num; }
//	void PrintCom() {
//		if (num) {
//			cout << name << ',' << color << ',' << size << ',' << fixed << setprecision(2) << price << ',' << num <<',' << fixed << setprecision(2) << num * price << endl;
//		}
//	};
//	int getNum() { return num; }
//	float getResult() { return num * price; }
//	bool getID(string st) { if (st == id) return 1;else return 0; }
//	void up() { num++; } void down() { if (num > 1) num--; }
//	void del() { num = 0; }
//};
//
//class Shop_Cart{
//	int typeNum;
//	int totalNum;
//	commodity *things;
//	float totalPrice;
//public:
//	Shop_Cart() :typeNum(0), totalNum(0), totalPrice(0.0) { things = new commodity[10]; }
//	~Shop_Cart() { delete[]things; }
//	void ADD();
//	void UP();
//	void DOWN();
//	void DELETE();
//	void PrintCart();
//};
//void Shop_Cart::PrintCart() {
//	for (int i = typeNum - 1; i >= 0; i--)
//	{
//		things[i].PrintCom();
//		totalNum += things[i].getNum();
//		totalPrice += things[i].getResult();
//	}
//	cout << "----------" << endl;
//	cout<<totalNum << "件商品，总商品金额" <<fixed<<setprecision(2)<< totalPrice << endl;
//}
//void Shop_Cart::ADD() {
//	string id;
//	cin >> id;
//	int r = -1;
//	for (int i = 0; i < typeNum; i++)//匹配商品编号
//	{
//		if (things[i].getID(id) && things[i].getNum()) {
//			r = i;
//			break;
//		}
//	}
//	if (r == -1) {//若不存在已有编号
//		commodity com(id);
//		things[typeNum++] = com;
//	}
//	else {
//		things[r].up();
//	}
//}
//void Shop_Cart::UP() {
//	int r;
//	string id;
//	cin >> id;
//	for (int i = 0; i < typeNum; i++)//匹配商品编号
//	{
//		if (things[i].getID(id)) {
//			r = i;
//			break;
//		}
//	}
//	things[r].up();
//}
//void Shop_Cart::DOWN() {
//	int r;
//	string id;
//	cin >> id;
//	for (int i = 0; i < typeNum; i++)//匹配商品编号
//	{
//		if (things[i].getID(id)) {
//			r = i;
//			break;
//		}
//	}
//	things[r].down();
//}
//void Shop_Cart::DELETE() {
//	int r;
//	string id;
//	cin >> id;
//	for (int i = 0; i < typeNum; i++)//匹配商品编号
//	{
//		if (things[i].getID(id)) {
//			r = i;
//			break;
//		}
//	}
//	things[r].del();
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int times;
//		cin >> times;
//		Shop_Cart mycart;
//		string operate;
//		for (int i = 0; i < times; i++)
//		{
//			cin >> operate;
//			if (operate == "ADD")
//				mycart.ADD();
//			else if (operate == "UP")
//				mycart.UP();
//			else if (operate == "DOWN")
//				mycart.DOWN();
//			else if (operate == "DELETE")
//				mycart.DELETE();
//		}
//		cout << "商品清单:"<<endl<<"商品,颜色,尺码,单价,数量,小计" << endl;
//
//		mycart.PrintCart();
//		cout << endl;
//	}
//}