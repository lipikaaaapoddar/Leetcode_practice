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
        unordered_set<ListNode*> st;
        while(head_1){
            st.insert(head_1);
            head_1 = head_1->next;
        }
        while(head_2){
            if(st.count(head_2)) return head_2;
            head_2 = head_2->next;
        }
        return head_1;
    }
};