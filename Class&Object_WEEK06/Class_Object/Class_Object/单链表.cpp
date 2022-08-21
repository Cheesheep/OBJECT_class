#include<iostream>

using namespace std;

class Node {
	int data;
	Node* next;
public:
	Node() :next(NULL) {}
	Node(int d) :data(d), next(NULL) {}
	~Node() { delete next; }
	friend class List;
};

class List {
	Node* head;
	int len;
public:
	List() { head = new Node; };
	~List() { delete head; };
	void Ins();
	void Del();
	void CreatList();
	void swap();
	void printList();
};

void List::CreatList() {
	len;
	cin >> len;
	Node* p = head;
	for (int i = 0; i < len; i++)
	{
		int d;
		cin >> d;
		Node* q = new Node(d);
		p->next = q;
		p = q;

	}
	printList();
}

void List::Ins() {
	int loc,data;
	cin >> loc >> data;
	if (loc > len + 1)
		cout << "error" << endl;
	else {
		Node* p = head;
		for (int i = 0; i < loc - 1; i++)
		{
			p = p->next;
		}
		Node* temp = new Node(data);
		temp->next = p->next;
		p->next = temp;
		printList();
		len++;
	}
}

void List::Del() {
	int loc, i;
	cin >> loc;
	if (loc > 0 && loc <= len) {
		Node* q, * p;
		p = head;
		for (i = 0; i < loc - 1; i++)
		{
			p = p->next;
		}
		if (i == loc - 1) {
			p->next = p->next->next;
			len--;
			printList();
		}
	}
	else
		cout << "error" << endl;
}


void List::swap() {
	int loc1, loc2;
	cin >> loc1 >> loc2;
	if (loc1 > loc2) {
		int temp = loc1;
		loc1 = loc2;
		loc2 = temp;
	}
		Node* p = head;
		Node* tem1,*tem2,*p1,*p2;
		tem1 = tem2 = p1 = p2 = NULL;
	for (int i = 0; i < loc2; i++)
	{
		if (i == loc1 - 1) {
			tem1 = p;
			p1 = p->next;
		}
		//cout << "i is" << i << endl;
		if (i == loc2 - 1) {

			tem2 = p;
			p2 = p->next;
		}
		p = p->next;
		if (!p) { //·ÀÖ¹Òç³ö±ß½ç
			break;
		}
	}
	if (!p) 
		cout << "error" << endl;
	else {
		tem1->next = p2;
		Node* tail = p2->next;
		p2->next = p1->next;
		p1->next = tail;
		tem2->next = p1;
		printList();
	}
}

void List::printList() {
	Node* p = head;
	while (p->next) {
		if (p->next->next == NULL)
			cout << p->next->data;
		else
			cout << p->next->data << ' ';
		p = p->next;
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		List mylist;
		mylist.CreatList();
		int n;
		cin >> n;
		while (n--)
			mylist.Ins();
		cin >> n;
		while (n--)
			mylist.Del();
	}
}