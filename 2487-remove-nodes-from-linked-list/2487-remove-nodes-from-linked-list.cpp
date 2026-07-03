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
    ListNode* reverse_list(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr){
            ListNode* next = curr->next;
            curr->next=prev;
            prev= curr;
            curr=next;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        if(!head) return nullptr;
        head = reverse_list(head);
        ListNode* temp = head;
        int max_n = temp->val;
        while(temp && temp->next){
            if( max_n > temp->next->val) {
                temp->next = temp->next->next;}
            else {temp = temp->next;
            max_n = temp->val;}
        }
        return reverse_list(head);
    }
};