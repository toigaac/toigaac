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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==nullptr) return 0;
        ListNode* count=head;
        int size=1;
        while(count->next!=nullptr){
            size++;
            count=count->next;
        }
        int step=size-n;
        if(step==0){
            ListNode* tmp1=head;
            head=head->next;
            tmp1->next=nullptr;
            delete tmp1;
            return head;
        }
        ListNode* curr=head;
        while(step>1){
            curr=curr->next;
            step--;
        }
        ListNode* tmp=curr->next;
        curr->next=tmp->next;
        tmp->next=nullptr;
        delete tmp;
        return head;
    }
};
