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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummyHead=new ListNode(-1);
        ListNode* curr=dummyHead;
        dummyHead->next=head;
        int count=0;
        while(head){
            if(head->next && head->val==head->next->val){
                int val=head->val;
                while(head && head->val==val){
                    head=head->next;
                }
                if(head==NULL) curr->next=NULL;
            } else {
                curr->next=head;
                curr=head;
                head=head->next;
            }
        }
        return dummyHead->next;
    }
};