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
    ListNode* swapPairs(ListNode* head) {
        ListNode temp(0,head);
        ListNode *prev=&temp,*cur=head;
        while(cur && cur->next){
            ListNode *fptr=cur->next->next;
            ListNode *sptr=cur->next;

            sptr->next=cur;
            cur->next=fptr;
            prev->next=sptr;
            prev=cur;
            cur=fptr;
        }
        return temp.next;
    }
};