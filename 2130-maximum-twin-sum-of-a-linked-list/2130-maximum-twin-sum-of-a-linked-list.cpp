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
    int pairSum(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        while(temp !=NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }

        int i =0 ; int j = ans.size()-1;
        int sum_m = 0;
        while(i<j){
            int sum = ans[i]+ans[j];
            sum_m = max(sum_m , sum);
            i++;
            j--;
        }
        return sum_m;
    }
};