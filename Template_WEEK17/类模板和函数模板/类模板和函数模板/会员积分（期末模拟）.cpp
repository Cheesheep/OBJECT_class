#include<iostream>
#include<vector>
#include<map>
using namespace std;

class ListNode {
    int head;
    ListNode* next;
public:
    ListNode() :head(0),next(NULL){}
    friend class Solution;
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = NULL;
        ListNode* cur = head->next;
        while (cur != NULL) {
            cur = head->next;
            head->next = pre;
            pre = head;
            head = cur;
        }
        return head;
    }
};

int main() {
	cout << "hello vscode" <<endl << "end"<<endl;
    system("pause");
    return 0;
	
}