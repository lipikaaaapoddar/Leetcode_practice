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
        if(head==NULL ) return head;
        ListNode* current = head;
        ListNode* temp = current->next;
        while(temp !=NULL){
            if( current->val == temp->val)
            { current->next = temp->next;
                temp = current->next;}
            else {
            current = current->next;
            temp = current->next;}
        }
        return head;
    }
};