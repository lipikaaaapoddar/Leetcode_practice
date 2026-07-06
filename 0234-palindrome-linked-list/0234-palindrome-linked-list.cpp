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
    ListNode* reverse_l(ListNode*head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr !=NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr=next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        // optimal - find mid , reverse second half , compare first and second half
        ListNode* mid = head; //slow pointer
        ListNode* start = head; //fast pointer
        while(start!=NULL && start->next!=NULL){
            mid = mid->next;
            start = start->next->next;
        }
        mid = reverse_l(mid);
        start = head;
        while(mid !=NULL){
            if(start->val != mid->val) return false;
            start = start->next;
            mid = mid->next;
        }
        return true;
    }
};