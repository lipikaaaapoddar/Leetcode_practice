class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i =0, j=0; 
        int len = INT_MAX;
        int sum =0;
        while(j<nums.size()){
         sum += nums[j];
        while(sum >= target){
            len = min(len,j-i+1);
            sum -= nums[i];
            i++;
        }
        j++;
       } 
       if(len != INT_MAX) return len;
       else return 0;
    }
};