/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *head_1 = headA;
        ListNode *head_2 = headB;
        while(head_1!= head_2){
            head_1 = head_1 == NULL ? headB : head_1->next;
            head_2 = head_2 == NULL ? headA : head_2->next;
        }
        return head_1;
    }
};