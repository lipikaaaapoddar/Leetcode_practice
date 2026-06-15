class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp; // number - frequency
        for(auto x : nums){
            mp[x]++;
        }
        priority_queue<pair<int,int>> mq; // frequency - number 
        for(auto y : mp){
            mq.push({y.second , y.first});
        }
        vector<int> ans;
        while(k--){
            ans.push_back(mq.top().second);
            mq.pop();
        }
        return ans;
    }
};