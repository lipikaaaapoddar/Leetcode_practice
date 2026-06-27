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
    void reorderList(ListNode* head) {
        // convert LL to vector
        vector<int> v ;
        ListNode* temp = head;
        while(temp){
            v.push_back(temp->val);
            temp = temp->next;
        }
        // perform the operation
        vector<int> ans;
        int i =0 , j= v.size()-1;
        while(i<=j){
            if(i==j) ans.push_back(v[i]);
            else {
                ans.push_back(v[i]);
                ans.push_back(v[j]);
            }
            i++;
            j--;
        }
        // converting back to LL
        temp = head;
        int k =0;
        while(temp){
            temp->val = ans[k];
            k++;
            temp = temp->next;
        }
    }
};