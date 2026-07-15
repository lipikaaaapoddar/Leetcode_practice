class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i =0 , j = nums.size()-1;
        while(i<j){
            int mid = i + (j-i)/2;
            int c=0;
            for(int num : nums){
                if(num<= mid) c++;
            }
            if(c>mid) j = mid;
            else i = mid+1;
        }
        return i;
    }
};