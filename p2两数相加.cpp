//Definition for singly-linked list.
#include "iostream"
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(-1);
        ListNode *tail = head;
        int up = 0;
        while ((l1 != nullptr) || (l2 != nullptr) || up >0) {
            int sum = ((l1!=nullptr)? l1->val:0) + ((l2!=nullptr) ? l2->val : 0) + up;
            up = sum / 10;
            tail->next = new ListNode((int)sum%10);
            tail = tail->next;
            if (l1!= nullptr) l1 = l1->next;
            if (l2!= nullptr) l2 = l2->next;
        }
        return head->next;
    }
    void show(ListNode* h)
    {
        while (h != nullptr)
        {
            printf("%d ", h->val);
            h = h->next;
        }
        printf("\n");
    }
};


int main()
{
    ListNode *a = new ListNode(9, new ListNode(9, new ListNode(9, new ListNode(9))));
    ListNode *b = new ListNode(9);
    Solution solution;

    ListNode *c = solution.addTwoNumbers(a, b);
    solution.show(c);
    free(a);
    free(b);
    return 0;
}

