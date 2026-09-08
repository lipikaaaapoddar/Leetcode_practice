class Solution {
public:
    int countCommas(int n) {
        long long ans =0;
        long long place = 1000;
        while(place <=n){
            ans += (n-place+1);
            place *=1000;
        }
        return ans;
    }
};