class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int x:nums) mp[x]++;
        int ans=0;
        for(auto &[num, cnt] : mp){
            if(cnt == 1) return -1;
            ans += (cnt+2)/3;
        }
        return ans;
    }
};