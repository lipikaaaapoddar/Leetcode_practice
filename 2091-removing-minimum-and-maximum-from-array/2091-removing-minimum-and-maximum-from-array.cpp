class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int s = min_element(nums.begin(),nums.end())-nums.begin();
        int l = max_element(nums.begin(),nums.end())-nums.begin();
        int a = min(s,l);
        int b = max(l,s);
        int send = b+1;
        int eend = nums.size()-a ;
        int dend = (a+1) + (nums.size()-b);

        return min({send , eend , dend});
    }
};