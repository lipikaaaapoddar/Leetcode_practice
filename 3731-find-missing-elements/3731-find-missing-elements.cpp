class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        int e_min = nums[0];
        int e_max = nums[nums.size()-1];

        for(int i =e_min+1; i<e_max; i++){
            bool found = false;
            for(int j =0 ; j<nums.size(); j++){
                if(i == nums[j]) {
                    found = true;
                     break;}
            }
            if(!found) res.push_back(i);
        }
        return res;
    }
};