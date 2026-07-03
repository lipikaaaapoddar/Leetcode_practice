class Solution {
public:
    bool isposs(vector<int>& weights, int days, int capacity) {
        int req_day = 1;
        int c_load =0;
        for(int w : weights){
            if(c_load + w <= capacity) c_load +=w;
            else {
                req_day++;
                c_load = w;
            }
        }
        return req_day <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum =0;
        for(auto ch : weights){
            sum +=ch;
        }
        int low = *max_element(weights.begin(),weights.end());
        int high = sum;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(isposs(weights , days,mid)) high = mid-1;
            else low = mid +1;
        }
        return low;
    }
};