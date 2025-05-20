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
    ListNode* rotateRight(ListNode* head, int k) {
        int count=0;
        ListNode *tail=head;
        ListNode *last;
        if(head==NULL || head->next==NULL){
            return head;
        }
        while(tail->next!=NULL){
            count++;
            tail=tail->next;
        }
        last=tail;
        count++;
        tail=head;
        k%=count;
        count=(count-k);
        while(count>1){
            count--;
            tail=tail->next;
        }
        last->next=head;
        head=tail->next;
        tail->next=NULL;
        return head;
    }
};