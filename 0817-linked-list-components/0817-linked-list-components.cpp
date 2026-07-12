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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> st;
        for(int num : nums){
            st.insert(num);
        }
        int ans =0;
        ListNode* temp = head;
        while(temp){
            if(st.count(temp->val) && (temp->next == NULL || st.count(temp->next->val) == 0 ))  ans++;
            temp = temp->next;
        }
        return ans;
    }
};