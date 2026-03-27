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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* fast = head;
        ListNode* slow = head;
        if(head==NULL || head->next==NULL){
            return head;
        }
        for(int i=1 ; i<k ; i++){
            fast = fast->next;
        }
        ListNode* temp = fast;
        while(temp->next != NULL){
            slow = slow->next;
            temp = temp->next;
        }
        int t = fast->val;
        fast->val = slow->val;
        slow->val = t;
        return head;
    }
};