#include<iostream>
using namespace std;
 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* p = l1, *q = l2;
		ListNode* lp = new ListNode(0);
		ListNode* t = lp;
		while (p != NULL || q != NULL){
			int x = (p != NULL) ? p->val : 0;
			int y = (q != NULL) ? q->val : 0;
			int sum = carry + x + y;
			carry = sum / 10;
			t->next = new ListNode(sum % 10);
			t = t->next;
			if (p != NULL) p = p->next;
			if (q != NULL) q = q->next;
		}
		if (carry > 0) {
			p->next = new ListNode(carry);

		}
		return lp;
	}
	void InitCreate(ListNode* lx){
		ListNode* Insert = lx;
		while (Insert->next != NULL)
		{
			Insert = Insert->next;
		}
		ListNode* pnew = new ListNode(0);
		cout << "请输入此位整数0~9：" << endl;
		cin >> Insert->val;
		Insert->next = pnew;

	}
	void Create(ListNode* lx){
		int a = 1;
		while (a){
			InitCreate(lx);
			cout << "0-->回车退出，否则继续" << endl;
			cin >> a;
		}
	}
	void show(ListNode* lx){
		ListNode* pshow = lx;
		while (pshow->next!= NULL){
			pshow = pshow->next;
			if(pshow->val!=0) cout << pshow->val;
		}
	}
	Solution(){}

	static int carry;
};

int Solution::carry = 0;

int main()
{
	ListNode* l1 = new ListNode(0);
	ListNode* l2 = new ListNode(0);
	Solution Sum;
	Sum.Create(l1);
	Sum.Create(l2);
	//ListNode* S=Sum.addTwoNumbers(l1,l2);
	Sum.show(Sum.addTwoNumbers(l1, l2));

	system("pause");
	return 0;
}