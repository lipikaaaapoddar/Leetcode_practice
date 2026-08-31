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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> cp;
        ListNode* prev = nullptr;
        ListNode* curr = head;
        int i = 1;

        while(curr->next!= NULL){
            if(prev != NULL && ((prev->val > curr-> val && curr->next->val> curr->val) ||(prev->val < curr-> val && curr->next->val < curr->val))) cp.push_back(i);
            prev = curr;
            curr = curr->next;
            i++;
        }

         if (cp.size() < 2)
            return {-1, -1};

        sort(cp.begin(),cp.end());
        int maxD = cp[cp.size()-1] -cp[0];
        int minD = INT_MAX ;
        for(int i =1 ; i<cp.size(); i++){
            minD=  min(minD, cp[i]-cp[i-1]);
        }

        return {minD, maxD};
    }
};