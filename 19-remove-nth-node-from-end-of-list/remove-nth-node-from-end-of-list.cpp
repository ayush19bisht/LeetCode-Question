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
        ListNode* fast = head;
        ListNode* slow = head;
        
        // pointing fast to n step ahead
        for(int i=0 ; i<n ; i++){
            fast = fast->next;
        } 

        //if fast becomes null then delete head
        if(fast == NULL){
            return head->next;
        }

        //move both
        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        
        //delete node or skip node
        slow->next = slow->next->next;

        return head;
    }
};