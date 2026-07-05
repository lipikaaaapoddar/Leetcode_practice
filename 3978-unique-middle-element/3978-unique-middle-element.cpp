class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int count = 0;
        int mid = nums.size()/2;
        for(auto x : nums){
            if(x == nums[mid]) count++;
        }
        return count ==1 ? true : false;
    }
};