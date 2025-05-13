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
class Solution
{
public:
    void reorderList(ListNode* head)
    {
        if(head==NULL||head->next==NULL) return;
         ListNode *slow=head;
         ListNode *fast=head;
         while(fast&&fast->next){
             slow=slow->next;
             fast=fast->next->next;
         }
         ListNode *root=slow->next;
         slow->next=NULL;
         ListNode *root1=NULL,*current=NULL;
         while(root)
         {
            
            current=root->next;
            root->next=root1;
            root1=root;
            root=current;
           
         }
         ListNode *root2=head;
         while(root1){
            ListNode *tem=new ListNode(root1->val);
            tem->next=root2->next;
            root2->next=tem;
            root2=root2->next->next;
            root1=root1->next;

         }
         
    }
};