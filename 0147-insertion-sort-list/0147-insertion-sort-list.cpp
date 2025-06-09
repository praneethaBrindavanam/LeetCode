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
    ListNode* insertionSortList(ListNode* head) {

        if(!head || !head->next) return head;

        stack<ListNode*> st1,st2 ;

        ListNode* temp = head->next;

        st1.push(head) ;

        while(temp){
            while(!st1.empty() && temp->val < st1.top()->val){
                st2.push(st1.top()) ;
                st1.pop() ;
            }

            st1.push(temp) ;

            while(!st2.empty()){
                st1.push(st2.top());
                st2.pop() ;
            }

            temp = temp->next;
        }

        ListNode* prev = st1.top() ;
        st1.pop() ;
        prev->next = nullptr;

        while(!st1.empty()){
            st1.top()->next = prev;
            prev = st1.top() ;
            st1.pop() ;
        }

        return prev;
    }
};