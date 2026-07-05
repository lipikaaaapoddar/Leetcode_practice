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
        ListNode* temp = head;
        while(k !=1){ 
            temp = temp->next;
            k--;}
        ListNode* start = temp;
        ListNode* finish = head;
        while(temp->next!=NULL){
            temp=temp->next;
            finish=finish->next;
        }
        swap(start->val , finish->val);
        return head;
    }
};