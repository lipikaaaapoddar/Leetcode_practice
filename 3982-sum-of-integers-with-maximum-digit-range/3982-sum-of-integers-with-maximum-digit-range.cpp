class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<int> digit(nums.size());
        for( int i=0; i<nums.size(); i++){
            int x =  nums[i];
            int small = INT_MAX;
            int large = INT_MIN;
            while(x>0){
                int d = x % 10;
                small = min(small,d);
                large = max(large,d);
                x/=10;
            }
            digit[i]= large-small;
        }
        int m = *max_element(digit.begin(), digit.end());
        int sum = 0;
        for( int i=0; i<nums.size(); i++){
            if(digit[i]== m) sum +=nums[i];
        }
        return sum;
    }
};