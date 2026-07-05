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
    ListNode* rotateRight(ListNode* head, int k) {
        // two approaches --> use slow fast pointer or treat as circular list
        // step 1 calculate length and mod k with length
        // edge case if k =0 return head

        // move fast pointer k ahead at start 
        // then move both slow and fast pointer one time each till fast->next != null
        // store slow->next as new head and then break slow 
        // connect fast->next with prev head;

        if(!head) return head;
        ListNode* temp = head;
        int n = 0;
        while(temp != NULL){
            n+=1;
            temp = temp->next;
        }
        k = k % n;
        if(k==0) return head;

        ListNode* s = head;
        ListNode* f = head;
        while(k--){
            f = f->next;
        }
        while(f->next!=NULL){
            s= s->next;
            f = f->next;
        }

        ListNode* newh = s->next;
        s->next = NULL;
        f->next = head;

        return newh;

        // approach 2
        // when calculating length also save tail node so as to connect it to head
        // new head is is the node after new tail (n-k-1)
    }
};