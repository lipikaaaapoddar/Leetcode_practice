class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        long long ans =0;
        for(int j =0 ; j<nums.size(); j++){
            long long sum =0;
            for(int i =j ; i<nums.size(); i++){
                sum +=nums[i];
                int last = sum%10;
                long long n = sum;
                while(n >= 10){
                    n /= 10;
                }
                int first = n;
                if(first == x && last == x){
                    ans++;
                }
            } 
        }
        return ans;
    }
};