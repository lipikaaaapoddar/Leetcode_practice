class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max_e = nums[nums.size()-1];
        int ans =0;
        for(int i =0 ; i<nums.size()-1; i++){
            ans = ans + (max_e-nums[i]);
        }
        return ans;
    }
};