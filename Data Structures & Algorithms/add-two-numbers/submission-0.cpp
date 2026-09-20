/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();
        ListNode* cur = dummy;
        int nho = 0;
        while(l1!=nullptr||l2!=nullptr||nho!=0){
            int val1,val2;
            if(l1==nullptr) val1=0;
            else val1 = l1->val;
            if(l2==nullptr) val2=0;
            else val2 = l2->val;
            int a = val1+val2+nho;
            nho = a/10;
            a = a % 10;
            cur->next = new ListNode(a);
            cur = cur->next;
            l1 = (l1!=nullptr) ? l1->next : nullptr;
            l2 = (l2!=nullptr) ? l2->next : nullptr;
        }
        ListNode* res = dummy->next;
        delete dummy;
        return res;
    }
};
