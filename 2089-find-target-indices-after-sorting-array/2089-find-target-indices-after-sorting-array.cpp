class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> ans;

        int i =0 , j = nums.size()-1 , first=-1;
        while(i<=j){
            int mid = i + (j-i)/2;
            if(nums[mid]== target){
               first = mid;
               j = mid-1;
            }
            else if(nums[mid]<target){
                i=mid+1;
            }
            else j = mid-1;
        }
        
        if(first ==-1) return {};

        i =0 , j = nums.size()-1 ;
        int last=-1;
        while(i<=j){
            int mid = i + (j-i)/2;
            if(nums[mid]== target){
               last = mid;
               i = mid+1;
            }
            else if(nums[mid]<target){
                i=mid+1;
            }
            else j = mid-1;
        }

        while(first<= last){
            ans.push_back(first);
            first++;
        }
        return ans;
    }
};