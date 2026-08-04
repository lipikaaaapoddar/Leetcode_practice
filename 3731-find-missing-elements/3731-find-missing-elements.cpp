class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> res;
       
            for(int i =0 ; i<nums.size()-1; i++){
                for(int x= nums[i]+1 ; x< nums[i+1]; x++) {
                    res.push_back(x);}
                    }
        return res;
    }
};