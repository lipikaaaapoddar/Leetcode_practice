class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count =0; 
        int sum =0;
        for(int num : nums){
            if(num%2==0 && num %3==0) {sum +=num;
            count++;}
        }
        return count >0 ? round(sum/count) : 0;
    }
};