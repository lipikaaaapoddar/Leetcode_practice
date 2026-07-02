class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int suffixsum = 0 ; 
        int ans =0;
        for(int i = satisfaction.size()-1; i>=0; i--){
            if(suffixsum + satisfaction[i] >0){
                suffixsum += satisfaction[i];
                ans += suffixsum;
            }
            else break;
        }
        return ans;
    }
};