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
        ListNode* modify = head;
        ListNode* move = head->next;
        int sum = 0;

        while (move != NULL) {
            if (move->val != 0) sum += move->val;
            else {
                modify->val = sum;
                modify->next = move->next;
                modify = modify->next;
                sum = 0;
            }
            move = move->next;
        }
        return head;
    }
};