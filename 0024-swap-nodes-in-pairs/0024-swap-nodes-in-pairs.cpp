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
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;
        
        ListNode* dummy =  new ListNode(0);
        dummy ->next = head;
       ListNode* prev = dummy;
       while(prev->next!= NULL && prev->next->next !=NULL){
            ListNode* fir = prev->next;
            ListNode* sec = prev->next->next;
            fir->next = sec->next;
            sec->next = fir;
            prev->next= sec;
            prev = fir;
       } 
       return dummy->next;
    }
};