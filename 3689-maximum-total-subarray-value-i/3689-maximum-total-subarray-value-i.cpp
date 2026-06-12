class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int min_e = *min_element(nums.begin(), nums.end());
        int max_e = *max_element(nums.begin(), nums.end());
        long long val = max_e - min_e;
        return k * val; 
    }
};