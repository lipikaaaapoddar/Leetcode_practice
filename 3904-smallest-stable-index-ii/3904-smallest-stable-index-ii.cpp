class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
           int n = nums.size();
        vector<int> p_Max(n);
        vector<int> s_Min(n);
        p_Max[0] = nums[0];
        s_Min[n - 1] = nums[n - 1];
        for (int i = 1; i < n; i++) p_Max[i] = max(p_Max[i - 1], nums[i]);
        for (int i = n - 2; i >= 0; i--) s_Min[i] = min(s_Min[i + 1], nums[i]);
        for (int i = 0; i < n; i++) {
            if (p_Max[i] - s_Min[i] <= k) {
                return i;
            }
        }
        return -1;
    }
};