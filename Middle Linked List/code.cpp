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
    ListNode* middleNode(ListNode* head) {
         //middle 
         ListNode* fptr=head;
         ListNode* sptr=head;
         while(sptr && sptr->next){

         
         fptr=fptr->next;
         sptr=sptr->next->next;
         
         }
         return fptr;

        
    }
};
