class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map <int,int> mp;
        for(int i =0 ; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        vector <int> ans;
        for(auto m : mp){
            if (m.second == 1) ans.push_back(m.first);
        }
        return ans;
    }
};