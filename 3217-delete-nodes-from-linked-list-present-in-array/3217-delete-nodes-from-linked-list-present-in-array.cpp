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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
       set<int> st;
       for(auto x : nums) st.insert(x);
       while(head && st.find(head->val) !=st.end()) {head = head->next;}
       if (head == NULL) return NULL;
       ListNode* temp = head;
       while(temp->next !=NULL){
        if(st.contains(temp->next->val)) temp->next = temp->next->next;
        else temp = temp->next;
       }
       return head;
    }
};