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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* move = head->next;
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        long long sum = 0;
        while(move!=NULL){
            if(move->val ==0){
                temp->next = new ListNode(sum);
                temp = temp->next;
                sum =0;
            }
            else sum += move->val;
            move = move->next;
        }
        return dummy->next;
    }
};