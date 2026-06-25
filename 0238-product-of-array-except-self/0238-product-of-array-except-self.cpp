class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // edge case 
        if(nums.size() == 1) return {1};
        vector<int> pre(nums.size());
        vector<int> post(nums.size());
        vector<int> ans(nums.size());
        int pro = 1;
        for(int i =0; i<nums.size(); i++){
            pro *= nums[i];
            pre[i] = pro;
        }
        pro = 1;
        for(int i =nums.size()-1; i>=0; i--){
            pro *= nums[i];
            post[i] = pro;
        }
        ans[0] = post[1];
        ans[nums.size()-1] = pre[nums.size()-2];
        for(int i =1; i<nums.size()-1; i++){
            ans[i] = pre[i-1] * post[i+1];
        }
        return ans;
    }
};